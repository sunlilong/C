#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
//结构体可以让c语言创建新的类型
#include <stdio.h>
//创建一个学生类型
struct stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型
struct book
{
	char name[20];
	float pirce;
	char id[30];
};

int main()
{
	struct stu s = { "张三", 20, 80.5 };//结构体的创建和初始化
	printf("1:%s\t %d\t %lf\t\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct stu* ps = &s;
	printf("2:%s\t %d\t %lf\t\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3:%s\t %d\t %lf\t\n", ps->name, ps->age, ps->score);//ps为结构体指针->成员变量名
	return 0;
}