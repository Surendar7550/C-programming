/*#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        //printf("%d",a[i]); //normal array print method
        printf("%d",*(a+i)); //pointer method
    }

}*/

// function to pass pointer .also call by referrence

void change(int *arr)
{
printf("print inside call function\n");
for(int i=0;i<5;i++)

    {
        //printf("%d",a[i]); //normal array print method
        printf("%d",*(arr+i)); //pointer method
    }
    *(arr+3)=6; //value change in call function is reflect by main function
    printf("\n");
}
int main()
{
    int a[5]={1,2,3,4,5};
    change(a);
    printf("print main function\n");
    for(int i=0;i<5;i++)
    {
        //printf("%d",a[i]); //normal array print method
        printf("%d",*(a+i)); //pointer method
    }

}


