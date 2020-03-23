/*Дано действительное число r и массив размером n. Найти элемент массива, который наиболее близок к данному числу.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10 

int main()
{
    int a[N];
    int i, b;
    double r,  d = 100000.0;
    srand(time(NULL)); 
    
    printf("Введите переменную r\n");
    scanf("%lf", &r);

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
        
        if(fabs(r - a[i]) < d){
            b = a[i];
            d = fabs(r - a[i]);
        }
    }
    printf("\n Ближайший элемент равен %d", b);
    return 0;
}