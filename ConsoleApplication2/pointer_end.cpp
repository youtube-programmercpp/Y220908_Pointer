#include <stdio.h>
int main()
{
	//         [0] [1] [2]   [3]
	int a[] = { 10, 30, 800, -50 };
	for (int* p = &a[0]; p < *(&a+1); ++p) {
		printf("%d\n", *p);
	}
}
