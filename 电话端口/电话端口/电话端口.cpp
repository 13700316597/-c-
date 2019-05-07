// 电话端口.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
using namespace std;
void floor6(int xingcan);
void floor7(int xingcan);
void floor8(int xingcan);
void floor9(int xingcan);
void floor5(int xingcan);
void floor10(int xingcan);
void floor11(int xingcan);

int main()
{
	int duanko = 0;
	int louceng = 0;
	int pasw = 0;
	/*cout << "请输入密码" << endl;
	cin >> pasw;
	if (pasw != 123456)
	{
		printf("密码错误退出啦拜了个拜");
		printf("(密码提示:123456)");
		exit(1);
		getchar();
	}
	*/
	while (1)
	{
	
		cout << "请输入本地端口" << endl;
		cin >> duanko;
		cout << "请输入楼层" << endl;
		
		cin >> louceng;
		if (louceng != 5 && louceng != 6 && louceng != 7 && louceng != 8 && louceng != 9 && louceng != 10 && louceng != 11)
		{
			printf("请输入正确的楼层 向你抛出error");
			printf("拜拜喽~~~~~~~~~~~~~~~~~~~~~~~~~");
			exit(1);
			getchar();
		}

		switch (louceng)
		{
		case 6:
			floor6(duanko);
			break;
		
		case 8:
			floor8(duanko);
			break;
		case 10:
			floor10(duanko);
			break;
		
		case 11:
			floor11(duanko);
			break;
		case 5:
			floor5(duanko);
			break;
		case 9:
			floor9(duanko);
			break;
		case 7:
			floor7(duanko);
			break;



		}
		


	
	}
	
}



void floor6(int xingcan)//六楼函数
{
	int bc = 0;
	bc = xingcan;
	int k = 50;//k是联通开头，需要初始化
	int c = 25;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	

	if (bc <= 25)
	{

		printf("联通端口为%d\n", bc);

	}
	else
	{
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;
			if (c == bc)
			{
				break;
			}
			
		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}
	
	

}

void floor7(int xiangcan)//7楼函数
{
	int bc = 0;
	bc = xiangcan;
	int k = 0;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	if (bc > 44)
	{
		printf("只有44个端口");
		exit(1);
	}

	if (bc > 25)
	{
		k = 75;
		c = 25;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;
			
			if (c == bc)
			{
				break;
			}
			
		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);

	}
	else
	{

		k = 25;
		c = 0;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;
			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}



}


void floor8(int xingcan)//八楼
{


	int bc = 0;
	bc = xingcan;
	int k = 0;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	/*if (bc > 44)
	{
		printf("只有44个端口");
		exit(1);
	}*/

	if (bc > 25 )
	{
		k = 145;
		c = 24;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;
			

			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);

	}
	else
	{

		k = 96;
		c = 0;
		
		for (int i = 97; i <= 121; i++)
		{
			k++;
			c++;
			
			
			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}




}


void floor9(int xingcan)//9楼
{


	int bc = 0;
	bc = xingcan;
	int k = 0;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	if (bc > 44)
	{
		printf("只有44个端口");
		exit(1);
	}

	if (bc > 25)
	{
		k = 172;
		c = 24;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;
			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n！！！！！", c, k);

	}
	else
	{

		k = 121;
		c = 0;

		for (int i = 97; i <= 121; i++)
		{
			k++;
			c++;
			

			if (c == bc)
			{
				break;
			}

		}
     printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}




}

void floor10(int xingcan)//10楼
{


	int bc = 0;
	bc = xingcan;
	int k = 0;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	/*if (bc > 44)
	{
		printf("只有44个端口");
		exit(1);
	}*/

	if (bc > 25)
	{
		k = 242;
		c = 24;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;


			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);

	}
	else
	{

		k = 192;
		c = 0;

		for (int i = 97; i <= 121; i++)
		{
			k++;
			c++;


			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}




}

void floor5(int xingcan)//5楼
{


	int bc = 0;
	bc = xingcan;
	int k = 217;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;

		for (int i = 97; i <= 121; i++)
		{
			k++;
			c++;


			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}








void floor11(int xingcan)//11楼
{


	int bc = 0;
	bc = xingcan;
	int k = 0;//k是联通开头，需要初始化
	int c = 0;//c是本地端口开头，需要初始化
	int biaozhi = 0;
	/*if (bc > 44)
	{
		printf("只有44个端口");
		exit(1);
	}*/

	if (bc > 25)
	{
		k = 242;
		c = 24;
		for (int i = 0; i <= 25; i++)
		{
			k++;
			c++;


			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);

	}
	else
	{

		k = 268;
		c = 0;

		for (int i = 268; i <= 288; i++)
		{
			k++;
			c++;


			if (c == bc)
			{
				break;
			}

		}
		printf("本地端口为 = %d >>>> 联通端口为 = %d\n", c, k);
	}




}




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
