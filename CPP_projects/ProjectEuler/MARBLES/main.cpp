#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int main()
{
         double res;
         long long int j=1;
         long long int t,n,r,i;
         cin>>t;

         //cout<<FLOAT_MAX<<endl;

         while(t--)
         {
                res=1;
                cin>>n>>r;
                if(r<=n/2)
            {
                for(i=n-1,res=1;i>=(n-r+1);res*=i,i--);
                for(i=r-1;i>1;res/=i,i--);

                printf("%.0f\n",res);
            }
            else
            {
                for(i=n-1,res=1;i>=r;res*=i,i--);
                for(i=n-r;i>1;res/=i,i--);

                printf("%.0f\n",res);
        }
    }
}
