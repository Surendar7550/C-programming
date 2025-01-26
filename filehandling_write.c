#include<stdio.h>

/*int main()
{
    FILE *fp ;
    fp=fopen("test.txt","w");
    fputc('h',fp);
    fputs("SURENDAR",fp);
    fclose(fp);
}*/

int main()
{
    FILE *fp ;
    fp=fopen("test.txt","a");
    fputc('h',fp);
    fputs("SURYA",fp);
    fclose(fp);
}
