#include <stdio.h>
int main()
{
	static const int a[] = { 85, 92, 71, 73, 89, 68, 91, 83, 67, 90 };
	int 最大値 = a[0];//暫定
	int 最小値 = a[0];//暫定
	int 最大値は何番目か = 1;
	int 最小値は何番目か = 1;
	for (int i = 1; i < sizeof a / sizeof * a; ++i) {
		if (最大値 < a[i]) {
			最大値 = a[i];
			最大値は何番目か = i + 1;
		}
		else if (最小値 > a[i]) {
			最小値 = a[i];
			最小値は何番目か = i + 1;
		}
	}
	printf("最大値：%d (%d 番目)\n", 最大値, 最大値は何番目か);
	printf("最小値：%d (%d 番目)\n", 最小値, 最小値は何番目か);
}
