#!/usr/bin/env python

def threesum(a, t):
    d = set()
    for i in a:
        tup = (1, i)
        to_add = set()
        to_add.add(tup)
        for entry in d:
            if entry == tup:
                continue
            if entry[0] == 1:
                tup = (2, i+entry[1])
                to_add.add(tup)
            elif entry[0] == 2 and entry[1] + i == t:
                return True
        d = d.union(to_add)
    return False

print(threesum([1,3,5,7,9,10,11], 25))
