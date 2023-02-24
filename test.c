/* 指定値をn乗する */
#include <stdio.h>

int main(void)
{
    double num, index;
    // 何の数を
    printf("num   = ");
    scanf("%lf", &num);
    // 何乗する？
    printf("index = ");
    scanf("%lf", &index);

    // index乗する
    double value = 1;
    if (index < 0)
    {
        for (int i = index; i; i++)
            value /= num;
    }
    else
    {
        for (int i = index; i; i--)
            value *= num;
    }
    printf("%.2f ^ %.2f = %.2f\n", num, index, value);

    return 0;
}