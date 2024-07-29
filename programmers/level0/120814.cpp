//https://school.programmers.co.kr/learn/courses/30/lessons/120814

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n/7;
    if(n%7 != 0) answer += 1;
    
    return answer;
}