/* 2進数を10進数にする */

#include <stdio.h>

int is_integer_digit(double);
int is_small_digit(double);

int main(void)
{
    // 変数宣言
    double binary;        // 2進数（入力値）
    double decimal = 0.0; // 10進数（出力値）

    printf("入力値: ");
    scanf("%lf", &binary);

    // 入力値の整数桁数を算出する
    int integer_digit = is_integer_digit(binary);
    // 入力値の小数桁数を算出する
    int small_dicit = is_small_digit(binary);

    // テスト
    printf("【テスト】整数桁数: %d\n", integer_digit);
    printf("【テスト】小数桁数: %d\n", small_dicit);

    // 整数桁数ぶん演算を繰り返す
    int intbinary = (int)binary; // 小数部分を省いた入力値
    int surplus;                 // 入力値を10で割ったあまり（integer_digit桁目の値）
    while (integer_digit--)
    {
        surplus = intbinary % 10;

        // あまりが1であるかを調べる
        // あまりが1であるとき、出力値に2*integer_digitを加算する
    }

    int n = 10, num = 123, value = 0;
    while (n--)
    {
        value = num % 10;
        printf("【テスト】value : %d\n", value);
        printf("【テスト】num: %d\n", num);
    }

    // 小数桁数ぶん演算を繰り返す
    // 演算対象桁数が1のとき、出力値に2/桁数を加算する

    return 0;
}

int is_integer_digit(double binary)
{
    // 変数宣言
    int integer_digit = 0; // 整数桁数（戻り値）

    // 入力値を0になるまで10で割る
    while ((int)binary != 0)
    {
        binary /= 10;
        // 桁数、すなわち入力値が0になるまでに10で割ることのできた回数をカウントする。
        integer_digit++;
    }

    // 桁数を返す
    return integer_digit;
}

int is_small_digit(double binary)
{
    // 変数宣言
    int intbinary = (int)binary; // int型入力値（小数0）
    int small_digit = 0;         // 小数桁数（戻り値）

    // 入力値を10でかけ、その数をint型入力値（小数0）に代入し、double型入力値（引数。小数部分あり）==int型入力値（小数0）となるまで繰り返す
    while (binary != intbinary)
    {
        binary *= 10;
        intbinary = binary;
        // 繰り返した数、すなわち桁数をカウントする
        small_digit++;
    }

    // 桁数を返す
    return small_digit;
}