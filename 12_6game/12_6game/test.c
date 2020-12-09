 #define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*******1.play0.exit*******\n");
	printf("**************************\n");
}



void game()
{
	char ret = 0;
	//搭建棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印出棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断谁赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C');
		{
			break;
		}


		//电脑下
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C');
		{
			break;
		}

	}



	if (ret == '#')
	{
		printf("玩家赢\n");
	}
	if (ret == '*')
	{
		printf("电脑赢\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
}










void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("tuichuyouxi\n");
			break;
		default:
			printf("qingchongxinxuanze\n");
			break;
		}
	} while (input);

}






int main()
{
	test();
	return 0;
}