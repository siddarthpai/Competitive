s=input('Enter a string')

def ispal(s):
    if(len(s)!=1):
        return s==s[::-1]
x=''
n=''
for i in range(0,len(s)):
    for j in range(i+1,len(s)):
        if(ispal(s[i:j])):
            n=s[i:j]

print("Longest pallandromic substring=",n);
