//https://school.programmers.co.kr/learn/courses/30/lessons/42840
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int a1 = 0,  a2 = 0, a3 = 0;
    
    for(int i=0; i<answers.size(); ++i){
        if(answers[i] == one[i%5]) ++a1;
        if(answers[i] == two[i%8]) ++a2;
        if(answers[i] == three[i%10]) ++a3;
    }
    if(a1 >= a2 && a1 >= a3) answer.push_back(1);
    
    if(a2 >= a1 && a2 >= a3) answer.push_back(2);
    
    if(a3 >= a1 && a3 >= a2) answer.push_back(3);
    
    return answer;
}


