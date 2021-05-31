#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2,i,k,a,b;

    scanf(" %[^\n]s",str1);
    scanf(" %[^\n]s",str2);
   
    
    len1=strlen(str1);
    len2=strlen(str2);

    if (len1==len2)
    { k=len1;}


    k= len1<len2 ? len1 : len2 ;
    
    for(i=0;i<k;i++)
    {
        a=(int)str1[i];
        b=(int)str2[i];

        if (a==b)
        continue;
        else if(a>b)
        {
            printf("second");
            return 0;
        }
        else
        {
            printf("first");
            return 0;
        }
        
    }
    if (len1>len2)
    {
        printf("second");
    }
     else if (len1>len2)
     {
         printf("first");
     }

     else
     {
         printf("equal");
     }


    
   
    
    return 0;

}