#include <string>
#include <iostream>
#include <mysql.h>
using namespace std;
int main(){
	MYSQL_ROW row;
	MYSQL_RES * resultat;
	MYSQL mysql;
	unsigned int num_fields;
	mysql_init(&mysql);
	mysql_real_connect(&mysql,"localhost","adminDBGestE","xuactf42","dbGestEleves",0,NULL,0);
	mysql_query(&mysql,"select * from eleves");
	resultat=mysql_store_result(&mysql);
	num_fields = mysql_num_fields(resultat);
	while ((row=mysql_fetch_row(resultat)) !=NULL)
	{
		for (unsigned int i=0;i<num_fields;i++)
		{
		cout << row[i] << " ";
		}
	cout << endl;
	}
	return 0;
}
