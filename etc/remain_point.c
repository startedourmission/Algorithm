//������ �� ��
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// v_row_len�� 2���� �迭 v�� ��(����) �����Դϴ�.
// v_col_len�� 2���� �迭 v�� ��(����) �����Դϴ�.
// v[i][j]�� v�� i��° ���� j��° ���� ����� ���� �ǹ��մϴ�.
int* solution(int **v, size_t v_row_len, size_t v_col_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(8);
    int x, y = 0;
    if(v[0][0] == v[1][0]){
        x = v[2][0];
    }
    else if(v[1][0] == v[2][0]){
        x = v[0][0];
    }else{
        x = v[1][0];
    }
    
    
    if(v[0][1] == v[1][1]){
        y = v[2][1];
    }
    else if(v[1][1] == v[2][1]){
        y = v[0][1];
    }else{
        y = v[1][1];
    }  
    answer[0] = x;
    answer[1] = y;
    
    return answer;
}