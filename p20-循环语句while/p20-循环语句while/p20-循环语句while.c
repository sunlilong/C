#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//whileѭ��
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////��ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//��whileѭ����,break�������õ���ֹѭ��
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
//			continue;//��whileѭ����,continue������������ѭ������Ĵ���,ֱ��ȥ�жϲ���,���Ƿ���Ҫ������һ��ѭ��
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
//	printf("���������룺>>>");
//	scanf("%s",password);//123456
//	printf("��ȷ������[Y/N]��>>>");
//	//��������
//	//getchar();//����\n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}//�����������еĶ���ַ�
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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
//	int i = 1;//��ʼ��
//	while (i<=10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//ѭ�������ĵ�������
//	}
//	return 0;
//}