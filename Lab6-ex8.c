#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main(void)
{
	char s[25];
	char *dyn_s;
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1);
	dyn_s = s;
	dyn_s[strlen(s)]='\0';
	printf("%s\n", dyn_s);
	return 0;
}

