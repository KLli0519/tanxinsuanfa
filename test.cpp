#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	//输入
	int n = 6;
	char S[7] = "BCDABC";
	int a = 0, b = n - 1;
	while (a <= b) 
	{

		bool left = false;
		//把从左起和从右起的字符串比较
		for (int i = 0;a + i <= b;i++) 
		{
			if (S[a + i] < S[b - i]) 
			{
				left = true;
				break;
			}
			  else if (S[a + i] > S[b - i]) 
			  {
				left = false;
				break;
			  }
		}
		//左右两边谁大输出谁
		if (left) putchar(S[a++]);
		else putchar(S[b--]);
	}

	return 0;
}
