// Лабораторная работа 3
// Выполнили студенты группы 24ВВВ3
// Кукушкин А.А, Жуков А.А, Азаров М.С.
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int z, x, c, v;
    system("chcp 1251");
    system("cls");
    printf("Введите переменные: \n");
    scanf("%d %d %d %d", &z, &x, &c, &v);
    // поиск пар отрицательных чисел
    if (a < 0 && b < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", z, x);
    }
    if (a < 0 && c < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", z, c);
    }
    if (a < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", z, v);
    }
    if (b < 0 && c < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", x, c);
    }
    if (b < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", x, v);
    }
    if (c < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", c, v);
    }
    return 0;
}
