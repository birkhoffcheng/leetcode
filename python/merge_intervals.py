#!/usr/bin/env python

class Pair:
    def __init__(self, first, second):
        self.first = first
        self.second = second

def merge_intervals(v):
    if len(v) <= 1:
        return v
    result = [v[0]]
    last_index = 0
    for i in range(1, len(v)):
        if v[i].first > result[last_index].second:
            result.append(v[i])
            last_index += 1
        else:
            result[last_index].second = max(result[last_index].second, v[i].second)
    return result

intervals = [Pair(1,5), Pair(3,7), Pair(4,6), Pair(6,8), Pair(10,14), Pair(11,13), Pair(14,17), Pair(18,20)]
result = merge_intervals(intervals)
for i in result:
    print(i.first, i.second)
