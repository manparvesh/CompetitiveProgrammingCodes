#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sc second
#define ft first

typedef long long ll;

/* lis() returns the length of the longest increasing subsequence in
    arr[] of size n */
int lis( int arr[], int n )
{
   int *lis, i, j, max = 0;
   lis = (int*) malloc ( sizeof( int ) * n );

   /* Initialize LIS values for all indexes */
   for ( i = 0; i < n; i++ )
      lis[i] = 1;

   /* Compute optimized LIS values in bottom up manner */
   for ( i = 1; i < n; i++ ){
      int mx = arr[0];
      for ( j = 0; j < i; j++ ){
         if ( arr[i] >= arr[j] && lis[i] < lis[j] + 1 && (arr[j+1]>=arr[j]) ){
            lis[i] = lis[j] + 1;
         }
      }
   }

   /* Pick maximum of all LIS values */
   for ( i = 0; i < n; i++ )
      if ( max < lis[i] )
         max = lis[i];

   /* Free memory to avoid memory leak */
   free( lis );

   return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    /*int n,m; // number of vertices of the tree and the maximum number of consecutive vertices with cats that is still ok for Kefa.
    cin>>n>>m;
    int x,y;
    bool cat[n+1];//cat or nah
    vector<int> v[n+1];
    for(int i=1;i<=n;i++) cin>>cat[i];
    for(int i=1;i<=n-1;i++){
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int temp = i, len=0;
        while(!cat[temp]){
            if()
        }
    }*/
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){ cin>>ar[i];}
    cout<<lis(ar, n)<<endl;
    return 0;
}
