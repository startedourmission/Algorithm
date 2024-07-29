//신고 결과 받기
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int> map;
    unordered_map<string, vector<string>> id_rep;
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    for(int i=0; i< report.size(); ++i){
        vector<string> tmps;
        string tmp;
        stringstream ss(report[i]);
        while(getline(ss, tmp, ' ')){
            tmps.push_back(tmp);
        }
        ++map[tmps[1]];
        id_rep[tmps[0]].push_back(tmps[1]);
    }
    
    for(int i = 0; i<id_list.size(); ++i){
        answer.push_back(0);
        for(int j=0; j<id_rep[id_list[i]].size(); ++j){
            if(map[id_rep[id_list[i]][j]] >= k){
                ++answer[i];
            } 
        }
    }
    return answer;
}