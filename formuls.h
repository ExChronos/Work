#include <stdio.h>
#include <ctype.h>
#include <iso646.h>

void summa(int last)
{
    int sum;

    for (int i = 0, sum = 0; i <= last; i++){
        sum += i;
        printf("%d is sum of %d first numbers;\n", sum, i);
    }
    putchar('\n');

}

void factor(int last)
{
    int factor;

    for (int i = 1, factor = 1; i <= last; i++){
        factor *= i;
        printf("%d is factorial of %d first numbers;\n", factor, i);
    }
    putchar('\n');

}

void fibbonachi(int last)
{
    int fibb[80];
    int count;

    fibb[0] = 1;
    fibb[1] = 1;

    printf("%d %d ", fibb[0], fibb[1]);

    for (count = 2; count < last; count++){
        fibb[count] = fibb[count - 1] + fibb[count - 2];
        printf("%d ", fibb[count]);
    }
    putchar('\n');
    putchar('\n');
}

void minus(int a, int b)
{
    printf("Subtracking %d from %d is %d\n",b, a, a-b);
    putchar('\n');
}