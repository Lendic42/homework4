#include <stdio.h>

void homework(void)
{
    int A;
    int B;

    printf("Домашнее задание, вариант 7. Введите два числа A и B: ");
    scanf("%d %d", &A, &B);
    printf("Новый пароль действует: %d\n", (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
}

int main(void)
{
    homework();
    return 0;
}
