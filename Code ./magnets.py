n=int(input())
a=[]
c=0
for i in range(n):
    x=input()
    a.append(x)
for i in range(0,len(a)):
    if(i!=len(a)-1):
        if(a[i]!=a[i+1]):
            c+=1
print(c+1)