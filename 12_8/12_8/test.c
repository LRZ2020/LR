 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//void test()
//{
//	staint i = 0;
//	i++;
//	printf("%d", i);
//}
int main()
{
	/*int i = 0;
	
	for (i = 0; i < 10; i++)
	{
		test();
	}*/
	int num = 10;
	&num;
	printf("%p\n", &num);
	return 0;
}