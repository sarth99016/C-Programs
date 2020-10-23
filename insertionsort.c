
#include <stdio.h>

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int value=arr[i];
        int hole=i;
        while(hole>0&&arr[hole-1]>value){
            
            arr[hole]=arr[hole-1];
            
            hole=hole-1;
        }
        arr[hole]=value;
    }
}

int main()
{
    int arr[6]={22,3,56,4,12,0};
    insertionsort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
