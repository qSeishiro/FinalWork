// Лабораторная работа 3
// Выполнили студенты группы 24ВВВ3
// Кукушкин А.А, Жуков А.А, Азаров М.С.
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0)); 
    
    int array[10];  
    
    system("chcp 1251");
    system("cls");
    
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 49 - 40; 
    }
    
    printf("Четные элементы массива:\n");
    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) { 
            printf("array[%d] = %d\n", i, array[i]);
        }
    }
    
    return 0;
}