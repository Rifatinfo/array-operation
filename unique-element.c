#include<stdio.h>
int unique_element(int a[], int length);
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

   int result = unique_element( arr, length);
}

int unique_element(int arr[], int length){
     
     for(int i=0; i<length ; i++){
       int isUnique = 1;
        for(int j=0; j<length; j++){
            if(i != j && arr[i] == arr[j]){
               isUnique = 0;
               break;
            }
        }
        if(isUnique){
           printf("%d" , arr[i]);
        }
     }
     
}