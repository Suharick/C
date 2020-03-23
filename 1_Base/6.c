/*Пусть имеется массив целых чисел. Проверить, чередуются ли в нем четные и нечетные числа.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int a[] = {1, 2, 3, 4, 9};
    int i, j = 0, test = 1, ch, p;
/*    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }*/
    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    
    ch = a[0]%2;
    while(j < (N - 1) && test == 1){
        if(a[j]%2 == ch && a[j + 1]%2 == (ch + 1)%2)
            j = j + 2;
        else
            test = 0;
    }

    if(N%2 == 1){
        if(a[N-1]%2 != ch)
            test = 0;
    }
    
    if(test == 1)
        printf("\n Чередуются четные и нечетные\n");
    else
        printf("\n В последовательности не чередуются четные и нечетные\n");

    return 0;
}