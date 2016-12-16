--création de la base de donnée
create table Ouvrier(no integer not null primary key,nom varchar(30) not null,prenom varchar(30) not null);

create table Qualif (no integer not null primary key,libelleQualif varchar(50));

create table Engin (noImmat varchar(10) not null primary key,nomUsage varchar(30) not null,marque varchar(15) not null,modele varchar(15) not null,dateMiseEnCirculation date not null,qno integer not null,foreign key (qno) references Qualif(no));

create table MissionVerifie(no integer not null primary key,dateDebut date not null,dateFin date,ono integer not null,enoImmat varchar(10),foreign key (ono) references Ouvrier(no),foreign key (enoImmat) references Engin(noImmat));


create table examen (dateObtention date not null,ono integer not null,qno integer not null,foreign key(qno) references Qualif(no),foreign key(ono) references Ouvrier(no),primary key(qno,ono));


create database dbChantier
--créer un utilisateur
grant all privileges on dbChantier.* to adminDBChantier@localhost identified by 'xuactf42';
--jeux de test
insert into Ouvrier values(1,'dervieux','corentin');
insert into Ouvrier values(2,'huguet','alexis');
insert into Ouvrier values(3,'moro','luc');
insert into Ouvrier values(4,'bourdon','alex');
insert into Ouvrier values(5,'jolly','fred');

insert into Qualif values(10,'permis camion');
insert into Qualif values(20,'rouleau');
insert into Qualif values(30,'pelle mécha');
insert into Qualif values(40,'glandeur');
insert into Qualif values(50,'chef de chantier');

insert into Engin values('CC420TT','camion de transport','CAT','5485','1996-22-08',10);
insert into Engin values('SLT4251','applatire','CAT','1565','2016-11-27',20);
insert into Engin values('69SIO69','creuser','CAT','7584','2001-12-25',30);

insert into examen values('1997-01-30',2,40);
insert into examen values('1996-08-22',1,50);
insert into examen values('2015-09-25',3,20);
insert into examen values('2008-08-14',4,30);
insert into examen values('2006-03-12',1,10);

insert into MissionVerifie values(100,'2015-12-27','2016-01-06',1,'CC420TT');
insert into MissionVerifie values(200,'2002-08-12','2002-08-15',4,'69SIO69');
insert into MissionVerifie values(300,'2011-11-15','2012-12-12',2,'SLT4251');
insert into Mission values(600,'2011-11-15','2012-12-12',3,'SLT4251');
insert into Mission values(700,'2002-08-12','2002-08-15',2,'69SIO69');




--obtenir les bonnes missions 
select* from MissionVerifie where ono in (select ono from examen where examen.qno=(select qno from Engin where noImmat=MissionVerifie.enoImmat));

create view Mission as select* from MissionVerifie where ono in (select ono from examen where examen.qno=(select qno from Engin where noImmat=MissionVerifie.enoImmat)) with check option;--ne fonctionne pas

--deuxieme requete quipermet d'obtenir les missions dont seul les personnes qualifié travaille
select* from MissionVerifie where (ono,enoImmat) in (select ono,noImmat from Engin inner join examen on examen.qno=Engin.qno);
--view avec un check qui permet que l'on ne puisse plus assigner une mission sur un certain engin a une personne ne possedant pas la qualification
create view Mission as select* from MissionVerifie where (ono,enoImmat) in (select ono,noImmat from Engin inner join examen on examen.qno=Engin.qno) with check option;
