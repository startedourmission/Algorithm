//폰켓몬

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 1;
    sort(nums.begin(), nums.end());
    int tmp = nums[0];
    int len = nums.size();
    for(int i=0; i<len; ++i){
        if(answer == len/2) break;
        if(tmp != nums[i]){
            ++answer;
            tmp = nums[i];
        }
    }

    return answer;
}

//다른사람의 풀이 중 
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    unordered_set<int> s(nums.begin(), nums.end());

    return min(nums.size() / 2, s.size());
}