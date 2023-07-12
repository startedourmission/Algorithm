//스티커 모으기

#include <iostream>
#include <vector>
using namespace std;


int dp[100001] = {0,};
int dp2[100001] = {0,};

int solution(vector<int> sticker)
{
    int answer =0;
    int N = sticker.size();

    if(N == 1){
        return sticker[0];
    }
    dp[0] = sticker[0];
    dp[1] = dp[0];
    for(int i = 2; i < N-1; ++i){
        dp[i] = max(dp[i-1], dp[i-2] + sticker[i]);
    }
    
    
    dp2[0] = 0;
    dp2[1] = sticker[1];
    for(int i = 2; i < N; ++i){
        dp2[i] = max(dp2[i-1], dp2[i-2] + sticker[i]);
    }
    answer = max(dp[N-2], dp2[N-1]);
    
    return answer;
}