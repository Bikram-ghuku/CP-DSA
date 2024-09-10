// Online C compiler to run C program online
#include <stdio.h>

void merge(int arr[], int l, int m, int r){
    int l1 = m - l + 1;
    int l2 = r - m;
    int a1[l1], a2[l2];
    for(int i = 0; i < l1; i++) a1[i] = arr[l + i];
    for(int i = 0; i < l2; i++) a2[i] = arr[m + i + 1];
    int i = 0, j = 0, k = l;
    while(i < l1 && j < l2){
        if(a1[i] > a2[j]){
            arr[k] = a2[j];
            j++;
        }else{
            arr[k] = a1[i];
            i++;
        }
        k++;
    }
    
    while(i < l1){
        arr[k] = a1[i];
        i++;
        k++;
    }
    
    while(j < l2){
        arr[k] = a2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int arr[5] = {1, 5, 2, 2, 3};
    mergeSort(arr, 0, 5);
    for(int i = 0; i < 5; i++) printf("%d\t", arr[i]);
    return 0;
}



