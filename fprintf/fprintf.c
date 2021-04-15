#include<stdio.h> 

int main () {
	FILE* test = fopen("test.txt", "w");
	char str1[60];
	char str2[60];
	char str3[60];
	int int1 = 0;
	scanf("%s %s %s %d", &str1, &str2, &str3, &int1);
	fprintf(test, "%s %s %s %d", str1, str2, str3, int1);
	printf("%s\n%s\n%s\n%d", str1, str2, str3, int1);
	fclose(test);
}
