#include <stdio.h>
#include <string.h>

int lookup(char* word, char *array[]);

char *flab[] ={
"actual1y" ,
"just",
"quiten" ,
"really",NULL
};  

int main()
{
    int ans;
    printf("Hello World" );

    ans= lookup("just", flab);
    
    printf("ans = %d", ans);
    return 0;
}

int lookup(char *word, char *array[])
{
int i;
   for (i = 0; array[i]!=NULL;i++)
   {
          if (strcmp(word,array[i])==0)
             return i;
   }
          return -1;
}
