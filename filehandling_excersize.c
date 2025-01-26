#include<stdio.h>

/*int main()
{
    FILE *my;

    my=fopen("demo.txt","r");

    if(my == NULL)
    {
        printf("error opening file");
        return 1;
    }
    while(1) //infinity loop
    {
        int ch =fgetc(my);
        if(ch == EOF) //end of file
            break;
            printf("%c",ch);

    }
    fclose(my);

}*/

int main()
{
    FILE *my;

    my=fopen("demo.txt","w");

    if(my == NULL)
    {
        printf("error opening file");
        return 1;
    }
    while(1) //infinity loop
    {
        char ch =getchar(); //getchar  used for keyboard input ctrl+z stop to get input
        if(ch == EOF) //end of file
            break;
            fputc(ch,my);

    }
    fclose(my);

}
