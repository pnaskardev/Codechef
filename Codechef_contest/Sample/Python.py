
inf=open('in-4.in','w')
outf=open("out-4.out",'w')

import random

t=10
inf.write(str(t)+'\n')
for _ in range(t):
    digits=random.randint(10**6,10**6)
    one=str(random.randint(0,9))
    two=str(random.randint(0,9))
    n=''
    for i in range(digits):
        n+=random.choice([one,two])
    inf.write(n+'\n')
    #print(n, one, two)
    
    if one==two:
        outf.write(str(0)+'\n')
        continue

    flagOne=0
    countOne=0
    flagTwo=0
    countTwo=0

    for i in n:
        if i==two:
            flagTwo=1
        if i==one and flagTwo:
            flagTwo=0
            countTwo+=1
        if i==one:
            flagOne=1
        if i==two and flagOne:
            flagOne=0
            countOne+=1
    
    if flagOne:
        countOne+=1
    if flagTwo:
        countTwo+=1
    outf.write(str(min(countOne,countTwo))+'\n')
inf.close()
outf.close()