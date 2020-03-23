/*Вычислить сумму элементов массива находящихся между минимальным и максимальным элементами.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 

int main()
{
    int a[N];
    int i, min = 100000000000, max = -100000000000, j, k, count = 0, p;
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
    
    if(k > j){
        p = k;
        k = j;
        j = p;
    }
    
    for(i = k+1; i < j; i++){
        count = count + a[i];
    }
    printf("Сумма элементов между max и min равна %d\n", count);
    return 0;
}