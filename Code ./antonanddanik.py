n=int(input())
x=input()
x.upper()
a=0
d=0
for i in x:
    if i=='A':
        a+=1
    else:
        d+=1
if(a>d):
    print("Anton")
elif(a<d):
    print("Danik")
elif(a==d):
    print("Friendship")

