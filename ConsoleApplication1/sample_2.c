#include <stdio.h>
#include <stdlib.h> // _countof マクロが入っている
int main()
{
	static const int a[] = { 85, 92, 71, 73, 89, 68, 91, 83, 67, 90 };
	const int* 最大値 = &a[0];
	const int* 最小値 = &a[0];
	//
	//	p < *(&a + 1) は p < &a[_countof(a)] と書ける
	//
	for (const int* p = &a[1]; p < *(&a + 1); ++p) {
		if (*最大値 < *p)
			最大値 = p;
		else if (*最小値 > *p)
			最小値 = p;
	}
	printf("最大値：%d (%d 番目)\n", *最大値, (int)(最大値 - &a[0]) + 1);
	printf("最小値：%d (%d 番目)\n", *最小値, (int)(最小値 - &a[0]) + 1);
}
