#include <stdio.h>
#include <string.h>
int main() {
	int number;
	char uppercase[]={"ABC"};
	char lowercase[] = {"abc"};	
	char numbers[] = {"12345"};
	char signs[] = {"*-?"};
	printf("1:Uppercase\n2:Lowercase\n3:Numers\n4:Signs\n5:Uppercase and Lowercase\n6:Uppercase and Numbers\n7:Uppercase and Signs\n8:Lowercase and Numbers\n9:Lowercase and Signs\n10:Numbers and Signs\n11:Uppercase, Lowercase and Numbers\n12:Uppercase, Numbers and Signs\n13:Lowercase, Numbers and Signs\n14:Uppercase, Lowercase, Numbers and Signs\n\n");
	printf("Enter the number of the category you want to test:");
	scanf("%d",&number);
	
	if(number==1){
		printf("Uppercase is being tested.\n");
		char uppercase[4]="ABC";
		printf("%s",uppercase);
	}
	if(number==2){
		printf("Lowercase is being tested.\n");
		char lowercase[4] = "abc";
		printf("%s",lowercase);
	}
	if(number==3){
		printf("Numbers are being tested.\n");
		char numbers[6] = {"12345"};
		printf("%s",numbers);
	}
	if(number==4){
		printf("Signs are being tested.\n");
		char signs[4] = "*-?";
		printf("%s",signs);
	}
	if(number==5){
		printf("Uppercase and Lowercase are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,lowercase);
			printf("%s",c);
	}
	if(number==6){
		printf("Uppercase and Numbers are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(numbers);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,numbers);
			printf("%s",c);
	}
	if(number==7){
		printf("Uppercase and Signs are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(signs);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,signs);
			printf("%s",c);
	}
	if(number==8){
		printf("Lowercase and Numbers are being tested.\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(numbers);
			char c[arti];
			strcpy(c,lowercase);
			strcat(c,numbers);
			printf("%s",c);
	}
	if(number==9){
		printf("Lowercase and Signs are being tested.\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(signs);
			char c[arti];
			strcpy(c,lowercase);
			strcat(c,signs);
			printf("%s",c);
	}
	if(number==10){
		printf("Numbers and Signs are being tested.\n");
		int arti;
			arti= sizeof(numbers) + sizeof(signs);
			char c[arti];
			strcpy(c,numbers);
			strcat(c,signs);
			printf("%s",c);
	}
	if(number==11){
		printf("Uppercase, Lowercase and Numbers are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase) + sizeof(numbers);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,lowercase);
			strcat(c,numbers);
			printf("%s",c);
	}
	if(number==12){
		printf("Uppercase, Numbers and Signs are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,numbers);
			strcat(c,signs);
			printf("%s",c);
	}
	if(number==13){
		printf("Lowercase, Numbers and Signs are being tested.\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
			strcpy(c,lowercase);
			strcat(c,numbers);
			strcat(c,signs);
			printf("%s",c);
	}
	if(number==14){
		printf("Uppercase, Lowercase, Numbers and Signs are being tested.\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
			strcpy(c,uppercase);
			strcat(c,lowercase);
			strcat(c,numbers);
			strcat(c,signs);
			printf("%s",c);
	}
	return 0;
}
