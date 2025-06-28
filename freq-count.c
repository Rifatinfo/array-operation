#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    
    
    printf("How many numbers? ");
    scanf("%d", &n);

    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("\nFrequencies:\n");
    for(i = 0; i < n; i++) {
        int count = 1;
        int alreadyCounted = 0;

        
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if(alreadyCounted == 0) {
            
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            printf("%d appears %d time(s)\n", arr[i], count);
        }
    }

    return 0;
}
