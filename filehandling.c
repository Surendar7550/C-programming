#include<stdio.h>

/*int main()
{
    char ch;
    FILE *fp ;
    fp=fopen("my.txt","r");
    //fputc('S',fp); //fputc c->character
    ch=fgetc(fp);
    fgetc(fp);
    fclose(fp);
    printf("%c",ch);
}*/
/*int main()
{
    int a;
    FILE *fp ;
    fp=fopen("my.txt","r");
    //putw(29,fp);  //putw ->integer
    a=getw(fp);
    getw(fp);
    fclose(fp);
    printf("%d",a);
}*/

int main()
{
    char a[10];
    FILE *fp ;
    fp=fopen("my.txt","r");
   // fputs("surendar",fp);  //fgets ->string
    fgets(a,sizeof(a),fp);
    fclose(fp);
    printf("%s",a);
}
