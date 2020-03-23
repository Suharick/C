/*Определить максимальное количество одинаковых элементов массива.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15 

int main()
{
    int a[N];
    int i, j, count = 0, max = 0;
    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < N; i++){
        for(j = i; j < N; j++){
            if(a[i] == a[j])
                count ++;
        }
        if(count > max)
            max = count;
            count = 0;
    }
    if(max == 0)
        printf("Повторяющихся элементов нет!\n");
    else
        printf("Максимальное количество повторяющихся элементов равно %d\n", max);
    
    return 0;
}