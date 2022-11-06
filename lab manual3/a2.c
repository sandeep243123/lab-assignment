#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch,str[200];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fscanf(fp,"\n%s",str);
    printf("%s",str);
    printf("%d",ftell(fp));
      
    fclose(fp);
    return 0; 
}