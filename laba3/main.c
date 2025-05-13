// Лабораторная работа 3
// Выполнили студенты группы 24ВВВ3
// Кукушкин А.А, Жуков А.А, Азаров М.С.
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, c, d;
    system("chcp 1251");
    system("cls");
    printf("Введите переменные: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // поиск пар отрицательных чисел
    if (a < 0 && b < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", a, b);
    }
    if (a < 0 && c < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", a, c);
    }
    if (a < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", a, d);
    }
    if (b < 0 && c < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", b, c);
    }
    if (b < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", b, d);
    }
    if (c < 0 && d < 0) {
        printf("Пара отрицательных чисел: %d и %d\n", c, d);
    }
    return 0;
}
