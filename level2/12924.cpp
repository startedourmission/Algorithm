//������ ǥ��

//1. n�� ������ �ڿ����� ǥ���� �� �ִ� ����� �� = n�� Ȧ���� ����� ��

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

//2. ����Ž��
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