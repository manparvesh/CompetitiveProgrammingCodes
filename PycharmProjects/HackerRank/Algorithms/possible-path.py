__author__ = 'Man Parvesh'
import fractions,sys

if __name__ == '__name__':
    t=int(raw_input())
    for _ in xrange(t):
        a,b,x,y = list(map(int, sys.stdin.readline().split()))

        g1, g2 = fractions.gcd(a,b), fractions.gcd(x,y)
        print('YES' if (x % g1 == 0 and y % g1 == 0 and a % g2 == 0 and b % g2 == 0) else 'NO')