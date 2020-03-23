/*Поменять местами минимальный и максимальный элементы массива.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 

int main()
{
    int a[N];
    int i, min = 100000000000, max = -100000000000, j, k;
    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
        if(a[i] > max){
            max = a[i];
            j = i;
        }
        if(a[i] < min){
            min = a[i];
            k = i;
        }
    }
    printf("\n");
    for(i = 0; i < N; i++){
        if(i == j)
            a[i] = min;
        if(i == k)
            a[i] = max;
        printf("%d ", a[i]);
    }
    
    return 0;
}