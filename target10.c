#include <stdio.h>

int main()
{
    int n, sum = 0, c,cm, value;

    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    int z=0,i=0;
    for(z;z<2000;z++){if((float)sum/n<9.5){sum+=10,n+=1;i++;}}
    printf("%d", i);

  return 0;
  }