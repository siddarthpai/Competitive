word = input()
u = 0
l = 0
for i in word:
    if (i.isupper()):
        u += 1
    else:
        l += 1
result = ''
if u > l:
    for i in word:
        if i.islower():
            result += i.upper()
        else:
            result += i
elif u<l:
    for i in word:
        if i.isupper():
            result += i.lower()
        else:
            result +=i
else:
    result=word.lower()
print(result)
