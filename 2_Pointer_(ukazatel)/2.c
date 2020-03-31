/*Функция, возвращающая "удвоенную" строку: f("abc") должна вернуть "abcabc"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dubl(char *s)
 {
     int i = strlen(s), j;
     char *s_new = malloc((i*2)*sizeof(char));
     
     for(j = 0; j < i; j ++){
         s_new[j] = s[j];
         s_new[j+i] = s[j];
     }
     return s_new;
 }

int main()
{
    char* s = "Hello";
    printf("%s\n", dubl(s));
    
    return 0;
}