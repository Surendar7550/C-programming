#include<stdio.h>
#include<stdlib.h>
// atoi is inbuild fun in <stdlib.h>
//string value convert to integer "123"->123
int main()
{
    char str[]="1234";

    int num =atoi(str);
    printf("%d",num);
}

/*#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char *str = "123";  // Example string

    int num = atoi(str);  // Convert string to integer
    printf("%d", num);  // Print the integer (123)

    return 0;
}*/

