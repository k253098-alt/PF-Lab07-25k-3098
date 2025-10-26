#include<stdio.h>
int main(){
	int num;
	printf("Enter number of integers you want to add: \n ");
	scanf("%d" ,&num);
	int arr [num];
	int sum = 0;
	for( int i=0; i<num; i++){
		printf("Enter %d number: \n", i+1);
		scanf("%d" ,&arr[i]);
		sum += arr[i];
	}
	printf(" sum of numbers = %d", sum);
	return 0;
}
