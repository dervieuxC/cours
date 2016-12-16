--Creation de la base de données
create database dbVin;
--Créer puis donner des privileges à un utilisateur
grant all privileges on dbVin.* to userDBVin@localhost identified by 'xuactf42';
--Insérer le script sql
\. creBaseVin.sql

--Informations de la table achat
select * from achat;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1001 |  10 |   30 |     50 |
|  1001 |  20 |   32 |     10 |
|  1001 |  60 |   40 |     15 |
|  1002 |  10 |   12 |     10 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1002 |  61 |   15 |     20 |
|  1002 |  85 |   23 |     15 |
|  1003 |  50 |   30 |     15 |
|  1003 |  70 |   49 |     20 |
|  1003 |  80 |   39 |     10 |
|  1004 |  11 |   35 |      5 |
|  1004 |  11 |   40 |     15 |
|  1004 |  90 |   35 |     25 |
|  1005 |  11 |   25 |     10 |
+-------+-----+------+--------+

--Informations de la table vin
select* from vin;
+-----+-------+---------+
| vno | cruno | vmilles |
+-----+-------+---------+
|   5 | SA    |    1988 |
|  10 | VO    |    1985 |
|  11 | VO    |    1990 |
|  20 | TO    |    1991 |
|  30 | MU    |    1992 |
|  40 | PF    |    1991 |
|  41 | PF    |    1992 |
|  50 | CH    |    1992 |
|  60 | PO    |    1982 |
|  61 | PO    |    1985 |
|  70 | HB    |    1987 |
|  80 | RO    |    1989 |
|  85 | RO    |    1990 |
|  90 | MO    |    1992 |
+-----+-------+---------+

--Informations de la table client
 select * from client;
+-------+-----------+
| clino | clinom    |
+-------+-----------+
|  1001 | Fraudeau  |
|  1002 | Lambert   |
|  1003 | Dupont    |
|  1004 | Simonneau |
|  1005 | Lautrec   |
+-------+-----------+
--Information de la table region 
 select * from region;
+-----+---------------+
| rno | rnom          |
+-----+---------------+
|   1 | Alsace        |
|   2 | Beaujolais    |
|   3 | Bordeaux      |
|   4 | Bourgogne     |
|   5 | Pays de Loire |
+-----+---------------+
--Information de la table cru
 select * from cru;
+-------+---------------+-----+
| cruno | crunom        | rno |
+-------+---------------+-----+
| CH    | Chenas        |   2 |
| HB    | Haut-Brion    |   3 |
| MO    | Morgon        |   2 |
| MU    | Muscadet      |   5 |
| PF    | Pouilly-Fuiss |   4 |
| PO    | Pommard       |   4 |
| RO    | Roman         |   4 |
| SA    | Sauterne      |   3 |
| TO    | Tokay         |   1 |
| VO    | Volnay        |   4 |
+-------+---------------+-----+

--Liste des noms des crus et de leur numéro de région.
select cru.crunom,cru.rno from cru;
+---------------+-----+
| crunom        | rno |
+---------------+-----+
| Chenas        |   2 |
| Haut-Brion    |   3 |
| Morgon        |   2 |
| Muscadet      |   5 |
| Pouilly-Fuiss |   4 |
| Pommard       |   4 |
| Roman         |   4 |
| Sauterne      |   3 |
| Tokay         |   1 |
| Volnay        |   4 |
+---------------+-----+

--Liste des années de millésime (attribut VMILLES) des vins. Que remarquez-vous?
select vin.vmilles from vin;
+---------+
| vmilles |
+---------+
|    1988 |
|    1985 |
|    1990 |
|    1991 |
|    1992 |
|    1991 |
|    1992 |
|    1992 |
|    1982 |
|    1985 |
|    1987 |
|    1989 |
|    1990 |
|    1992 |
+---------+
--On peut remarquer qu'il y a plusieurs fois la même date

--Liste sans doublons des années de millésime (attribut VMILLES) des vins.
select distinct vin.vmilles from vin;
+---------+
| vmilles |
+---------+
|    1988 |
|    1985 |
|    1990 |
|    1991 |
|    1992 |
|    1982 |5. Liste des noms de client par ordre alphabétique croissant.
|    1987 |
|    1989 |
+---------+

--Liste des noms de client par ordre alphabétique croissant.
select client.clinom from client order by clinom;
+-----------+
| clinom    |
+-----------+
| Dupont    |
| Fraudeau  |
| Lambert   |
| Lautrec   |
| Simonneau |
+-----------+

--Liste des achats (tous les attributs) classée par ordre décroissant des quantités.
select * from achat order by aquant desc;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1001 |  10 |   30 |     50 |
|  1004 |  90 |   35 |     25 |
|  1003 |  70 |   49 |     20 |
|  1002 |  61 |   15 |     20 |
|  1004 |  11 |   40 |     15 |
|  1003 |  50 |   30 |     15 |
|  1002 |  85 |   23 |     15 |
|  1001 |  60 |   40 |     15 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1002 |  10 |   12 |     10 |
|  1003 |  80 |   39 |     10 |
|  1001 |  20 |   32 |     10 |
|  1005 |  11 |   25 |     10 |
|  1004 |  11 |   35 |      5 |
+-------+-----+------+--------+

--Liste des achats (tous les attributs) classée par semaine d'achat décroissante et par numéro de vin croissant.
select * from achat order by asem desc,vno;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1003 |  70 |   49 |     20 |
|  1004 |  11 |   40 |     15 |
|  1001 |  60 |   40 |     15 |
|  1003 |  80 |   39 |     10 |
|  1004 |  11 |   35 |      5 |
|  1004 |  90 |   35 |     25 |
|  1001 |  20 |   32 |     10 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1001 |  10 |   30 |     50 |
|  1003 |  50 |   30 |     15 |
|  1005 |  11 |   25 |     10 |
|  1002 |  85 |   23 |     15 |
|  1002 |  61 |   15 |     20 |
|  1002 |  10 |   12 |     10 |
+-------+-----+------+--------+

--faîtes afficher 5*2
select 5*2;
+-----+
| 5*2 |
+-----+
|  10 |
+-----+

--Ecrire la requête qui affiche dans un tableau HTML les crus
select '<table>'
union select concat(concat('<tr><td>',cru.cruno ),concat('</td><td>',cru.crunom),concat('</td><td>',cru.rno,'</td></tr>'))
from cru
union select '</table>';
+------------------------------------------------------+
| <table>                                              |
+------------------------------------------------------+
| <table>                                              |
| <tr><td>CH</td><td>Chenas</td><td>2</td></tr>        |
| <tr><td>HB</td><td>Haut-Brion</td><td>3</td></tr>    |
| <tr><td>MO</td><td>Morgon</td><td>2</td></tr>        |
| <tr><td>MU</td><td>Muscadet</td><td>5</td></tr>      |
| <tr><td>PF</td><td>Pouilly-Fuiss</td><td>4</td></tr> |
| <tr><td>PO</td><td>Pommard</td><td>4</td></tr>       |
| <tr><td>RO</td><td>Roman</td><td>4</td></tr>         |
| <tr><td>SA</td><td>Sauterne</td><td>3</td></tr>      |
| <tr><td>TO</td><td>Tokay</td><td>1</td></tr>         |
| <tr><td>VO</td><td>Volnay</td><td>4</td></tr>        |
| </table>                                             |
+------------------------------------------------------+

--Ecrire la requête qui à partir de la table region reconstruit le script d'insertion: insert into...
select concat('insert into region values (',region.rno,',"',region.rnom,'"',');')
from region;
+----------------------------------------------------------------------------+
| concat('insert into region values (',region.rno,',"',region.rnom,'"',');') |
+----------------------------------------------------------------------------+
| insert into region values (1,"Alsace");                                    |
| insert into region values (2,"Beaujolais");                                |
| insert into region values (3,"Bordeaux");                                  |
| insert into region values (4,"Bourgogne");                                 |
| insert into region values (5,"Pays de Loire");                             |
+----------------------------------------------------------------------------+

--Affichez le nombre de clients présents dans la base.
select count(distinct clino) as nbDeClient
from client;
+------------+
| nbDeClient |
+------------+
|          5 |
+------------+

--Quelle est la plus grande quantité de vin achetée?
select max(aquant) as plusGrandeQVinAchete
from achat;
+----------------------+
| plusGrandeQVinAchete |
+----------------------+
|                   50 |
+----------------------+

--Affichez la moyenne des quantités achetées.
select avg(aquant) as moyenneQAchete
from achat;
+----------------+
| moyenneQAchete |
+----------------+
|        16.1333 |
+----------------+

--Quel est le nombre de vins différents achetés?
select count(distinct vno) as nbVinDiffAchete
from achat;
+-----------------+
| nbVinDiffAchete |
+-----------------+
|              12 |
+-----------------+

--Affichez les noms des clients ayant un 'a' en deuxième position.
select clinom
from client
where clinom like '_a%';
+---------+
| clinom  |
+---------+
| Lambert |
| Lautrec |
+---------+

--Affichez les noms des clients comportant un 'a'.
select clinom
from client
where clinom like '%a%';
+-----------+
| clinom    |
+-----------+
| Fraudeau  |
| Lambert   |
| Simonneau |
| Lautrec   |
+-----------+

--Affichez les numéros des clients ayant acheté le vin n°11.
select distinct clinom
from client inner join achat on client.clino=achat.clino
where achat.vno=11;
+-----------+
| clinom    |
+-----------+
| Simonneau |
| Lautrec   |
+-----------+

--Sachant que le vin n°11 coûte 5 euros., affichez pour ce vin, les informations concernant les achats effectués par les clients ainsi que le montant à payer par chaque client.
select vno,asem,aquant,clino,5*aquant as prixPayer
from achat
where vno=11;
+-----+------+--------+-------+-----------+
| vno | asem | aquant | clino | prixPayer |
+-----+------+--------+-------+-----------+
|  11 |   35 |      5 |  1004 |        25 |
|  11 |   40 |     15 |  1004 |        75 |
|  11 |   25 |     10 |  1005 |        50 |
+-----+------+--------+-------+-----------+

--Quel est le nombre d'achats effectués par le client 1004?
select count(achat.clino) as achatEffectuerPar1004
from achat
where clino=1004;
+-----------------------+
| achatEffectuerPar1004 |
+-----------------------+
|                     3 |
+-----------------------+

--Quel est le nombre de vins différents achetés par le client 1004?
select count(distinct achat.vno)as achatVinDiffPar1004
from achat
where clino=1004;
+---------------------+
| achatVinDiffPar1004 |
+---------------------+
|                   2 |
+---------------------+

--Quel est le nombre de clients ayant effectué au moins un achat?
select count(distinct achat.clino) as nbClientAyantAchete
from achat;
+---------------------+
| nbClientAyantAchete |
+---------------------+
|                   5 |
+---------------------+

--Quel est le nombre de clients ayant acheté un vin entre les semaines 11 et 41?
select count(distinct achat.clino) as nbClienAyantAcheteVinEntreSemaine11Et41
from achat
where asem>10 or asem<42;
+-----------------------------------------+
| nbClienAyantAcheteVinEntreSemaine11Et41 |
+-----------------------------------------+
|                                       5 |
+-----------------------------------------+

--Quelle est la moyenne des quantités achetées pour le vin n°11?
select avg(aquant)
from achat
where vno=11;
+-------------+
| avg(aquant) |
+-------------+
|     10.0000 |
+-------------+

--Quel est le coût moyen des achats correspondant au vin n°11? (le vin n°11 coûte 6 euros.)
select avg(6*aquant) as coutMoyenAchatVin11
from achat
where vno=11;
+---------------------+
| coutMoyenAchatVin11 |
+---------------------+
|             60.0000 |
+---------------------+

--Quelle est la plus grande quantité achetée depuis la semaine n°30?
select max(aquant) as QuantiteMaxAchatDepuisSemaine30
from achat 
where asem>=30;
+---------------------------------+
| QuantiteMaxAchatDepuisSemaine30 |
+---------------------------------+
|                              50 |
+---------------------------------+

--Quelle est la quantité totale des achats concernant le vin n°11?
select sum(aquant) as QuantiteAchatVin11
from achat
where vno=11;
+--------------------+
| QuantiteAchatVin11 |
+--------------------+
|                 30 |
+--------------------+

--Quel est le chiffre d'affaires total concernant le vin n°11?
select sum(aquant)*6 as chiffreDAffaire
from achat 
where vno=11;
+-----------------+
| chiffreDAffaire |
+-----------------+
|             180 |
+-----------------+

--Liste des noms des crus avec le nom de leur région.
select c.crunom,r.rnom
from cru c inner join region r on c.rno=r.rno;
+---------------+---------------+
| crunom        | rnom          |
+---------------+---------------+
| Tokay         | Alsace        |
| Chenas        | Beaujolais    |
| Morgon        | Beaujolais    |
| Haut-Brion    | Bordeaux      |
| Sauterne      | Bordeaux      |
| Pouilly-Fuiss | Bourgogne     |
| Pommard       | Bourgogne     |
| Roman         | Bourgogne     |
| Volnay        | Bourgogne     |
| Muscadet      | Pays de Loire |
+---------------+---------------+

--Liste des numéros de vin suivis de l'année de millésime, du nom du cru et du nom de la région.
select v.vno,v.vmilles,c.crunom,r.rnom
from vin v inner join cru c on v.cruno=c.cruno inner join region r on c.rno=r.rno;
+-----+---------+---------------+---------------+
| vno | vmilles | crunom        | rnom          |
+-----+---------+---------------+---------------+
|  20 |    1991 | Tokay         | Alsace        |
|  50 |    1992 | Chenas        | Beaujolais    |
|  90 |    1992 | Morgon        | Beaujolais    |
|  70 |    1987 | Haut-Brion    | Bordeaux      |
|   5 |    1988 | Sauterne      | Bordeaux      |
|  40 |    1991 | Pouilly-Fuiss | Bourgogne     |
|  41 |    1992 | Pouilly-Fuiss | Bourgogne     |
|  60 |    1982 | Pommard       | Bourgogne     |
|  61 |    1985 | Pommard       | Bourgogne     |
|  80 |    1989 | Roman         | Bourgogne     |
|  85 |    1990 | Roman         | Bourgogne     |
|  10 |    1985 | Volnay        | Bourgogne     |
|  11 |    1990 | Volnay        | Bourgogne     |
|  30 |    1992 | Muscadet      | Pays de Loire |
+-----+---------+---------------+---------------+

--Quels sont les noms des clients ayant acheté un vin du cru pommard?
select clinom
from client c inner join achat a on c.clino=a.clino
inner join vin v on v.vno=a.vno
inner join cru  on v.cruno=cru.cruno
where crunom='pommard'; 
+----------+
| clinom   |
+----------+
| Fraudeau |
| Lambert  |
+----------+

--Liste des numéros de vins achetés pour la semaine 30, suivis de la quantité achetée et du nom de l'acheteur.
select v.vno,a.aquant,c.clinom
from client c inner join achat a on c.clino=a.clino
inner join vin v on v.vno=a.vno
where a.asem=30;
OU
select a.vno,a.aquant,c.clinom
from client c inner join achat a on c.clino=a.clino
where a.asem=30;
+-----+--------+----------+
| vno | aquant | clinom   |
+-----+--------+----------+
|  10 |     50 | Fraudeau |
|  50 |     15 | Dupont   |
+-----+--------+----------+

--Liste des numéros de vins achetés pour la semaine 30, suivis de la quantité achetée, du nom du client, du numéro du cru et de l'année de millésime.
select a.vno,a.aquant,c.clinom,cru.cruno,v.vmilles
from client c inner join achat a on c.clino=a.clino
inner join vin v on v.vno=a.vno
inner join cru  on v.cruno=cru.cruno
where a.asem=30;
+-----+--------+----------+-------+---------+
| vno | aquant | clinom   | cruno | vmilles |
+-----+--------+----------+-------+---------+
|  10 |     50 | Fraudeau | VO    |    1985 |
|  50 |     15 | Dupont   | CH    |    1992 |
+-----+--------+----------+-------+---------+

--Liste des numéros de vins achetés pour la semaine 30, suivis de la quantité achetée, du nom du client, du nom du cru et de l'année de millésime.
select a.vno,a.aquant,c.clinom,cru.crunom,v.vmilles
from client c inner join achat a on c.clino=a.clino
inner join vin v on v.vno=a.vno
inner join cru  on v.cruno=cru.cruno
where a.asem=30;
+-----+--------+----------+--------+---------+
| vno | aquant | clinom   | crunom | vmilles |
+-----+--------+----------+--------+---------+
|  10 |     50 | Fraudeau | Volnay |    1985 |
|  50 |     15 | Dupont   | Chenas |    1992 |
+-----+--------+----------+--------+---------+

--Quel est le nombre d'achats effectués par des clients de nom Lambert?
select count(clinom) as nbAchatClientLambert
from achat a inner join client c on c.clino=a.clino
where clinom='Lambert';
+----------------------+
| nbAchatClientLambert |
+----------------------+
|                    5 |
+----------------------+

--Quelle est la moyenne (en quantité) des achats concernant les vins du cru Tokay?
select avg(a.aquant) as MoyenneQuantiteAchatTokay
from achat a inner join vin v on v.vno=a.vno
inner join cru on v.cruno=cru.cruno
where crunom='Tokay';
+---------------------------+
| MoyenneQuantiteAchatTokay |
+---------------------------+
|                   10.0000 |
+---------------------------+

--Quel est le nom du cru du vin numéro 20?
select cru.crunom
from vin v inner join cru on v.cruno=cru.cruno
where v.vno=20;
OU
select crunom
from cru
where cruno=(select cruno from vin where vno=20);
+--------+
| crunom |
+--------+
| Tokay  |
+--------+

--Quel est le nom de la région du vin numéro 20?
select rnom
from region
where rno=(select rno from cru where cruno=(select cruno from vin where vno=20));
+--------+
| rnom   |
+--------+
| Alsace |
+--------+

--Quels sont les numéros des clients acheté (en quantité) plus que la moyenne?
select clino,sum(aquant)
from achat
group by clino
having  sum(aquant)>
(select avg(aquant)
from achat);
+-------+-------------+
| clino | sum(aquant) |
+-------+-------------+
|  1001 |          75 |
|  1002 |          67 |
|  1003 |          45 |
|  1004 |          45 |
+-------+-------------+

--Quels sont les noms des clients ayant effectué des achats dont la quantité est supérieure à la moyenne des quantités achetées?
select distinct clinom
from client 
where clino in (
select  clino
from achat
where aquant> (select avg(aquant) from achat));
+-----------+
| clinom    |
+-----------+
| Fraudeau  |
| Lambert   |
| Dupont    |
| Simonneau |
+-----------+

--Quels sont les numéros des clients ayant acheté au moins un vin d'un cru de la région Bourgogne?
select clino
from achat
where vno in(select vno from vin where cruno in(select cruno from cru where rno=(select rno from region where rnom='Bourgogne')))
group by clino;
+-------+
| clino |
+-------+
|  1001 |
|  1002 |
|  1003 |
|  1004 |
|  1005 |
+-------+

--La table CRU représentée par l'alias M sert à effectuer la sélection du cru de nom Morgon afin de connaître son numéro de région.

--La table CRU représentée par l'alias C sert à trouver les crus de la même région que le Morgon.
--Cette requête a un défaut puisqu'elle affichera également le cru de nom Morgon.
--Que faudrait-il faire pour résoudre ce problème?
select C.crunom
from cru M inner join cru C on C.rno=M.rno
where M.crunom='Morgon';
+--------+
| crunom |
+--------+
| Chenas |
| Morgon |
+--------+


select C.crunom
from cru M inner join cru C on C.rno=M.rno
where M.crunom='Morgon' and C.crunom!='Morgon';
+--------+
| crunom |
+--------+
| Chenas |
+--------+

--Quels sont les numéros des vins ayant la même année de millésime que le vin numéro 90?
select v.vno
from vin v
where v.vmilles=(select vmilles from vin where vno=90);

select v.vno
from vin v inner join vin v2 on v.vmilles=v2.vmilles
where v2.vno=90;

+-----+
| vno |
+-----+
|  30 |
|  41 |
|  50 |
|  90 |
+-----+


--Quels sont les numéros des vins achetés les mêmes semaines que le vin numéro 11?
select distinct a.vno
from achat a
where a.asem in(select asem from achat where vno=11) and vno!=11;

select distinct a.vno
from achat a inner join achat a2 on a.asem=a2.asem
where a2.vno=11 and a.vno!=11;

+-----+
| vno |
+-----+
|  60 |
|  90 |
+-----+

--Quels sont les numéros de clients ayant acheté les mêmes vins que le client numéro 1004?
select distinct a.clino
from achat a
where a.vno in(select vno from achat where clino=1004) and a.clino!=1004;

select distinct a.clino
from achat a inner join achat a2 on a.vno=a2.vno
where a2.clino=1004 and a.clino!=1004;
+-------+
| clino |
+-------+
|  1001 |
|  1005 |
+-------+

--Quels sont les noms des clients ayant acheté les mêmes vins que le client numéro 1004?
select distinct c.clinom
from client c inner join achat a on c.clino=a.clino
where a.vno in (select vno from achat where clino=1004) and a.clino!=1004;

select distinct c.clinom
from client c inner join achat a on c.clino=a.clino inner join achat a2 on a.vno=a2.vno
where a2.clino=1004 and a.clino!=1004;

+----------+
| clinom   |
+----------+
| Fraudeau |
| Lautrec  |
+----------+

--Quels sont les nombres de crus par région?
select count(crunom) as nbCrusRegion,r.rnom
from cru c inner join region r on c.rno=r.rno
group by c.rno;
+--------------+---------------+
| nbCrusRegion | rnom          |
+--------------+---------------+
|            1 | Alsace        |
|            2 | Beaujolais    |
|            2 | Bordeaux      |
|            4 | Bourgogne     |
|            1 | Pays de Loire |
+--------------+---------------+

--Pour chaque vin, quelle est la quantité la plus petite et la plus grande achetées?
select min(aquant) , max(aquant) 
from achat 
group by vno;
+-------------+-------------+
| min(aquant) | max(aquant) |
+-------------+-------------+
|          10 |          50 |
|           5 |          42 |
|          10 |          10 |
|          12 |          12 |
|          10 |          10 |
|          15 |          15 |
|          15 |          15 |
|          20 |          20 |
|          20 |          20 |
|          10 |          10 |
|          15 |          15 |
|          25 |          25 |
+-------------+-------------+

--Quels sont les nombres de vins achetés par client?
select count(distinct vno)
from achat
group by clino;
+---------------------+
| count(distinct vno) |
+---------------------+
|                   3 |
|                   5 |
|                   3 |
|                   2 |
|                   1 |
+---------------------+

--Quel est le plus grand nombre d'achats effectués par un client?
select max(aquant)
from achat
group by clino;
+-------------+
| max(aquant) |
+-------------+
|          50 |
|          20 |
|          20 |
|          25 |
|          10 |
+-------------+

--Pour chaque client, quelle est la somme des quantités achetées de chaque vin?
select sum(aquant)
from achat 
--vue globale
create view vueCru as select C.cruno,C.crunom,R.rno,R.rnom from cru C inner join region R on C.rno=R.rno;

select crunom,rnom from vueCru;
+---------------+---------------+
| crunom        | rnom          |
+---------------+---------------+
| Tokay         | Alsace        |
| Chenas        | Beaujolais    |
| Morgon        | Beaujolais    |
| Haut-Brion    | Bordeaux      |
| Sauterne      | Bordeaux      |
| Pouilly-Fuiss | Bourgogne     |
| Pommard       | Bourgogne     |
| Roman         | Bourgogne     |
| Volnay        | Bourgogne     |
| Muscadet      | Pays de Loire |
+---------------+---------------+

--cru de region Bourgogne*
select crunom from vueCru where rnom='Bourgogne';
+---------------+
| crunom        |
+---------------+
| Pouilly-Fuiss |
| Pommard       |
| Roman         |
| Volnay        |
+---------------+

--creation de verif d'insert
create view bonAchat as select * from achat
where aquant > 29
with check option ;

insert into bonAchat values (1001,11,20,25);--la personne n'a pas acheter asser de vin!!!!
insert into bonAchat values (1001,11,20,42);--quantite superieur a 30 donc insetion dans la table achat
