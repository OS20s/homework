#include <stdio.h>

int main()
{
	//ab + ca = bbc
	int a, b, c;
	
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				//aとbとcの1~9までのすべての組み合わせを検索
				//ab + ca = bbcが満たされた場合、出力
				if ((a * 10 + b) + (c * 10 + a) == (b * 100 + b * 10 + c))
					printf("a:%d b:%d c:%d", a, b, c);
				
			}
		}
	}

	return 0;
}