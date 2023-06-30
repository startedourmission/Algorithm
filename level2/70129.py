# LV2. 이진 변환 반복하기

def solution(s):
    s_list = list(s)
    removed_zeros = 0
    binary_count = 0
    while True :
        if s_list == ['1'] : break
        else :
            removed_zeros += s_list.count('0')
            s_list = [s_char for s_char in s_list if s_char != '0']
            len_s = len(s_list)
            s_list = list(str(bin(len_s)))[2:]
            binary_count += 1
        
            
    answer = list()
    answer.append(binary_count)
    answer.append(removed_zeros)
    return answer