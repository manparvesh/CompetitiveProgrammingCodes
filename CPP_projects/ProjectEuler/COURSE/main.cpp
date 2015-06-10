#include <bits/stdc++.h>
using namespace std;
map<double, vector<pair<double,double> > > Mp;

int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0; k<t; k++){
        double r,R,x,y;
        scanf("%lf %lf",&r,&R);
        int n;
        scanf("%d",&n);
        double ans = 1e10;
        for (int i=0; i<n; i++){
            scanf("%lf %lf",&x,&y);
            double slope = y/x;
            double dist = x*x + y*y;
            dist = sqrt(dist);
            double cand1 = R-dist;
            double cand2 = dist - r;
            double cand = max(cand1,cand2);
            if (cand<ans){
                ans = cand;
            }
        }
        printf("%.lf\n",ans);
    }
    return 0;
}
