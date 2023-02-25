/* 小数点数を含む数の計算 */
/* 0.1を100回加えた値を、小数点数を整数に置き換えて計算することで正確に求める */
#include <stdio.h>

int main(void)
{
    float sum = 0.0; //  合計値
    int i = 100;     //  入力値を加える回数

    // 小数点数0.1を整数1に置き換えて100回加える
    while (i--)
        sum += (0.1 * 10);

    // 小数の桁数 × 10 してsumを小数点数に戻す
    sum /= 10;

    // 結果を表示する
    printf("0.1 × 100 = %f\n", sum);

    return 0;
}