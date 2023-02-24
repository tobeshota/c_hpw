/* 変数aに123、変数bに456という値を代入してから、それらを引数（パラメータ）に与えてMyFuncとい関数を呼び出す */
#include <stdio.h>

int MyFunc(int a, int b) //  0260    関数の呼び出し
{
    // 0354     リターン命令（0132番地の命令の次の命令に戻る）
    return a + b;
}

int main(void)
{
    // 0100
    int a = 123;
    // 0116
    int b = 456;

    // 0132     コール命令（0260番地に移動し、Myfunc関数を呼び出す）
    int c = MyFunc(a, b);

    // 0154
    printf("%d", c);

    // 0160
    return 0;
}