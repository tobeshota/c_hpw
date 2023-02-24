/* 変数aに123、変数bに456という値を代入してから、それらを引数（パラメータ）に与えてMyFuncとい関数を呼び出す */
#include <stdio.h>

int MyFunc(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a = 123;
    int b = 456;

    int c = MyFunc(a, b);

    printf("%d", c);

    return 0;
}
