//https://school.programmers.co.kr/learn/courses/30/lessons/42898
#include <string>
#include <vector>

using namespace std;

int dp[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    dp[1][1] = 1;
    for(int i=0; i<puddles.size(); ++i){
        dp[puddles[i][0]][puddles[i][1]] = -1;
    }
    
    for(int i=1; i<=m; ++i){
        for(int j=1; j<=n; ++j){
            if(dp[i][j] < 0){
                dp[i][j] = 0;
                continue;
            }            
            dp[i][j] += (dp[i-1][j] + dp[i][j-1]) % 1000000007;
        }
    }
    
    return dp[m][n];
}