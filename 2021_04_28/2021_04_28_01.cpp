#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

#define N 10000.0 //回数指定 N = 10000

int main()
{
	int detame[6] = { 0 }; //6つの配列全てを0に初期化
	int me;
	int i;
	srand(time(0)); //乱数の種を設定　実行するたびに結果が変わるように

	for (i = 0; i < N; i++)
	{
		me = rand() % 6; //0~5の乱数を出力
		detame[me]++; //出た目をカウント
	}
	printf("目\t1\t2\t3\t4\t5\t6\n");
	printf("回数\t%d\t%d\t%d\t%d\t%d\t%d\n", detame[0], detame[1], detame[2], detame[3], detame[4], detame[5]);
	printf("確率\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n", detame[0] / N, detame[1] / N, detame[2] / N, detame[3] / N, detame[4] / N, detame[5] / N);
	//出た回数÷サイコロを振った回数で割合を出す
	return 0;
}

