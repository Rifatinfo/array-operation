#include<stdio.h>
int main(){
    int binary_search(int arr[20], int n, int s_data );
    int arr[20], n, i, s_data ;
   
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n Searching Element Number : ");
    scanf("%d", &s_data);
    int result = binary_search(arr,  n, s_data );
    if (result == -1) {
        printf("\nElement not found in the array.\n");
    } else {
        printf("\nElement found at index %d (position %d).\n", result, result + 1);
    }
}

int binary_search(int arr[20], int n, int s_data ){
    int l, r, mid;
    l=0;
    r=n-1;
    while (l<=r)
    {
       mid = (l+r)/2;
       if(s_data == arr[mid]){
          return mid;
       }
       else if(s_data > arr[mid]){
          l=mid+1;
       }
       else{
        r=mid-1;
       }
       
    }
    return -1;
}