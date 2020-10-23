// Selection Sort Problem 

#include<stdio.h>
void selectionsort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
       int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){
    int arr[]={1,3,4,12,54,23,98};
    selectionsort(arr,7);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
