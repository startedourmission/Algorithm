//https://school.programmers.co.kr/learn/courses/30/lessons/42842

#include <string>
#include <vector>

zzzusing namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x, y;
    x = yellow;
    y = 1;
    while(x>=y){
        if(x*y==yellow && (x+2)*2 + y*2 == brown) break;
        ++y;
        x = yellow/y;
    }
    answer.push_back(x+2);
    answer.push_back(y+2);
    return answer;
}