/* 変数aに123、変数bに456という値を代入してから、それらを引数（パラメータ）に与えてMyFuncとい関数を呼び出す */
#include <stdio.h>

void MyFunc(int *a, int *b)
{
    *a += *b;
}

int main(void)
{
    int a = 123;
    int b = 456;

    MyFunc(&a, &b);

    printf("%d", a);

    return 0;
}
