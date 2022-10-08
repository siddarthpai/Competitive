#x=int(input("Enter a number"))
x=1994
if(x<3000):
    n = ''
    y=[1000,500,100,50,10,5]
    z=['M','D','C','L','X','V','I']
    for i in range(0,len(y)):
        rem=x//y[i]
        print(z[i]*rem)
        x=x%y[i]

    print(n)


