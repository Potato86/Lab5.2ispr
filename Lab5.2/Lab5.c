
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

int zad1(void);
int zad2(void);
int zad3(void);

int main(void) {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1(void) {
    double gr;
    double rad;
    double result;

    printf("Задание 1\n");
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);

    printf("Синус угла %.0lf градусов = %.6lf\n", gr, result);

    return 0;
}

int zad2(void) {
    double c = 1.3;
    double x;
    double a, b, y;

    printf("\nЗадание 2\n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = pow(c, 3) + log(fabs(x));
    printf("a = %.6lf\n", a);

    b = a * a + sqrt(c);
    printf("b = %.6lf\n", b);

    y = exp(x) + pow(5.8, -b);

    printf("\n---- РЕЗУЛЬТАТ ----\n");
    printf("x = %.1lf\n", x);
    printf("y = %.1lf\n", y);

    return 0;
}

int zad3(void) {
    double c = 1.3;
    double x, a, b, y;
    int A, B, C, cond1, cond2;

    printf("\nЗадание 3\n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = pow(c, 3) + log(fabs(x));
    b = a * a + sqrt(c);
    y = exp(x) + pow(5.8, -b);

    printf("x = %.1lf\n", x);
    printf("y = %.1lf\n", y);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    printf("A = %d, B = %d, C = %d\n", A, B, C);

    cond1 = ((A % 2 == 0) && (B % 2 != 0)) ||
        ((A % 2 != 0) && (B % 2 == 0));

    cond2 = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    printf("а) условие выполнено (1 - да, 0 - нет) = %d\n", cond1);
    printf("б) условие выполнено (1 - да, 0 - нет) = %d\n", cond2);

    return 0;
}
