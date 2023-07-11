//�����Ա�
#include <iostream>
#include <vector>
using namespace std;

int dp[100001][4] = {0, };
int solution(vector<vector<int> > land)
{
    int answer = 0;
    
    int N = land.size();
    for(int i = 0; i < 4; ++i){
        dp[0][i] = land[0][i];
    }
    
    for(int i = 1; i < N; ++i){
        for(int j = 0; j < 4; ++j){
            for(int k = 0; k < 4; ++k){
                if(j != k){
                    dp[i][j] = max(dp[i][j], land[i][j] + dp[i-1][k]);
                }
            }
        }
    }
    
    for(int i = 0; i < 4; ++i){
        answer = max(answer, dp[N-1][i]);
    }
    return answer;
}