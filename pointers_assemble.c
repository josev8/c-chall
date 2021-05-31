#include <stdio.h>
int main()
{
   int *a,i,n;
 		   
   
   printf(" number of elements :: ");
   scanf("%d",& n);
   
   printf(" Input numbers  \n");
   for(i=0;i<=n-1;i++)
      {
	  
	  scanf("  %d",a+i);
	  }   
    int j,tmp;

   for(i=0;i<=n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("  sorted : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i+1,*(a+i));
	  }         
printf("\n");
return 0;
}