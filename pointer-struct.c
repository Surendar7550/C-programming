#include<stdio.h>
struct student
{
    char name[50];
    int age;
    int rollno;
};
int main()
{
    struct student s1={"surya",22,50};
    struct student *p;
    p=&s1;
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.rollno);
    printf("%p\n",s1.name);
    printf("%p\n",s1.age);
    printf("%p\n",s1.rollno);
    printf("%s\n",(*p).name);
    printf("%d\n",(*p).age);
    printf("%d\n",(*p).rollno);
    printf("%s\n", p->name);
    printf("%d\n",p->age);
    printf("%d\n",p->rollno);
}
