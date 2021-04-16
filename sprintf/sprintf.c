#include<stdio.h> 

int main () {
	char dst[60];
	int num = 123;
	sprintf(dst, "this is a test num: %d", num);
	printf("%s\n", dst);
	return 0;
}
