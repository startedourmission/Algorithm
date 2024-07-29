//숫자의 표현

//1. n을 연속한 자연수로 표현할 수 있는 방법의 수 = n의 홀수인 약수의 수

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; ++i){
        if(n%i == 0 && i%2 == 1) ++answer;
    }
    return answer;
}

//2. 완전탐색
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(int i=1; i<=n; ++i){
        int sum=0;
        for(int j=i; j<n; ++j){
            sum+=j;
            if(sum == n){
                ++answer;
                break;
            }
            if(sum > n) break;
        }
    }
    return answer;
}