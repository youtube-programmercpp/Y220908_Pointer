#include <iostream>
#include <stdlib.h> // _countof �}�N���������Ă���
#include <algorithm>
int main()
{
	static const double a[] = { 85, 92, 71, 73, 89, 68, 91, 83, 67, 90 };
	const auto& �ő�l = *std::max_element(a, std::end(a));
	const auto& �ŏ��l = *std::min_element(a, std::end(a));
	std::cout << "�ő�l�F"<< �ő�l << " (" << &�ő�l - &a[0] + 1 << " �Ԗ�)\n";
	std::cout << "�ŏ��l�F"<< �ŏ��l << " (" << &�ŏ��l - &a[0] + 1 << " �Ԗ�)\n";
}
