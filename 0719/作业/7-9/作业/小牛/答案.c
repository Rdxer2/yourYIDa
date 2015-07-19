一.改错
1.有2大错误
int main()
{
    int score;
    int age;
    
    // scanf中必须传入变量的地址，而不是直接传入变量的值
    // scanf中不要包含\n，\n对scanf有特殊含义
    scanf("%d %d", &score, &age);
    // scanf("%d %d\n", score, age);
    
    printf("age是%d，score是%d\n", age, score);
    return 0;
}

2. 有2处错误
#include <stdio.h>

int main()
{
    // 10是常量，不能进行++运算
    // 因为10++相当于10 = 10 + 1
    int a = 10;
    //int a = 10++;
    
    // %两侧必须是整数
    int b = 10 % 2;
    //int b = 10.0 % 2;
    return 0;
}
二、分析题
1.	说出下列程序的输出结果（不要借助终端指令）
#include <stdio.h>

int main()
{
    int a = 20;
    int score = a + 100;
    printf("%d\n", score);//120
    
    {
        int score = 50;
        {
            score = 10;
            printf("%d\n", score);//10
        }
        a = 10;
    }
    
    {
        score = a + 250;
        int score = 30;
        printf("%d", score);//30
    }
    
    printf("%d\n", score);//260
    return 0;
}
答案：
120
10
30260

三、编程题
1、接受用户从键盘上输入的两个字符，然后输出他们
int main()
{
    char c,d;
    printf("请输入两个字符以逗号分隔\n");
    scanf("%c,%c",&c,&d);
    printf("你输入的字符分别是：%c,%c\n",c,d);
    return 0;
}
2、接受用户从键盘上输入的两个双精度浮点数，然后输出他们
int main()
{
    double c,d;
    printf("请输入两个小数以逗号分隔\n");
    scanf("%lf,%lf",&c,&d);
    printf("你输入的小数分别是：%lf,%lf\n",c,d);
    return 0;
}
3、接受用户从键盘上输入的两个单精度浮点数，然后输出他们(保留两位整数))
int main()
{
    float c,d;
    printf("请输入两个小数以逗号分隔\n");
    scanf("%f,%f",&c,&d);
    printf("你输入的小数分别是：%.2f,%.2f\n",c,d);
    return 0;
}
4、用户从键盘上输入两个整数，然后输出他们和
int main()
{
    int c,d;
    printf("请输入两个整数以逗号分隔\n");
    scanf("%d,%d",&c,&d);
    int sum  = c + d;
    printf("%d + %d = %d\n",c,d,sum);
    return 0;
}
5、用户从键盘上输入两个整数，然后输出他们差
int main()
{
    int c,d;
    printf("请输入两个整数以逗号分隔\n");
    scanf("%d,%d",&c,&d);
    int minus  = c - d;
    printf("%d - %d = %d\n",c,d,minus);
    return 0;
}
6、用户从键盘上输入两个整数，输出他们的商
int main()
{
    int c,d;
    printf("请输入两个整数以逗号分隔\n");
    scanf("%d,%d",&c,&d);
    int quotient  = c / d;
    printf("%d / %d = %d\n",c,d,quotient);
    return 0;
}
7、用户从键盘上输入两个整数，输出他们的余数
int main()
{
    int c,d;
    printf("请输入两个整数以逗号分隔\n");
    scanf("%d,%d",&c,&d);
    int mod  = c % d;
    printf("%d % %d = %d\n",c,d,mod);
    return 0;
}
8.在控制台输出 %
int main()
{
    printf("%%");//printf函数打印 % 字符要用 %% 才能打印
}


