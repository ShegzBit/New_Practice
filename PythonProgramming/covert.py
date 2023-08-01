
from datetime import datetime as dt
myStr = input("Enter time to display: ")
myDate = dt.strptime(myStr, "%d/%m/%Y")
print(f"{myDate: %a, %d, %b, %Y}")
