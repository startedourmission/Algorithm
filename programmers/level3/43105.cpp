//https://school.programmers.co.kr/learn/courses/30/lessons/43105
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> dp;
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    dp.push_back(triangle[0]);
    int row = triangle.size();
    vector<int> tmp = {0};
    
    for(int i=1; i<row; ++i){
        tmp[0] = dp[i-1][0]+triangle[i][0];
        dp.push_back(tmp);
        for(int j=1; j<triangle[i].size(); ++j){
            if(j == 0) 
                dp[i].push_back(dp[i-1][j]+triangle[i][j]);
            else if(j == triangle[i].size()-1) 
                dp[i].push_back(dp[i-1][j-1] + triangle[i][j]);
            else 
                dp[i].push_back(max(dp[i-1][j-1] + triangle[i][j], dp[i-1][j] + triangle[i][j]));
        }    
     }
    
    for(int i=0; i<row; ++i){
        answer = max(dp[row-1][i], answer);
    }
    
    return answer;
}
