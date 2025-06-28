#include<stdio.h>
int main(){
    int arr[200], n, i, s_data , found = 0;
   
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n Searching Element Number : ");
    scanf("%d", &s_data);

    for(i=0; i<n; i++){
      if(arr[i] == s_data){
          printf("\n Data Found : %d", i);
          found++;
          break;
      }
    }
    if(found == 0){
       printf("\n Data Not Found");
    }
}