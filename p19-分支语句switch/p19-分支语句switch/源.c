#define _CRT_SECURE_NO_WARNINGS 1
//基本形式
//switch (整型表达式)
//{
//	语句项;
//}
//#include <stdio.h>
//
//int main()
{
	//int day = 0;
	//scanf("%d", &day);

	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");//入口
	//	break;//跳出，出口
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	//}

		//1-5 工作日
		//6-7 休息日
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default:				//default子句，无顺序要求，默认放最后
	//	printf("输入错误\n");  //所有case不能匹配都输出
	//	break;
	//}


//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//
//
//	return 0;
//}