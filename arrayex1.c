#include<stdio.h>
int main()
{
    int i,j,k,a[2][2][2],b[2][2][2],c[2][2][2];
    printf("ENTER A FIRST MATRICS :");

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        {
            scanf("%d",&a[i][j][k]);
        }
        }
    }
    printf("ENTER A SECOND MATRICS :");

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        {
            scanf("%d",&b[i][j][k]);
        }
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        {
            c[i][j][k]=a[i][j][k] + b[i][j][k];
        }
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        {
            printf("%d",c[i][j][k]);
        }
        printf("\n");
        }
    }
}
