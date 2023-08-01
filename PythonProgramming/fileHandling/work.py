import csv
import datetime as dt
with open('empData.csv', 'r') as f:
    lineR = enumerate(csv.reader(f))
    for i, row in lineR:
        if i > 0:
            fullname = row[1]
            try:
                fullname = fullname.split(',')
                firstName = fullname[0]
                lastName = fullname[1]
            except IndexError:
                print(f"row {i}, does not have a valid fullname")
                continue
            try:
                tithe = (10 / 100) * int(row[4])
                print(f"{tithe} is tithe")
            except ValueError:
                print(f"row {row} has an invalid value for salary")
                continue
            print(f"{firstName} is the firstname")
            print(f"{lastName} is the lastname")
