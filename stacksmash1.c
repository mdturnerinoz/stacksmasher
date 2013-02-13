#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = 12;
    
    char str[12] = {0};

    printf("\n Enter the name \n\n");

    gets(str); // Used gets() to cause buffer overflow

    printf("len        : %d\n", len);
    printf("len-str    : %d\n", (int)sizeof(str));
    printf("addr str   : %p\n", (void*)str);
    printf("addr len   : %p\n", (void*)&len);

    len  = strlen(str);
    
    printf("\nlen entered: %d\n", len);

    return 0;
}
