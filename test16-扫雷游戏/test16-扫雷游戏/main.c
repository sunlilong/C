#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
    printf("***********************\n");
    printf("*****   1. play   *****\n");
    printf("*****   0. exit   *****\n");
    printf("***********************\n");
}
void game()
{
    char mine[ROWS][COLS];//��Ų��úõ��� 
    char show[ROWS][COLS];//����Ų�����׵���Ϣ 

    //��ʼ������ 
    //1. mine�����ʼ��ȫ'0' 
    //2. show�����ʼ��ȫ'*' 
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');

    //��ӡ���� 
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);

    //1. ������ 
    SetMine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    // 
    //2. �Ų��� 
    FindMine(mine, show, ROW, COL);
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����,����ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}