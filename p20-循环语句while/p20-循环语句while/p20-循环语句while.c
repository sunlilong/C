#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//while循环
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//在while循环中,break用于永久的终止循环
//		printf("%d\n", i);
//		i++;

//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//在while循环中,continue用于跳过本次循环后面的代码,直接去判断部分,看是否需要进行下一次循环
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//getchar
//int main()
//{
//	//Read a character from a stream (getc, getwc), or get a character from stdin (getchar, getwchar).
//	int ch = 0;
//	while ((ch = getchar() ) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>>>");
//	scanf("%s",password);//123456
//	printf("请确认密码[Y/N]：>>>");
//	//清理缓冲区
//	//getchar();//处理\n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}//消除缓冲区中的多个字符
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}


//int main()
//{
//	int i = 1;//初始化
//	while (i<=10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//循环变量的调整部分
//	}
//	return 0;
//}