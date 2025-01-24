#include<stdio.h>
void function(char [],int,int);
int main()
{
struct student
{
    char name[20];
    int age;
    int rollno;

};

 struct student s1={"surya",22,11};
 function(s1.name,s1.age,s1.rollno);

}

void function(char name[],int age,int rollno)
{

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%d\n",rollno);
}




