#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 10000
//����
//1�����泣��
//123
//a
//abcdef
//2��const���εĳ�����
//3��#difine  ����ı�ʶ������
//4��ö�ٳ���
//����һһ�оٵĳ���
//�Ա�
enum Sex//enumΪö�ٹؼ��֣�����ΪSex
{
    //����ö�����͵ı�����δ������ȡֵ
    //ö�ٳ���
    MALE = 3,//����ֵ
    FEMALE,
    SECRET
};
int main()
{
    const int a = 10;//aΪ������ - ���г����ԣ����ܱ��ı�����ԣ�
    //a = 20;
    printf("a = %d\n", a);//20
    int b = max;
    printf("%d\n", b);
    //MALE = 3;//err
    enum Sex s = MALE;
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);

    return 0;
}