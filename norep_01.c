#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int i,j, dado[6];
    srand((unsigned)time(NULL));
    for (j=0; j<10; j++)
    {
        printf("%d:\t",j);

        for (i=0; i<=5; i++)
        {
            dado[i] = sortear(1, 6);
            for(k=0;k<i; K++)
            {

            }
        }
        printf("\n");
    }
    return(0);
}

int sortear(int x, int y)
{
    int a;
    a = x+ rand %(y + 1);
    return a;
}

