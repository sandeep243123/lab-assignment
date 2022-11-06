#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    
    int temp=0,count=0;
    printf("Enter the string\n");
    scanf("%[^\n]s",&ch);  
    int len=strlen(ch);
    for(int i=0;i<len;i++)
    {
        if(ch[i]==32)
        {

        }else
        for(int j=0;j<len;j++)
        {       
            if(ch[i]==ch[j])
            count++;     
            //ch[j]=32;   
        }
        printf("%c = %d\n",ch[i],count);
        count=0;
       ch[i]=32;
        
        
    }
    
            printf("%d",count);
        
    
     return 0;
}