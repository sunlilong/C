#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
//�ṹ�������c���Դ����µ�����
#include <stdio.h>
//����һ��ѧ������
struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������
struct book
{
	char name[20];
	float pirce;
	char id[30];
};

int main()
{
	struct stu s = { "����", 20, 80.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s\t %d\t %lf\t\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct stu* ps = &s;
	printf("2:%s\t %d\t %lf\t\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3:%s\t %d\t %lf\t\n", ps->name, ps->age, ps->score);//psΪ�ṹ��ָ��->��Ա������
	return 0;
}