struct sample {
	int a;
	int b;
};
int main()
{
	sample x;
	sample* p = &x;
	int* q = &x.a;

	int a[100];
	int (*p1)[100] = &a   ;
	int * p2       = &a[0];// a ‚Æ‚à‘‚¯‚é

}
