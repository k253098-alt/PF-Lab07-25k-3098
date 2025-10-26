#include <stdio.h>

int main() {
    int arr[10] = {3,1,0,2,5,4,9,8,7};
    int n, found = 0;

    printf("Enter the integer you want to find the index of: ");
    scanf("%d", &n);

    printf("Indexes of %d are: ", n);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == n) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("Not found");

    printf("\n");
    return 0;
}
