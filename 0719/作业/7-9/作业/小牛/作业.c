一.改错

1.
#include <stdio.h>

int main()
{
    float score;
    int age;
    
    scanf("%d %d",&score, &age);
    printf("age是%d，score是%d\n", age, score);
    return 0;
}


2.
#include <stdio.h>

int main()
{
    int a = 10++;
    
    int b = 10.0 % 2;
    return 0;
}
3、分析题
说出下列程序的输出结果（不要运行程序）
#include <stdio.h>

int main()
{
    int a = 20;
    int score = a + 100;
    printf("%d\n", score);
    
    {
        int score = 50;
        {
            score = 10;
            printf("%d\n", score);
        }
        a = 10;
    }
    
    {
        score = a + 250;
        int score = 30;
        printf("%d", score);
    }
    
    printf("%d\n", score);
    return 0;
}


三.编程题
1、接受用户从键盘上输入的两个字符，然后输出他们
2、接受用户从键盘上输入的两个双精度浮点数，然后输出他们
3、接受用户从键盘上输入的两个单精度浮点数，然后输出他们(保留两位整数))
4、用户从键盘上输入两个整数，然后输出他们和
5、用户从键盘上输入两个整数，然后输出他们差
6、用户从键盘上输入两个整数，输出他们的商
7、用户从键盘上输入两个整数，输出他们的余数
8、在控制台输出 %


