#include<stdio.h>
#include<string.h>
int main()
{  int b,i,j,score[b],sum=0;
    scanf("%d",&b);

    char key[b][20],stu_str[100];
//input keys
    for (i=0;i<b;i++)
    {
        
      
       scanf("%s",key[i]);
       
    }
//input scores
     for (i=0;i<b;i++)
    {
        
      
       scanf("%d",&score[i]);
       
       
    }
//input string
    scanf(" %[^\n]s", stu_str);





//find out the number of words in a string(num)
    
    int len,s,count=0,num;
     

    len=strlen(stu_str);
    //printf("\nlength is %d \n\n",len);

    for(s=0; s<len;s++)
    {
     if (stu_str[s]==' ')
     {count++;
      }
    }


    num=count+1;
    

    char *a[num];
    


   // break the sting to wors and store in array manner

    char  *token = strtok(stu_str, " ");
   i=0;
   while( token != NULL ) {
      //printf( " %s\n", token );
       
       a[i]= token;
      token = strtok(NULL, " ");
      i++;
   }
   j=i;
   
  /* printf("num of words in string %d \n",i);
   for (i=0;i<j;i++)
   {
       printf("token :%s\n",a[i]);
   }
  */


int z;

z=0;
for (;z<b;z++)
{
   for (i=0;i<j;i++)
   {
      //printf(" key: %s and token %s \n",key[z],a[i]);
      
      if(strcmp(key[z],a[i])==0)
      {
         
         sum+=score[z];
         
         break;

      }
   }
}
    printf("%d",sum);

 


    return 0;
}