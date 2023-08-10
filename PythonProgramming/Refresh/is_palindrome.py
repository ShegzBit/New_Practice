_str = input("Enter a word to know whether it's palindrome or not: ")
rev = []
_list = []

size = size2 = len(_str)
size -= 1
while size >= 0:
    rev += _str[size]
    size -= 1
new_str = "".join(rev)
if _str == new_str:
    print (f"{_str} is Palindrome")
else:
   print (f"{_str} is not Palindrome")

