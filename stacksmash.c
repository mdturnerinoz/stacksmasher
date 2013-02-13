#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(int argc, char **argv)
{

   int len = 12;
   char str1[12],                           
        str2[] = {"abcdefghijklmnopqrstuvwxyz01"};

   if (argc > 1)
   {
      len = (int)atoi(argv[1]);
   }

   printf("len      : %d\n", len);
   printf("len-str1 : %d\n", (int)sizeof(str1));
   printf("len-str2 : %d\n", (int)strlen(str2));
   printf("addr str1: %p\n", (void*)str1);
   printf("addr str2: %p\n", (void*)str2);
   printf("addr len : %p\n", (void*)&len);

   memset(str1,0,sizeof(str1));
   memmove(str1, str2, len);
   printf("len      : %d\n", len);
   str1[len] = 0; 

   printf("str1     : %s\n", str1);
   printf("str2     : %s\n", str2);

   return 0;
}
