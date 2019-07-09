#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long n,k,i,j,num,p,ans,v1,v2,val,id,a[400000],que[400000];
int main(){
    cin>>n>>p>>k;
    id=1;
    for(i=1;i<=n;i++){
        cin>>num;
        num%=p;
        a[i]=num;
    }
    sort(a+1,a+n+1);
    id=1;
    for(i=1;i<=n;i++){
        m[id]=a[i];
        que[id]++;
        for(j=i+1;j<=n;j++){
            if(a[j]==a[j-1]) que[id]++;
            else break;
        }
        i=j-1;
        id++;
    }
    id--;
    for(i=1;i<=id;i++){
        for(j=i;j<=id;j++){
            v1=(m[i]+m[j])%p;
            v2=(m[i]*m[i]+m[j]*m[j])%p;
            val=(v1*v2)%p;
            if(val==k){
                if(i==j){
                    ans+=que[i]*(que[i]-1);
                }
                else ans+=que[i]*que[j];
            }
        }
    }
    cout<<ans;
}
