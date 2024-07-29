// LV2. 올바른 괄호

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int cnt = 0;
    int s_len = strlen(s);
    if (s[0] == ')' || s[s_len-1] == '(')
        return false;
    
    for(int i =0; i < s_len; i++){
        if(s[i] == '(') cnt++;
        else cnt--;
        if(cnt < 0) return false;
    }
    if(cnt != 0) answer = false;  
    return answer;
}