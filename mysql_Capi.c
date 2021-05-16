
/* my sql c api example from mysql in nutshell */



#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
mysql_fetch_fields(  )

int main( )
 {
 MYSQL *mysql;
 MYSQL_RES *result;
 MYSQL_ROW row;
 MYSQL_FIELD *field;
 int i, num_fields;
 mysql = mysql_init(NULL);
 mysql_real_connect(mysql,"localhost","user","password",
 "workrequests",0,NULL,0);
 mysql_query(mysql,"SELECT * FROM users");
 result = mysql_store_result(mysql);
 num_fields = mysql_field_count(mysql);
 while((row = mysql_fetch_row(result)) != NULL)
 {
 for(i = 0; i < num_fields; i++)
 {
 field = mysql_fetch_field_direct(result, i);
 printf("%s: %s, ", field->name, row[i]);
 }
 printf("\n");
 }
 mysql_free_result(result);
 mysql_close(mysql);
 return 0;
 }
