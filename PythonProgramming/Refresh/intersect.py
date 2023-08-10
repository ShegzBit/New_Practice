_list = [1, 3, 5, 23, 43, 54, 38, 54, 9,30]
_list2 = [1, 2, 7, 54, 9, 30,72, 35]

def intersect(_list, _list2):
    elem = 0
    size = len(_list)
    _list3 = ([])
    i = 0
    while i < size:
        if _list[i] in _list2:
            _list3.append(_list[i])
        i += 1
    return _list3
print(intersect(_list, _list2))

