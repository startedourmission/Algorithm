//https://school.programmers.co.kr/learn/courses/30/lessons/12973

#include <iostream>
#include<string>
using namespace std;

char stack[1000001];
int solution(string s)
{
    int answer = 0; 
    stack[0] = s[0];
    
    for(int i=1, j=1; j < s.size(); ++j){
        stack[i] = s[j];
        if(stack[i-1] == stack[i]){
            stack[i-1] = 0;
            stack[i] = 0;
            --i;
        }
        else ++i;
    }
    if(stack[0] == 0) answer = 1;
    return answer;
}