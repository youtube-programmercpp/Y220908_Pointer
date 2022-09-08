#include <stdlib.h>
void f(int (* p)[3])
{
}
int main()
{
	int a[3];
	f(&a);
}
