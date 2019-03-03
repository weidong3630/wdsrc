#include <stdio.h>
int main()
{
	char* string = (char*)0x123;
	//new char[10];
	printf("hello,world: %p!\n", string);
	return 0;
}
