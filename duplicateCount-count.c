#include<stdio.h>
int duplicate_element_count(int a[], int length);
int main(){
   int length;
   printf("Please Enter Array length  : ");
   scanf("%d", &length);
   int arr[length];
   printf("Please Enter Element : ");
   for(int i=0; i<length ; i++){
      printf("arr[%d] : ", i);
      scanf("%d", &arr[i]);
   }

   int result = duplicate_element_count( arr, length);
   printf("%d", result);
}

int duplicate_element_count(int arr[], int length){
     int duplicateCount=0;
     for(int i=0; i<length ; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i] == arr[j]){
               duplicateCount++;
               break;
            }
        }
     }
}