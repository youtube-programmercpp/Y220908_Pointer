#include <stdio.h>
#include <stdlib.h> // _countof �}�N���������Ă���
int main()
{
	static const int a[] = { 85, 92, 71, 73, 89, 68, 91, 83, 67, 90 };
	const int* �ő�l = &a[0];
	const int* �ŏ��l = &a[0];
	//
	//	p < *(&a + 1) �� p < &a[_countof(a)] �Ə�����
	//
	for (const int* p = &a[1]; p < *(&a + 1); ++p) {
		if (*�ő�l < *p)
			�ő�l = p;
		else if (*�ŏ��l > *p)
			�ŏ��l = p;
	}
	printf("�ő�l�F%d (%d �Ԗ�)\n", *�ő�l, (int)(�ő�l - &a[0]) + 1);
	printf("�ŏ��l�F%d (%d �Ԗ�)\n", *�ŏ��l, (int)(�ŏ��l - &a[0]) + 1);
}
