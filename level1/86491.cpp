//https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w, h = 0;
    for(int i=0; i<sizes.size(); ++i){
        w = max(w, max(sizes[i][0], sizes[i][1]));
        h = max(h, min(sizes[i][0], sizes[i][1]));
        
    }
    return w*h;
}