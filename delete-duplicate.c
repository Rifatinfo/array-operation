#include<stdio.h>
int duplicate_element_count(int a[], int length);
int main(){
   int length;
   printf("Please Enter Array length  : ");
   scanf("%d", &length);
   int arr[length];
   printf("Please Enter Element : ");
   for(int i=0; i<length ; i++){
      printf("\n arr[%d] : ", i);
      scanf("%d", &arr[i]);
   }

   duplicate_element_count( arr, length);
}

int duplicate_element_count(int arr[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < length - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                length--; 
                j--; 
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}