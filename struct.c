/*#include<stdio.h>
#include<string.h>
struct student
{
    char name[25];
    int rollno;
    int age;
};
int main()
{
    struct student s1={"surya",01,22};
    struct student s2;
    //s2.name = "surendar"; //error: assignment to expression with array type
    strcpy(s2.name,"surendar");
    s2.rollno=02;
    s2.age=23;
    printf("%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%d\n",s1.age);
    printf("%s %d %d",s2.name,s2.rollno,s2.age);
}*/
#include<stdio.h>

struct student
{
    char name[25];
    int rollno;
    int age;
};
int main()
{
    struct student s1;
    struct student s2;
    printf("enter the first student detail:");
    scanf("%s %d %d",&s1.name,&s1.rollno,&s1.age);
    printf("name:%s\n",s1.name);
    printf("age:%d\n",s1.age);
    printf("rolln:%d\n",s1.rollno);

}
