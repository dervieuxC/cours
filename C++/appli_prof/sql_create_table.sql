drop table sections;
drop table eleves;
drop table matieres;
drop table affectation;
drop table evaluations;
drop table notes;

create table sections 
(id integer not null primary key,
nom varchar(5) not null);

create table eleves
(id integer not null primary key,
nom varchar(20) not null,
prenom varchar(20) not null,
idSection integer not null references sections(id));

create table matieres 
(id integer not null primary key,
nom varchar(10) not null,
coeff integer not null default 1);

create table affectation
(idMatiere integer not null references matieres(id),
idSection integer not null references sections(id),
primary key (idMatiere,idSection));

create table evaluations
(id integer not null primary key,
coeff integer not null default 1,
dateEval date not null,
idMatiere integer,
idSection integer,
foreign key (idMatiere,idSection) references affectation (idMatiere,idSection));

create table notes
(idEleve integer references eleves(id),
idEval integer references evaluations(id),
valeur numeric(4,2) not null,
primary key (idEleve,idEval));

insert into eleves(id,nom,prenom)
values(1,dervieux,corentin);
