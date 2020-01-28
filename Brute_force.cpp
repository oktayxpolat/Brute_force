#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare (const void * a, const void * b); 
void permuteRecur (char *str, char* data, int last, int index) 
{ 
    char pass[] = "AxDc"; 
	int i, len = strlen(str); 
	int c=1;
    	for ( i=0; i<len; i++ ) { 
        	data[index] = str[i] ; 
        	c = strcmp(data,pass);
		if (c==0){
			printf("\nThe Password is: %s \n",data);
			break;
			} 
		else if(index == last){
			}
        else  
            permuteRecur (str, data, last, index+1); 
    }
}  
void permute(char *str,int digit) 
{ 
    int len = digit ; 
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ; 
    data[len] = '\0'; 
    qsort(str, len, sizeof(char), compare); 
    permuteRecur (str, data, len-1, 0); 
    free(data); 
} 
int compare (const void * a, const void * b) 
{ 
    return ( *(char *)a - *(char *)b ); 
} 
int main() {
	int number;
	char uppercase[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char lowercase[] = {"abcdefghijklmnopqrstuvwxyz"};	
	char numbers[] = {"0123456789"};
	char signs[] = {"*,.-?!'^#+$%_&/{}()[]=<>|"};
		printf("1:Uppercase\n2:Lowercase\n3:Numbers\n4:Signs\n5:Uppercase and Lowercase\n6:Uppercase and Numbers\n7:Uppercase and Signs\n8:Lowercase and Numbers\n9:Lowercase and Signs\n10:Numbers and Signs\n11:Uppercase, Lowercase and Numbers\n12:Uppercase, Numbers and Signs\n13:Lowercase, Numbers and Signs\n14:Uppercase, Lowercase, Numbers and Signs\n\n");
		printf("Enter the number of the category you want to test:");
		scanf("%d",&number);
	
	if(number==1){
		printf("Uppercase is being tested.\n\n");
			printf("Characters of this category are %s\n\n",uppercase);
			int digit;
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(uppercase,digit);
	}
	if(number==2){
		printf("Lowercase is being tested.\n\n");
			printf("Characters of this category are %s\n\n",lowercase);
			int digit; 
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(lowercase,digit);
	}
	if(number==3){
		printf("Numbers are being tested.\n\n");
			printf("Characters of this category are %s\n\n",numbers);
    		int digit;
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(numbers,digit);
	}
	if(number==4){
		printf("Signs are being tested.\n\n");
			printf("%Characters of this category are s\n\n",signs);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(signs,digit);
	}
	if(number==5){
		printf("Uppercase and Lowercase are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(lowercase);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,lowercase);
					printf("Characters of this category are %s\n\n",c);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	if(number==6){
		printf("Uppercase and Numbers are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(numbers);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,numbers);
					printf("Characters of this category are %s\n\n",c); 
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	if(number==7){
		printf("Uppercase and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(uppercase) + sizeof(signs);
			char c[arti];
				strcpy(c,uppercase);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	if(number==8){
		printf("Lowercase and Numbers are being tested.\n\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(numbers);
			char c[arti];
				strcpy(c,lowercase);
				strcat(c,numbers);
					printf("Characters of this category are %s\n\n",c);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	if(number==9){
		printf("Lowercase and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(lowercase) + sizeof(signs);
			char c[arti];
				strcpy(c,lowercase);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	if(number==10){
		printf("Numbers and Signs are being tested.\n\n");
		int arti;
			arti= sizeof(numbers) + sizeof(signs);
			char c[arti];
				strcpy(c,numbers);
				strcat(c,signs);
					printf("Characters of this category are %s\n\n",c);
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
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
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
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
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
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
    		int digit;	
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
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
    		int digit;
				printf("Enter the number of digits you want to test:");
				scanf("%d", &digit);
				permute(c,digit);
	}
	return 0;
}
