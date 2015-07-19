
一、写出下面代码做了些什么

#include <stdio.h>
int main()
{
    
    int age;
    age = -1;
    float height = -1;
    printf("请输入年龄和身高，以逗号分割\n");

    scanf("%d,%f", &age, &height);

    printf("age是%d，score是%.2f\n", age, height);
    return 0;
}


二、改错题
1.
#include <stdio.h>

int main()
{
    int score;
    int age;
    
    scanf("%d %d\n", score, age);
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


二.	分析题

1、请写出下面代码的执行结果

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
2、接受用户从键盘上如何的连个双精度浮点数，然后输出他们
3、接受用户从键盘上如何的连个单精度浮点数，然后输出他们(保留两位整数))
4、用户从键盘上输入两个整数，然后输出他们和

