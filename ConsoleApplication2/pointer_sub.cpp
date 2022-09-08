#include <string.h>
#include <stdio.h>
int main()
{
	//                       01234567
	static const char s[] = "ABCD*EFG";
	const char* const p = strchr(s, '*');
	printf("%d\n", (int)(p - s));
}
