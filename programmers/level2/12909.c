// LV2. �ùٸ� ��ȣ

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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