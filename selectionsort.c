#include <stdio.h>
void selectionsort(int a[], int n){
    int i, j, temp, min;
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

void main(){
    int a[40], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    selectionsort(a, n);
}