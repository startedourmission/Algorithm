//https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pc = 0;
    int yc = 0;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == 'p' or s[i] == 'P') ++pc;
        if(s[i] == 'y' or s[i] == 'Y') ++yc;
    }
    if(pc != yc) answer = !answer; 
    return answer;
}