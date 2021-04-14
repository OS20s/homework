#include "stdio.h"

typedef struct myaddress {
	char name[20]; //名前
	char phone[15];//電話番号
	int grade;//学年
}MYADD;

int main()
{
	MYADD data[3];//myaddressの構造体の配列を宣言
	int i;


	for (i = 0; i < 3; i++)
	{
		//入力させる
		printf("[%d]件目 名前を入力してください", i + 1);
		scanf_s("%s", data[i].name, 20); //20は文字列のサイズ上限 別に100でも200でもいい
		printf("[%d]件目 電話番号を入力してください ", i + 1);
		scanf_s("%s", data[i].phone, 15); //15は同じく文字列のサイズ上限
		printf("[%d]件目 学年を入力してください ", i + 1);
		scanf_s("%d", &data[i].grade); //文字列ではないので&が必要
	}


	
	for (i = 0; i < 3; i++) printf("%s,\t%s,\t%d\n",  
		data[i].name, 
		data[i].phone, 
		data[i].grade);
	//3つの配列の名前、電話番号、学年を出力
	//\t は水平タブを意味する

    return 0;
}

