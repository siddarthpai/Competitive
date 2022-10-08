def findMedian(num1,num2):
    num1.extend(num2)
    num1.sort()
    l = len(num1)
    x = l - 1;
    if (l % 2 != 0):
        median = num1[(int(x) + 1) / 2]
    else:
        median = (num1[int(x / 2)] + num1[int((x / 2)) + 1]) / 2
    return median
x=findMedian([1,2],[3,4])
print(x)
