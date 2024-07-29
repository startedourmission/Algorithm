# ±¤¹° Ä³±â

def solution(picks, minerals):
    answer = 0

    # diamond, iron, stone picks count
    d_cnt, i_cnt, s_cnt = picks[0], picks[1], picks[2]
    picks_list = list()
    for d_c in range(d_cnt) :
        picks_list.append('d')
    for i_c in range(i_cnt) :
        picks_list.append('i')
    for s_c in range(s_cnt) :
        picks_list.append('s')
    
    minerals_split = list()
    cur_min_list = list()
    for idx, mineral in enumerate(minerals) :
        if mineral == "diamond" : cur_min = 25
        elif mineral == "iron" : cur_min = 5
        elif mineral == "stone" : cur_min = 1
        cur_min_list.append(cur_min)
        if len(cur_min_list) == 5 : 
            minerals_split.append(cur_min_list)
            cur_min_list = list()
        elif idx == len(minerals)-1  : 
            minerals_split.append(cur_min_list)
            
    minerals_split = minerals_split[:sum(picks)]
    minerals_split.sort(key = lambda x : sum(x), reverse=True)

    for idx, cur_min_list in enumerate(minerals_split) :
        if idx >= len(picks_list) : break
        if picks_list[idx] == 'd' : answer += sum([1 for m in cur_min_list])
        elif picks_list[idx] == 'i' : answer += sum([round(m/5+0.4) for m in cur_min_list])
        else : answer += sum(cur_min_list)
    return answer