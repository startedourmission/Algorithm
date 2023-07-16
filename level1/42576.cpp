//완주하지 못한 선수

//시간초과
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int psize = participant.size();
    int csize = completion.size();
    
    for(int i=0; i<psize; ++i){
        for(int j=0; j<csize; ++j){
            if(participant[i] == completion[j]){
                participant[i] = "0";
                completion[j] = "0";
                break;
            }    
        }
    }
    for(int i=0; i<psize; ++i){
        if(participant[i] != "0"){
            answer = participant[i];
            break;  
        } 
    }
    
    return answer;
}

//정답
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    int i=0;
    for(; i<completion.size(); ++i){
        if(participant[i] != completion[i]){
            return participant[i];
        }
    }
    return participant[i];
}