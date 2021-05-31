#include<stdio.h>
int main()
{
    int a,b,c,gr,i,sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&i);

    while (i>0)
    {
        
          gr= (a>b) ? (a>c ? a : c) : (b>c ? b : c) ;

          

          if ( gr == 0)
          {
              printf("the value is %d",sum);
              return 0;
          }

          if (gr == a) a--;
          else if (gr==b) b--;
          else c--;

          sum+=gr;
        
        i--;

    }

        printf("The value is %d",sum);
        return 0;
}