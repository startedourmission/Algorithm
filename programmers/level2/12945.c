// LV2. 피보나치 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int arr[2] = {0, 1};
    if(n == 2) return 1;
    for (int i = 2; i <= n; i++){
        answer = arr[0]%1234567 + arr[1]%1234567;
        arr[0] = arr[1];
        arr[1] = answer;
    }
    answer %= 1234567;
    return answer;
}