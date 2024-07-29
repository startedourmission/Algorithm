//��ȭ��ȣ ���

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int len = phone_book.size();
    sort(phone_book.begin(), phone_book.end());
    for(int i=1; i<len; ++i){
        if(phone_book[i-1] == phone_book[i].substr(0, phone_book[i-1].size())) answer = false;
    }
    
    return answer;
}

//unordered map ���

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    unordered_map<string, int> hash_map;
    for(int i = 0; i < phone_book.size(); i++)
        hash_map[phone_book[i]] = 1;
    
    for(int i = 0; i < phone_book.size(); i++) {
        string phone_number = "";
        for(int j = 0; j < phone_book[i].size(); j++) {
            phone_number += phone_book[i][j];
            if(hash_map[phone_number] && phone_number != phone_book[i])
                answer = false;
        }
    }
    return answer;
}