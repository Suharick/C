/*Функция, возвращающая строку, "склеенную" из двух строк: f("ab", "cd") должна вернуть "abcd"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dubl(char *s1,char *s2)
 {
     int i1 = strlen(s1), i2 = strlen(s2), j;
     char *s_new = malloc((i1+i2)*sizeof(char));
     
     for(j = 0; j < i1; j ++){
         s_new[j] = s1[j];
     }
     for(j = 0; j < i2; j ++){
         s_new[j+i1] = s2[j];
     }
     return s_new;
 }

int main()
{
    char* s1 = "Hello";
    char* s2 = "Friend";
    printf("%s\n", dubl(s1,s2));
    
    return 0;
}