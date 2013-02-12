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

   memmove(str1, str2, len);

   return 0;
}
