#include "stdio.h"
#include "teigi.h" //teigi.hをインクルード

void kadaif(double, double, double);

int main() {
	double a, b, c;
	extern double x1, x2; //他のファイルで宣言したx1とx2をここでも使用可能にする

	printf("ax^2における\na, b, cをカンマ区切りで入力しなさい\n");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);

	kadaif(a, b, c); //kadaifの関数にアクセス

	printf("x1=%lf\n", x1); //kadaifで計算したx1を表示
	printf("x2=%lf\n", x2); //kadaifで計算したx2を表示

	return 0;
}

