/*Функция, которая принимает параметром строку и символ
 и возвращает адрес первого вхождения этого символа в строку.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_chr(char *s, char c)
 {
    int i = 0;
    while(s[i] !='\0' && s[i] != c){
        i ++;
    }
    if(s[i] != '\0'){
        char* result = &s[i];
        return result;
    }
    else 
        return "Nothing";
 }

int main()
{
    char* s = "Hello";
    char c = 'H';
    printf("%s\n", str_chr(s,c));
    return 0;
}