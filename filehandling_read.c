#include<stdio.h>

/*int main()
{
    FILE *fp ;

    char c;

    fp=fopen("test.txt","r");

    c=fgetc(fp);

    printf("%c",c);
    c=fgetc(fp); //--> *fp filepointer automatically move to next
    printf("%c",c);
    fclose(fp);
}*/

int main()
{
    FILE *fp ;

    char c[100];

    fp=fopen("test.txt","r");

    //fgets(c,11,fp); // center reads for n-1

    fgets(c,sizeof(c),fp);

    printf("%s",c);

    fclose(fp);
}
