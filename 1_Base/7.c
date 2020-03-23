/*Определить, является ли данный массив a симметричным*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6

int main()
{
    int a[] = {1, 2, 3, 3, 2, 1};
    int i, j = 0, test = 1;
/*    srand(time(NULL)); 

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }*/
    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    
    while(j < (N/2) && test == 1){
        if(a[j] == a[N - j - 1])
            j ++;
        else
            test = 0;
    }
    
    if(test == 1)
        printf("\n Последовательность симметрична\n");
    else
        printf("\n Последовательность не симметрична\n");

    return 0;
}