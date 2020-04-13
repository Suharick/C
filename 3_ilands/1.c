/*Работа с односвязным списком*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char *value;
    struct Node *next;
} Node;

Node* f1(char* str){
    Node *beg = (Node*) malloc(sizeof(Node));
    beg->value = str;
    beg->next = 0;
    return beg;
}

Node* getLast(Node *beg) {
    Node *tmp = beg;
    while (tmp->next!=0) {
        tmp = tmp->next;
    }
    return tmp;
}

void f2(Node *beg, char *str){
    Node *last = getLast(beg);
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->value = str;
    tmp->next = 0;
    last->next = tmp;
}

Node* getPreLast(Node *beg){
    if (beg == 0){
        return 0;
    }
    Node *tmp = beg, *pre_tmp = beg;
    while (tmp->next) {
        pre_tmp = tmp;
        tmp = tmp->next;
    }
    return pre_tmp;
}

Node* f3(Node *beg){
    Node *pre_last = getPreLast(beg), *last = getLast(beg);
    if(last == beg){
        free(beg);
        beg = 0;
        printf("Список удален...\n");
    }
    else{
        free(last);
        pre_last->next = 0;
         printf("Последний элемент удален...\n");
    }
    return beg;
}

void f4(Node *beg){
    Node *tmp = beg;
    int i = 1;
    do{
        printf("%d : %s\n", i++, tmp -> value);
        tmp = tmp -> next;
    }while (tmp != 0);
}

Node* f5(Node *beg){
    Node *tmp = beg;
    while (tmp != 0){
        Node *del = tmp;
        tmp = tmp -> next;
        free(del);
    }
    return 0;
}

void f6(Node *beg, char *str_find){
    int count = 0;
    Node *tmp = beg;
    char *str;
    do{
        str = tmp -> value;
        printf("%s and %s -> ", str, str_find);
        printf(strcmp(str,str_find)==0 ? "true\n" : "false\n");
        tmp = tmp -> next;
        count ++;
    }while (tmp != 0 && strcmp(str,str_find)!=0);
    if(tmp == 0 && strcmp(str,str_find)!=0)
        printf("Такого элемента нет\n");
    else
        printf("Элемент найден. Номер элемента в списке = %d\n", count);
}

int main()
{
    int test = 1, doing;
    Node *beg = 0;
    
    while(test == 1){
        printf("Введите номер действия\n1 - Создать первый элемент односвязного списка\n2 - Добавить элемент в конец односвязного списка\n3 - Удалить элемент с конца односвязного списка\n4 - Просмотреть односвязный список\n5 - Удалить весь односвязный список\n6 - Выполнить последовательный поиск заданного элемента в односвязном списке\n7 - Выйти из программы\n");
        scanf("%d",&doing);
        switch(doing){
            case 1:
                if(beg == 0){
                    printf("Введите значение для первого элемента: ");
                    char * str = (char*) malloc(sizeof(char));
                    scanf("%s", str);
                    beg = f1(str);
                }
                else
                    printf("Первый элемент уже создан\n");
                break;
            case 2:
                if(beg != 0){
                    printf("Введите новый элемент: ");
                    char * str = (char*) malloc(sizeof(char));
                    scanf("%s", str);
                    f2(beg, str);
                }
                else
                    printf("Создайте первый элемент\n");
                break;
            case 3:
                if(beg != 0)
                    beg = f3(beg);
                break;
            case 4:
                if(beg == 0)
                    printf("Список пуст\n");
                else{
                    f4(beg);
                }
                break;
            case 5:
                if(beg != 0)
                    beg = f5(beg);
                printf("Список удален\n");
                break;
            case 6:
                if(beg != 0){
                    char * str = (char*) malloc(sizeof(char));
                    printf("Введите нужный элемент: ");
                    scanf("%s", str);
                    f6(beg, str);
                }
                else
                    printf("Список пуст\n");
                break;
            case 7:
                test = 0;
                break;
            default:
                printf("Такой команды нет. Пожалуйста, выберете цифру от 1 до 7\n");
        }
    }
}