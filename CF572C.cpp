#include<bits/stdc++.h>
using namespace std;
int n,i,q,cur,sum[100001],a[100001],l,r;
int main(){
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];
    cin>>q;
    for(i=1;i<=q;i++){
        cin>>l>>r;
        cur=sum[r]-sum[l-1];
        cout<<cur/10<<endl;
    }
}
