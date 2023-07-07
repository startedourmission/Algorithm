//순열 검사
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
bool solution(int arr[], size_t arr_len) {
    bool answer = true;
    
    int chk[100001] = {0, };
    
    for(int i=0; i<arr_len; ++i){
        if(arr[i] < 1 || arr[i] > arr_len){
            answer = false;
            break;
        }
        chk[arr[i]]++;
    }
    for(int i=1; i<arr_len; i++){
        printf("%d ", chk[i]);
        if(chk[i] != 1){
            answer = false;
            break;
        }
    }
    return answer;
}