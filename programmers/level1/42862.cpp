//https://school.programmers.co.kr/learn/courses/30/lessons/42862
#include <string>
#include <vector>
c
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> stu(n+2, 1); 
    for(auto i : lost){
        --stu[i];
    }
    for(auto i : reserve){
        ++stu[i];
    }
    for(int i=1; i<stu.size()-1; ++i){
        if(stu[i] == 0){
            if(stu[i-1] >= 2){
                --stu[i-1];
                ++stu[i];
            }
            else if(stu[i+1] >= 2){
                --stu[i+1];
                ++stu[i];
            }
        }
        
        if(stu[i] >= 1) ++answer;
    }
    return answer;
}