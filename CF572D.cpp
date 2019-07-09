#include<bits/stdc++.h>
using namespace std;
int u,v,n,i,a[100001];
int main(){
    cin>>n;
    for(i=1;i<n;i++){
        cin>>u>>v;
        a[u]++;
        a[v]++;
    }
    for(i=1;i<=n;i++){
        if(a[i]==2){
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==n+1) cout<<"YES"<<endl;
}
