#include <stdio.h>
#include <string.h>

void reverse( char* str)
{
    char temp[10] ;
    int i =0;
    int len = strlen(str)-1;
    printf(" %s ",str);
    
    while(str[len] != '\0')
    {
        temp[i]= str[len];
        i++;
        len --;
    }
    
    printf(" %s ",temp);
}
