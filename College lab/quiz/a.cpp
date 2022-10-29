#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,m,x,y,i,j,k;
    cin>>n;
    cin>>x;
    vector<std::vector<std::vector<int>>> v(n,std::vector<std::vector<int>>(n,std::vector<int> (n)));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                cin>>v[i][j][k];
    
    while(x--){
        int temp= 0;
        i=j=k=0;
        while(j<n){
            for(i=0;i<n;i++){
                temp+=v[i][j][i];
                v[i][j][i]=temp-v[i][j][i];
                temp-=v[i][j][i];
            }
            j++;
            if(j<n){
                for(i=n-1;i>=0;i--){
                temp+=v[i][j][i];
                v[i][j][i]=temp-v[i][j][i];
                temp-=v[i][j][i];
            }
            }
            j++;
        }
        v[0][0][0]=temp;
        i=j=k=0;
        while(j<n){
            for(i=0;i<n;i++){
                temp+=v[n-i-1][j][i];
                v[n-1-i][j][i]=temp-v[n-1-i][j][i];
                temp-=v[n-1-i][j][i];
            }
            j++;
            if(j<n){
                for(i=n-1;i>=0;i--){
                temp+=v[n-1-i][j][i];
                v[n-1-i][j][i]=temp-v[n-1-i][j][i];
                temp-=v[n-1-i][j][i];
            }
            }
            j++;
        }
        v[n-1][0][0]=temp;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cout<<v[i][j][k]<<" ";
            }
            // cout<<endl;
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
// cout<<t<<endl;
// ${2:is Single Test case?}cin>>t;
// cin>>t;
int n=t;
while(t--)
{
    //cout<<"Case #"<<n-t<<": ";
    solve();
    cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}