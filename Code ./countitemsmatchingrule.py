items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]
ruleKey = "color"
ruleValue = "silver"
c = 0
ruleKey.lower()
if ruleKey == 'type':
    for i in items:
        if i[0] == ruleValue:
            c += 1
if ruleKey == 'color':
    for i in items:
        print(i)
        if i[1] == ruleValue:
            c += 1
if ruleKey == 'name':
    for i in items:
        if i[2] == ruleValue:
            c += 1

print(c)