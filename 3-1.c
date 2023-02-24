/* 0.1を100回加える */
#include <stdio.h>

int main(void)
{
    float sum = 0.0;
    int i = 100;

    // 0.1を100回加える
    while (i--)
        sum += 0.1;

    // 結果を表示する
    printf("%f\n", sum);

    return 0;
}
