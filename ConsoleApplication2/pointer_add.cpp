#include <stdio.h>
int main()
{
	//          a+0  a+1  a+2
	int a[] = { 10, 100, 1000 };
	int* p = a;
	printf("%p\n", p + 1);
	printf("%p\n", &p[1]);

	printf("%d\n", *(p + 1));
	printf("%d\n", p[1]);



}
