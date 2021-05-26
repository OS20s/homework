#pragma once
#include "teigi.h" //teigi.hをインクルード

double x1, x2; //kadai1.cppで使うため，グローバルで宣言

void kadaif(double a, double b, double c) {
	x1 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a); //二次方程式の公式
	x2 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
}