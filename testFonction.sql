delimiter ##
create function fois2 (nbACalculer int(10))
returns int
begin
	return nbACalculer*2;
end
##
delimiter ;

--fonction qui renvoie le chiffre d'affaire d'un vin son identifiant ainsi que son pu sont passés en paramètre
delimiter ##
create function chiffreDAffaireF(vno int(10),pu int(10))
returns int
begin
	return(
	select pu*sum(aquant)
	from achat
	where vno=achat.vno);	
end
##
delimiter ;
