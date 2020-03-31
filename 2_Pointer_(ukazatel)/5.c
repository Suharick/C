/*Функция для привидения строки в числовой вид*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int chislo(const char *s)
 {
     long res = 0, i;
     for(i = 0; i < strlen(s); i ++){
        switch(s[i]){
            case '0':
                res = res;
                break;
            case '1':
                res = res + 1*pow(10,(strlen(s)-i-1));
                break;
            case '2':
                res = res + 2*pow(10,(strlen(s)-i-1));
                break;
            case '3':
                res = res + 3*pow(10,(strlen(s)-i-1));
                break;
            case '4':
                res = res + 4*pow(10,(strlen(s)-i-1));
                break;
            case '5':
                res = res + 5*pow(10,(strlen(s)-i-1));
                break;
            case '6':
                res = res + 6*pow(10,(strlen(s)-i-1));
                break;
            case '7':
                res = res + 7*pow(10,(strlen(s)-i-1));
                break;
            case '8':
                res = res + 8*pow(10,(strlen(s)-i-1));
                break;
            case '9':
                res = res + 9*pow(10,(strlen(s)-i-1));
                break;
        }
     }
     return res;
 }

int main()
{
    char* s = "1234";
    printf("%d\n", chislo(s));
    return 0;
}