// LV2. 최솟값 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    for(int i=0; i<A_len-1; i++){
        int A_idxmin = i;
        int B_idxmin = i;
        for(int j=i+1; j<A_len; j++){
            if(A[A_idxmin] > A[j]) A_idxmin = j;
            if(B[B_idxmin] < B[j]) B_idxmin = j;
        }    
        int tmp = A[A_idxmin];
        A[A_idxmin] = A[i];
        A[i] = tmp;
        tmp = B[B_idxmin];
        B[B_idxmin] = B[i];
        B[i] = tmp;
        
        answer += A[i] * B[i];
    }
    answer += A[A_len-1] * B[A_len-1];
    return answer;
}