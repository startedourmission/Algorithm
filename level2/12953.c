// LV2. N���� �ּҰ����

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    for(int i = 0; i < arr_len-1; i++){
        answer = arr[i]*arr[i+1];
        while(arr[i+1]!=0){
            
            int tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp % arr[i+1];
        }
    //arr[i+1]=arr[i];
    answer=answer/arr[i];
    arr[i+1]=answer;
    }
    answer = arr[arr_len-1];
    return answer;
}