#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void permute(char *a, int i, char n, char m) 
{
   int j; 
   if (i == m)
   {
       char temp = *(a+i);
       *(a+i) = '\0';
       printf("%s\n", a);
       *(a+i) = temp;
   }
   else
   {
       for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n, m);
          swap((a+i), (a+j));
       }
   }
} 
int main() {
	char password;
	int number;
	char uppercase[]={"ABC"};
	char lowercase[] = {"abc"};	
	char numbers[] = {"12345"};
	char signs[] = {"*-?"};
		printf("1:Uppercase\n2:Lowercase\n3:Numers\n4:Signs\n5:Uppercase and Lowercase\n6:Uppercase and Numbers\n7:Uppercase and Signs\n8:Lowercase and Numbers\n9:Lowercase and Signs\n10:Numbers and Signs\n11:Uppercase, Lowercase and Numbers\n12:Uppercase, Numbers and Signs\n13:Lowercase, Numbers and Signs\n14:Uppercase, Lowercase, Numbers and Signs\n\n");
		printf("Enter the number of the category you want to test:");
		scanf("%d",&number);
	
	if(number==1){
		printf("Uppercase is being tested.\n\n");
		char uppercase[4]="ABC";
			printf("Characters of this category are %s\n\n",uppercase);
		int n = strlen(uppercase); 
		int i, digit;
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(uppercase, 0, n-1, i);
			}
	}
	if(number==2){
		printf("Lowercase is being tested.\n\n");
		char lowercase[4] = "abc";
			printf("Characters of this category are %s\n\n",lowercase);
		int n = strlen(lowercase);
		int i, digit; 
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
    			permute(lowercase, 0, n-1, i);
			}
	}
	if(number==3){
		printf("Numbers are being tested.\n\n");
		char numbers[6] = {"12345"};
			printf("Characters of this category are %s\n\n",numbers);
		int n = strlen(numbers); 
    	int i, digit;
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(numbers, 0, n-1, i);
			}
	}
	if(number==4){
		printf("Signs are being tested.\n\n");
		char signs[4] = "*-?";
			printf("%Characters of this category are s\n\n",signs);
		int n = strlen(signs); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(signs, 0, n-1, i);
			}
	}
	if(number==5){
		printf("Uppercase and Lowercase are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,lowercase);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==6){
		printf("Uppercase and Numbers are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(numbers);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,numbers);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==7){
		printf("Uppercase and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(signs);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==8){
		printf("Lowercase and Numbers are being tested.\n\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(numbers);
			char c[arti];
				strcpy(c,lowercase);
				strcat(c,numbers);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==9){
		printf("Lowercase and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(signs);
			char c[arti];
				strcpy(c,lowercase);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==10){
		printf("Numbers and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(numbers) + sizeof(signs);
			char c[arti];
				strcpy(c,numbers);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==11){
		printf("Uppercase, Lowercase and Numbers are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase) + sizeof(numbers);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,lowercase);
				strcat(c,numbers);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==12){
		printf("Uppercase, Numbers and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,numbers);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==13){
		printf("Lowercase, Numbers and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
				strcpy(c,lowercase);
				strcat(c,numbers);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
		int n = strlen(c); 
    	int i, digit;	
			printf("Enter the number of digits you want to test:");
			scanf("%d", &digit);
			for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
			}
	}
	if(number==14){
		printf("Uppercase, Lowercase, Numbers and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase) + sizeof(numbers) + sizeof(signs);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,lowercase);
				strcat(c,numbers);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
			int n = strlen(c); 
    		int i, digit;
			printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				for(i=0;i<=digit;i++){
				permute(c, 0, n-1, i);
				}
	}
	return 0;
}
