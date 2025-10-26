#include<stdio.h>
int main(){

	int arr1[5] = {5,6,2,8,4};
	int arr2[5] = {6,9,7,8,6};
	int arr3[10];
	
	for(int i=0; i<5; i++){
		arr3[i] = arr1[i];
		
	}
	
		for(int j=0; j<5; j++){
			int a = 5;
		arr3[5 +j] = arr2[j];
		
		}
	printf("merged array :");
	
	for (int k =0; k<10; k++){
		printf("%d", arr3[k]);
	}
	printf("\n");
	
	return 0;
}