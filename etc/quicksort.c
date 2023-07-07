#include<stdio.h>
#include<stdlib.h>

#define LEN (5)

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int gp(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j < r; ++j){
        if(arr[j] <= pivot){
            ++i;
            //swap(&arr[i], &arr[j]);
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    //swap(&arr[i+1], &arr[r]);
    int tmp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = tmp;
    return i+1;

}

void qs(int arr[], int l, int r){
    if(l < r){
        int p = gp(arr, l, r);
        qs(arr, l, p-1);
        qs(arr, p+1, r);
    }

}

//반환, arg 형식 고정.
//내림차순의 경우 a < b 일때 1, a > b 일때 -1을 반환
int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b) return 1;
    if(*(int*)a < *(int*)b) return -1;
    return 0;
}

int main(){
    int arr[LEN] = {4, 2, 3, 5, 1};

    //qs(arr, 0, LEN-1);
    
    //4번째 인자는 compare 함수를 만들어 그 포인터를 전달해야함.

    qsort(arr, LEN, sizeof(int), &compare);

    for(int i=0; i<LEN; ++i){
        printf("%d " ,arr[i]);
    }

    return 0;
}