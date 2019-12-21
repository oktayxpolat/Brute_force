#include<stdio.h>
#include<string.h>

int main(){
	char a[11]={"0123456789"};
	char b[11]={"abcdefghlk"};
	int arti;
	arti= sizeof(a) + sizeof(b);
	char c[arti];
	strcpy(c,a);
	strcat(c,b);
	printf("%s",c);
	return 0;
}
