/*Даны два упорядоченных по возрастанию массива целых чисел a и b. 
Найти количество различных чисел, которые присутствуют и в массиве a, и в массиве b.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 4, 6, 8, 9, 11}, b[] = {2, 4, 6, 8, 10};
    int i, j, l = 0, N = 7, K = 5, res = 0, p1 = 1, p2 = 1;

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < K; i++){
        printf("%d ", b[i]);
    }
    
    for(i = 0; i < N; i++){
        j = 0;
        while(j < N && p1 == 1){
            if(i != j && a[i] == a[j])
                p1 = 0;
            j ++;
        }
        while(l < K && p2 == 1){
            if(a[i] == b[l])
                p1 = 0;
            l ++;
        }
        l = 0;
        if(p1 == p2 == 1)
            res ++;
        p1 = 1;
        p2 = 1;    
    }
    
    for(i = 0; i < K; i++){
        j = 0;
        while(j < K && p1 == 1){
            if(i != j && b[i] == b[j])
                p1 = 0;
            j ++;
        }
        while(l < N && p2 == 1){
            if(b[i] == a[l])
                p1 = 0;
            l ++;
        }
        l = 0;
        if(p1 == p2 == 1){
            res ++;
            printf("%d ", b[i]);
        }
        p1 = 1;
        p2 = 1;    
    }
    
    printf("\n%d неповторяющихся элементов", res);

    return 0;
}