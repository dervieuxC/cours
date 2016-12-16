create table region(	rno integer not null primary key,
			rnom char(30));

create table cru(	cruno char(2) not null primary key,
			crunom char(30),
			rno integer not null,

			foreign key (rno) references region(rno));

create table client(	clino integer not null primary key,
			clinom char(30));

create table vin( 	vno integer not null primary key,
			cruno char(2) not null,
			vmilles integer not null,
			foreign key (cruno) references cru(cruno));

create table achat(	clino integer not null,
			vno integer not null,
			asem integer not null,
			aquant integer not null,
			primary key (clino,vno,asem),
			foreign key(clino) references client(clino),
			foreign key (vno) references vin(vno));
			
insert into region values (1,'Alsace');
insert into region values (2,'Beaujolais');
insert into region values (3,'Bordeaux');
insert into region values (4,'Bourgogne');
insert into region values (5,'Pays de Loire');

insert into client values (1001,'Fraudeau');
insert into client values (1002,'Lambert');
insert into client values (1003,'Dupont');
insert into client values (1004,'Simonneau');
insert into client values (1005,'Lautrec');

insert into cru values ('VO','Volnay', 4);
insert into cru values ('TO','Tokay', 1);
insert into cru values ('MU','Muscadet', 5);
insert into cru values ('PF','Pouilly-Fuissé', 4);
insert into cru values ('CH','Chenas', 2);
insert into cru values ('RO','Romanée', 4);
insert into cru values ('HB','Haut-Brion', 3);
insert into cru values ('MO','Morgon', 2);
insert into cru values ('PO','Pommard', 4);
insert into cru values ('SA','Sauterne', 3);


insert into vin values (10,'VO', 1985);
insert into vin values (11,'VO', 1990);
insert into vin values (20,'TO', 1991);
insert into vin values (30,'MU', 1992);
insert into vin values (40,'PF', 1991);
insert into vin values (41,'PF', 1992);
insert into vin values (50,'CH', 1992);
insert into vin values (60,'PO', 1982);
insert into vin values (61,'PO', 1985);
insert into vin values (70,'HB', 1987);
insert into vin values (80,'RO', 1989);
insert into vin values (85,'RO', 1990);
insert into vin values (90,'MO', 1992);
insert into vin values (5,'SA', 1988);


insert into achat values (1005,11, 25, 10);
insert into achat values (1003,50, 30, 15);
insert into achat values (1002,10, 12, 10);
insert into achat values (1002,61, 15, 20);
insert into achat values (1002,85, 23, 15);
insert into achat values (1002,41, 31, 10);
insert into achat values (1002,30, 31, 12);
insert into achat values (1001,20, 32, 10);
insert into achat values (1001,10, 30, 50);
insert into achat values (1004,90, 35, 25);
insert into achat values (1004,11, 35, 5);
insert into achat values (1004,11, 40, 15);
insert into achat values (1001,60, 40, 15);
insert into achat values (1003,70, 49, 20);
insert into achat values (1003,80, 39, 10);	
