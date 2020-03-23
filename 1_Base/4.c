/*Определить, является ли массив упорядоченным по возрастанию.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int a[N];
    int i, j = 0, test = 1;
    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }
    
    while(j < (N - 1) && test == 1){
        if(a[j] > a[j + 1])
            test = 0;
        j ++;
    }
    if(test != 1)
        printf("\n Последовательность не является возрастающей\n");
    else
        printf("\n Последовательность является возрастающей\n");

    return 0;
}