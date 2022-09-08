// ˆø‚«”
//	int a[]
//	int *a
void f(int (*a)[3])
{
	(*(a+1))[1] = 123;
}
int main()
{
	int a[5][3];
	f(a);
}
