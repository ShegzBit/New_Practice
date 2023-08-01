with open('file.txt', 'w+') as f:
    f.write("I love you\nI love you with all my life\n I will never fall out of love with you\n you're the love of my life \n Dear python\n\t\t\tferanmi")
    f.seek(0)
    print(f.read())