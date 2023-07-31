//https://school.programmers.co.kr/learn/courses/30/lessons/12937?language=c

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(4);
    if(num%2==0) strcpy(answer, "Even");
    else strcpy(answer, "Odd");
    
    return answer;
}W