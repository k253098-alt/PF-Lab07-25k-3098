#include <stdio.h>

int main() {
    int size;
    printf("Enter number of values you want to display:\n");
    scanf("%d", &size);

    int arr[size];
    int found = 0; 

    
    for (int i = 0; i < size; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The numbers entered more than once are:\n");

  
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
              
                break; 
            }
        }
    }



    return 0;
}

