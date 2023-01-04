#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main(){
    int arr[] = {8,97,3,7,66};           // 배열
    int n = sizeof(arr) / sizeof(arr[0]);   // 배열 길이

    selectionSort(arr, n);

    return 0;
}

void swap(int *xp, int* yp){

}

void printArray(int arr[], int size){
    for(int k = 0; k < size; k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n){
    for(int i=0; i < n-1; i++){
        int min = arr[i];
        for(int j=i+1; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
    
    printArray(arr, n);
}