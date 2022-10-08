def twosum(x,target):
    for i in range(0, len(x)):
        for j in range(i + 1, len(x)):
            if (x[i] + x[j] == target):
                print([i, j])



