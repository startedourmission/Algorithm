//https://school.programmers.co.kr/learn/courses/30/lessons/120889

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 1;
    int max = sides[0];
    int sum = 0;
    for(auto k : sides){
        sum += k;
        if(max <= k) max = k;
    }
    sum -= max;
    if(sum <= max) answer = 2;
    return answer;
}