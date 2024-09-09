// Online C compiler to run C program online
#include <stdio.h>

int sum(int a[],int b);


int main() {
   
   int arr[] = {1,2,3,4,5};
   
   int size = sizeof(arr) / sizeof(arr[0]);
   
   int total = sum(arr,size);
   
   printf("total sum of array num is %d : ",total);
   

    return 0;
}

int sum(int a[], int b){
    
    int sum =0;
    
    for (int i =0; i <b; i++){
       
       sum+=a[i] ;
        
    }
    
    
    return sum;
}