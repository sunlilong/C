#define _CRT_SECURE_NO_WARNINGS
//C���ַ�������һ���ַ�--��˫������������һ���ַ�
#include <stdio.h>
#include <string.h>

int main()
{
    //�ַ�����--������һ����ͬ���͵�Ԫ�أ�����
    //�ַ����ڽ�β������һ��\0���ַ�
    //\0���ַ����Ľ�����־
    //"abcdef";
    //char arr[] = "hello";
    char arr1[] = "abc";
    char arr2[] = { 'a','b','c' };

    //���ַ�������
    int len = strlen("abc");//string length
    printf("%d\n", len); //\0��Ϊ�ַ�����β��־���ڣ������ַ������ǲ�������
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));//���ֵ
     //��ӡ�ַ���
    printf("%s\n", arr1);
    printf("%s\n", arr2);
}