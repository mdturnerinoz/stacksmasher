#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = 12280;
    
    char str[10];

    printf("\n Enter the name \n\n");

    gets(str); // Used gets() to cause buffer overflow

    printf("\n len = [%d] \n", len);

    len  = strlen(str);
    
    printf("\n len of string entered is : [%d]\n", len);

    return 0;
}
