#include <bits/stdc++.h>
using namespace std;
typedef long long L;
const double PI = acos(-1);

int test(){
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    int s,f;

    for (int i=0; i<n; i++){
        cin>>s>>f;
        v.push_back(make_pair(f,s));
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int cur = 0;
    for (int i=0; i<v.size(); i++){
        int next = v[i].second;
        if (next>=cur){
            cur = v[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
		while(t-->0){
			test();
		}

}
