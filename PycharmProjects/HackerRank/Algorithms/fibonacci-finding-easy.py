__author__ = 'Man Parvesh'
t=int(raw_input())
for xx in range(0,t):
    s=raw_input().split()
    a=int(s[0])
    b=int(s[1])
    n=int(s[2])
    if n==0:
        print a
    elif n==1:
        print b
    else:
        n-=2
        ans=0
        for i in range(0,n):
            ans = a+b
            a=b
            b=ans
        print ans