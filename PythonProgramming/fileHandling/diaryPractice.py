def write():
    with open('diary.txt', 'a') as f:
        start = input("Hey there, it's me your diary. What would you like to tell me about???\n")
        f.write(start + '\n')
def read():
    with open('diary.txt', 'r') as f:
        for oneLine in f.readlines():
            print(oneLine, end = '')

if __name__ == "__main__":
    print("Hey pal, do you want to share some memories or live through some of them again")
    start = input("If you want to remember type 'r' if you want to share some memory type 'r'")
    while(1):
        if start == 'r':
            read()
            break
        elif start == 'w':
            write()
            break
        else:
            print('Friendy, I see what you did there you choose a wrong option to trick me \n But sorry\
                   write now I\'m not in the mode for jokes. Give me this gist fast I\'m curious')
