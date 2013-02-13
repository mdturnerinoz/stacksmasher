#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{


   char str1[10],                           
        str2[] = {"abcdefghijklmnopqrstuvwxyz"};
   int len = sizeof(str1);

   if (argc > 1)
   {
      len = atoi(argv[1]);
   }

   printf("len      : %d\n", len);
   printf("len-str1 : %d\n", sizeof(str1));
   printf("len-str2 : %d\n", strlen(str2));
   printf("addr str1: %x\n", str1);
   printf("addr str2: %x\n", str2);
   printf("addr len : %x\n", &len);

   memmove(str1, str2, len);

   return 0;
}
