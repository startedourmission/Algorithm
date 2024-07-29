https://school.programmers.co.kr/learn/courses/30/lessons/12911

#include <string>
#include <vector>

using namespace std;

int getOne(int num){
    int cnt = 0;
    while(true){
        if(num <= 1){
            cnt += num;
            break;
        }
        cnt += num%2;
        num /= 2;
    }
    return cnt;
}

int solution(int n) {
    int answer = n+1;
    int target = getOne(n);
    while(true){
        if(getOne(answer) == target) break;
        else ++answer;
    }
    return answer;

}