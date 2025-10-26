#include<stdio.h>
int main(){
	
	char str[100],result[100] ;
	int i,j =0;
	printf("Enter a string : ");
	scanf("%[^\n]",str);
	for (i=0; str[i] != '\0'; i++){
		if(!(str[i] >='0' && str[i]<='9')){
			result[j++] = str[i];
			
		}
	}
	result[j] = '\0';
	
	printf("string without numeric characters is : %s\n", result);

	
	return 0;
}
