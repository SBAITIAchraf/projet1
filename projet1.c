#include<stdio.h>
#include<stdlib.h>
main()
{

int a,i,j;
printf("Donnez la largeur du triangle: ");
scanf("%d",&a);
for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if (i>=j)
            {
            printf("*");
            }
        }
    printf("\n");
    }
}