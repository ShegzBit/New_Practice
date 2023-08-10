_list = [1, 3, 5, 23, 43, 54, 38, 54, 9,30]

def largest_in_list(_list):
    elem = 0
    size = len(_list)
    i = 0
    while i < size:
        if elem < _list[i]:
            elem = _list[i]
        i += 1
    return elem

print(largest_in_list(_list))

