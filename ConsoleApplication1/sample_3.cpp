#include <iostream>
#include <stdlib.h> // _countof マクロが入っている
#include <algorithm>
int main()
{
	static const double a[] = { 85, 92, 71, 73, 89, 68, 91, 83, 67, 90 };
	const auto& 最大値 = *std::max_element(a, std::end(a));
	const auto& 最小値 = *std::min_element(a, std::end(a));
	std::cout << "最大値："<< 最大値 << " (" << &最大値 - &a[0] + 1 << " 番目)\n";
	std::cout << "最小値："<< 最小値 << " (" << &最小値 - &a[0] + 1 << " 番目)\n";
}
