__author__ = 'Man Parvesh'

t=int(raw_input())
for xx in range(0,t):
    n=int(raw_input())
    ht=1
    for i in range(0,n):
        if i%2 == 0:
            ht *= 2
        else:
            ht += 1
    print ht