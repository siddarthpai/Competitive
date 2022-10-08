import re
def validate(str):
    regex = ("^(0|'+91')?[6-9]\d{9}$")
    p = re.compile(regex)
    if (str == None):
        return "Enter a number"
    if(re.search(p, str)):
        return "Valid"
    else:
        return "Invalid"
str1=input("Enter mobile number to validate:")
print(validate(str1))
