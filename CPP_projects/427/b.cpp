#include <bits/stdc++.h>
using namespace std;

// Let's just be lazy in typing "typedef"
#define td typedef

// Data types
td long long ll;
td unsigned long long int ull;
td long double ld;

// Containers
td vector<int> vi;
td vector<ll> vll;
td map<int, int> mii;
td map<ll, ll> mll;
td pair<int, int> pii;
td pair<ll, ll> pll;

// Container functions
#define pb push_back
#define mp make_pair
#define n1 first // for pairs
#define n2 second
#define fill(x,v) memset(x,v,sizeof(x))

// Important Constants
#define inf (int)1e9
#define eps (ld)1e-12
#define mod (ll)(1e9 + 7)
#define endl '\n'

// Traversing containers
#define tr(x,itr) for( typeof(x.begin()) itr  = x.begin(); itr!= x.end(); itr++) //Use iterator to iterate from beginning of a data structure to its end
#define all(x) x.begin(),x.end() // all the elements of a DS
#define rep(i,n) for(int i=0;i<n;i++) // increasing for loop from 0 to n
#define inc(i,a,b) for(int i=a;i<=b;i++) //increasing for loop from a to b
#define dec(i,a,b) for(int i=b;i>=a;i--) //decreasing for loop from b to a
#define in(a,b)( (b).find(a) != (b).end()) // check if a is inside b
#define cases ll t;cin>>t;while(t--) // declare testcases, take input and start while loop

#define abs(x) (x<0 ? -x : x)
#define sqr(x) (x*x)

// I/O declare n and take input
#define cint(n) int n;cin>>n

// I/O optimizations
#define io1 ios::sync_with_stdio(false)
#define io2 cin.tie(NULL)

// Important functions
ll gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    io1;
    io2;

    int k;
    string s;

    cin >> k >> s;
    int ar[10] = {0};
    long long sum = 0;

    for (int i = 0; i < s.length(); i++) {
        ar[s[i] - '0']++;
        sum += (int)(s[i] - '0');
    }

    int ans = 0;

    if (sum < k and 9 * s.length() >= k) {
        int i = 0;
        long long diff = k - sum;
        while (diff > 0 and i < 9) {
            if (ar[i] * (9 - i) < diff) {
                // isme nahi hoga
                diff -= ar[i] * (9 - i);
                ans += ar[i];
                i++;
            } else {
                //isi me ho jayega
                ans += ceil(diff * 1.0 / (9 - i));
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}