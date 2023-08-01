import csv

with open('empData.csv', 'r') as f:
    readL = enumerate(csv.reader(f))
    for e, r in readL:
        print(e, r)
