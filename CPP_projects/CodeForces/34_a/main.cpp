#include <bits/stdc++.h>
using namespace std;

double pos[11],vel[11],wt[11];

bool isEqual(double a,double b){
    double eps=1e-10;
    if(fabs(a-b)<eps){
        return true;
    }
    return false;
}

int main()
{
    int i,n;
    double t=0.0,T,dt=0.1;
    scanf("%d %lf",&n,&T);
    for(i=0;i<n;i++){
        cin>>pos[i]>>vel[i]>>wt[i];
    }
    while(t<=T){
        for(i=0;i<n;i++){
            for(int j=0; j<n;j++){
                if(i==j){
                    continue;
                }
                if(isEqual(pos[i],pos[j])){
                    cout<<"collision..................."<<pos[i]<<" "<<pos[j]<<"\n";

                    double v1 = (((wt[i]-wt[j])*vel[i])+2*wt[j]*vel[j])/(wt[i]+wt[j]);
                    double v2 = (((wt[j]-wt[i])*vel[j])+2*wt[i]*vel[i])/(wt[i]+wt[j]);
                    vel[i]=v1;
                    vel[j]=v2;
                }
            }
        }
        for(i=0;i<n;i++){
            pos[i]+=(vel[i]*dt);
//            cout<<pos[i]<<" ";
        }
  //      cout<<"\n";

        t = t+dt;
    }
    for(i=0;i<n;i++){
        printf("%.16lf\n",pos[i]);
    }
}
