#include <stdio.h>
void mergesort();
void merge();

int main(){
    int a[40], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n-1);
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

void mergesort(int a[], int first, int last){
    if(first < last){
        int mid = (first + last)/2;
        mergesort(a, first, mid);
        mergesort(a, mid+1, last);
        merge(a, first, mid, last);
    }
}

void merge(int a[], int first, int mid, int last){
    int b[50];
    int i = first, j = mid+1, k = first;
    while( i <=mid && j <= last){
        if(a[i] < a[j]){
            b[k++] = a[i++];
        }else{
            b[k++] = a[j++];
        }
    }
    if(i > mid){
        while(j <= last){
            b[k++] = a[j++];
        }
    }else{
        while(i <= mid){
            b[k++] = a[i++];
        }
    }
    for(i = first; i <= last; i++){
        a[i] = b[i];
    }
}