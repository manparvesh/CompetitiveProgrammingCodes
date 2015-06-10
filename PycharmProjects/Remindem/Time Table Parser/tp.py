from __future__ import division
if __name__ == '__main__':
    n = int(raw_input())
    for _ in range(n):
        s=raw_input().split()
        a=int(s[0])
        b=int(s[1])
        print a//b, a%b