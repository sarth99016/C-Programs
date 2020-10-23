

#include <stdio.h>
        
void bubble_sort(int a[],int n){
    /* Number of passes for array size n*/
    for(int k=0;k<n-1;k++){
    
    /*Code for pass will run from 0 to n-2 b'coz for last element their is no i+1 to compare
    We don't want any element out of the bound of the array*/
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
}
        
int main(){
    int arr[6]={12,2,3,14,5,0};
    bubble_sort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
