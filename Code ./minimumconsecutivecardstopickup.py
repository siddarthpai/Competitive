l=list(eval(input()))
flag=0
flag1=0
for i in range(0,len(l)):
    for j in range(i+1, len(l)):
        if(l[i]==l[j]):
            flag = i
            flag1 = j
            k = l[flag:flag1 + 1]
            if (k!=[]):
                print(k)



