#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//for循环基本语法
//for(表达式1;表达式2;表达式3)
//		循环语句;

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
// //for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	{
//		if (5 == i)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		//i = 5;	最好不要在循环体内修改循环变量，防止for循环失去控制
//	}
//	return 0;
//}


//建议for循环的循环控制变量的取值采用“前闭后开区间”写法


//for循环的变种写法
//int main()
//{
//	for (;;)//判断部分的省略 - 判断部分恒为真
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    int j = 0;
//    //如果省略掉初始化部分，这里打印多少个hehe?
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}
