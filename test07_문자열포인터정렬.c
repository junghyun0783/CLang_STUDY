#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char **xp, char **yp);
void printStringArray(char *arr[], int size);
void selectionSort(char *arr[], int n);

int main(){
    char *arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printStringArray(arr, n);

    selectionSort(arr, n);

    printStringArray(arr, n);

    return 0;
}

void printStringArray(char *arr[], int size){
    int i;
    for(i=0; i < size; i++)
    {
        puts(arr[i]);
    }
    printf("\n");
}

void swap(char **xp, char **yp){
    char *temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(char *arr[], int n){
    int i, j, min_idx;

    for(i =0; i < n-1; i++){
        min_idx = i;
        for(j=1+i; j<n; j++){
            if(strcmp(arr[j], arr[min_idx]) < 0)
                min_idx = j;
        }

        // Swap theh found minimum element with the first element
        // char * temp = arr[min_idx];
        // arr[min_idx] = arr[i];
        // arr[i] = temp;
        swap(&arr[i], &arr[min_idx]);

    }
}
