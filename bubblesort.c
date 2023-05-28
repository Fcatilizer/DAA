#include <stdio.h>
void bubblesort(int a[], int first, int last){
    int i, j, temp;
    for(i=first; i<last; i++){
        for(j=first; j<last-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<last; i++){
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
    bubblesort(a, 0, n-1);
}