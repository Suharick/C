/*Пусть имеется массив a действительных чисел размером n. 
Записать в массив b все элементы массива a в порядке возрастания и без повторений.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 

int main()
{
    double a[N], b[N];
    int i, j, test = 1, min = 15;
    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%10;
        printf("%lf ", a[i]);
    }

    i = 0;
    while(i < N && test == 1){
        for(j = 0; j < N; j ++){
            if(a[j] < min)
                min = a[j];
        }
        if(min != 15)
            b[i] = min;
        for(j = 0; j < N; j ++){
            if(a[j] == min)
                a[j] = 15;
        }
        j = 0;
        while(j < N && a[j] == 15){
            j ++;
        }
        if(j == (N))
            test = 0;
        i ++;
        min = 15;
    }

    printf("\n");
    for(j = 0; j < i; j++){
        printf("%lf ", b[j]);
    }

    return 0;
}