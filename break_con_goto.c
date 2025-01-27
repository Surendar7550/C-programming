#include<stdio.h>
// break

/*int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==3)
        break;
        printf("%d\n",i); //12end
    }
    printf("end");
}*/

// continue

/*int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==3)
        continue;
        printf("%d\n",i); //1245678910end
    }
    printf("end");
}*/


//goto  first create lable ,used for colon

int main()
{
    int a,b,i=0;
    again: // ->lable
    printf("ENTER A TWO NUM:");
    scanf("%d%d",&a,&b);
    printf("THE ADDITION VLAUE IS:%d\n",a+b);
    i++;
    if(i<3)    //is condition is true repeated run method
    goto again;  //goto for start lable

}
