#include <stdio.h>

int main() {
	int number;
	char uppercase[]="ABC";
	char lowercase[] = "abc";	
	int numbers[] = {1,2,3,4,5};
	char signs[] = "*-?";
	printf("1:Uppercase\n2:Lowercase\n3:Numers\n4:Signs\n5:Uppercase and Lowercase\n6:Uppercase and Numbers\n7:Uppercase and Signs\n8:Lowercase and Numbers\n9:Lowercase and Signs\n10:Numbers and Signs\n11:Uppercase, Lowercase and Numbers\n12:Uppercase, Numbers and Signs\n13:Lowercase, Numbers and Signs\n14:Uppercase, Lowercase, Numbers and Signs\n\n");
	printf("Enter the number of the category you want to test:");
	scanf("%d",&number);
	
	if(number==1){
	printf("Uppercase is being tested.");
}
	if(number==2){
	printf("Lowercase is being tested.");
}
	if(number==3){
	printf("Numbers are being tested.");
}
	if(number==4){
	printf("Signs are being tested.");
}
	if(number==5){
	printf("Uppercase and Lowercase are being tested.");
}
	if(number==6){
	printf("Uppercase and Numbers are being tested.");
}
	if(number==7){
	printf("Uppercase and Signs are being tested.");
}
	if(number==8){
	printf("Lowercase and Numbers are being tested.");
}
	if(number==9){
	printf("Lowercase and Signs are being tested.");
}
	if(number==10){
	printf("Numbers and Signs are being tested.");
}
	if(number==11){
	printf("Uppercase, Lowercase and Numbers are being tested.");
}
	if(number==12){
	printf("Uppercase, Numbers and Signs are being tested.");
}
	if(number==13){
	printf("Lowercase, Numbers and Signs are being tested.");
}
	if(number==14){
	printf("Uppercase, Lowercase, Numbers and Signs are being tested.\n");
}
int i,j;
	for(i=0,j=0;i<3 && j<3;i++,j++){
		printf("%c%c",uppercase[i],lowercase[j]);
	}
	return 0;
}
