#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int i;
//    float sum = 0;
//    for (i = 1; i <= 10; ++i)
//    {
//
//        if (i % 2 == 0)
//        {
//            sum += -1.0 / i;
//        }
//        else
//        {
//            sum += 1.0 / i;
//        }
//    }
//    printf("%f", sum);
//    return 0;
//}//对1-1/2+1/3-1/4+….(1/n)求和。要求用程序验证n=10的结果


//#include<stdio.h>
//int main()
//{
//	int b = 1;
//	for (int i = 9; i > 0; i--)//天数递减（倒推计算）
//	{
//		b = 2 * (b + 1);//计算每一天的吃桃数
//	}
//	printf("第一天吃%d", b);
//	return 0;
//}//猴子吃桃问题


//#include <stdio.h>
//
//int main()
//{
//    int in;
//    scanf("%d", &in);
//    do
//    {
//        printf("%d ", in % 10);   //输出个位数
//        in = in / 10;				//自身除以10
//    } while (in != 0);				//当数值不为0的时候，在继续循环
//}//任意输入一个整数，将其各位数字反序输出。


//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    int count = 0;
//
//    for (i = 101; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            //            如果j能被i整出在跳出循环
//            if (i % j == 0)
//                break;
//        }
//        //        判断循环是否提前跳出，如果j<i说明在2~j之间,i有可整出的数
//        if (j >= i)
//        {
//            count++;
//            printf("%d ", i);
//            //            换行，用count计数，每五个数换行
//            if (count % 5 == 0)
//                printf("\n");
//
//        }
//
//    }
//    return 0;
//}//素数问题


//#include <stdio.h>
//
//int main() {
//	int n;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	printf("%d = ", n);
//	for (int i = 2; i <= n; i++) {
//		while (n != i) { // 执行的条件必须是n与i不等，若相等则分解结束了
//			if (n % i == 0) { // 若能整除则i为n的因子之一
//				printf("%d * ", i); // 输出因子
//				n = n / i; // 找到了一个因子i，则n/i缩小n继续寻找
//			}
//			else {
//				break; // 不能整除则跳出本次循环，递增i进行下一轮
//			}
//		}
//	}
//	printf("%d\n", n); // 最后剩下的n不能整除i，所以它也为因子之一，所以最后输出
//	return 0;
//}//将一个正整数分解质因数。


//#include<stdio.h>
//
////实现 阶乘
//int fact(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int n, result = 0;
//
//	scanf("%d", &n);
//
//	for (int j = 1; j <= n; j++)
//	{
//		result += fact(j);
//	}
//
//	printf("%d", result);
//
//	return 0;
//}//计算序列 1!+2!+3!+⋯ 的前N项之和。


//#include <stdio.h>
//
//int main() {
//    float lc;    //lc里程
//    int min, cf;    //min分钟, cf车费
//
//    scanf("%f %d", &lc, &min);
//
//    //1.先根据里程数计算费用
//    if (lc <= 3)    //小于3公里
//        cf = 10;
//    else if (lc > 3 && lc <= 10)    //大于3公里且小于10公里
//        cf = 10 + (lc - 3) * 2 + 0.5;
//    else if (lc > 10)    //大于10公里
//        cf = 10 + (lc - 3) * 2 + (lc - 10) + 0.5;
//
//    //2.根据临时停车计算费用
//    if (min >= 5) {    //仅当超过5分钟时，才进行计费
//        cf += (min / 5) * 2;
//    }
//
//    printf("%d", cf);
//
//    return 0;
//}//出租车收费


//#include<stdio.h>
//int Fibon(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return Fibon(n - 1) + Fibon(n - 2);
//	}
//}
//int main() {
//
//	for (int i = 1; i <= 20; i++) {
//		printf("%d\n", Fibon(i));
//	}
//	return 0;
//}//兔子繁殖案例


//#include<stdio.h>
//int main()
//{
//	float h = 100, s = 0;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		s = s + h + h / 2; printf("第%d次s=%f\n", i, s);
//		h = h / 2;
//	}
//	printf("第10次落地时，共经过%f米。\n", s);
//	printf("第10次反弹%f米。\n", h);
//	return 0;
//}//球反弹


//#include<stdio.h>
//int main()
//{
//    int a, b, m, n;
//    scanf("%d %d", &n, &m);
//    a = (4 * n - m) / 2;
//    b = (m - 2 * n) / 2;
//    printf("%d %d", a, b);
//    return 0;
//}//鸡兔同笼