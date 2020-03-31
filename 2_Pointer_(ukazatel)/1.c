#include <stdio.h>
#include <stdlib.h>

 int count_digits(char *s)
 {
     int i = 0, count = 0;
     while (s[i] !='\0'){
         if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            count ++;
        i ++;
     }
     return count;
 }

int main()
{
    char s[] = "Hello123";
    printf("%d\n", count_digits(s));

    return 0;
}