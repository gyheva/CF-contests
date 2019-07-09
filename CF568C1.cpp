#include<bits/stdc++.h>
using namespace std;
int n,m,i,s,ans,a[100],sum[100],aim;
priority_queue<int> que,temp;
int main(){
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        s=0;
        ans=0;
        sum[i]=sum[i-1]+a[i];
        aim=sum[i]-m;
        if(aim<=0) cout<<0<<" ";
        else{
            while(s<aim){
                s+=que.top();
                temp.push(que.top());
                que.pop();
                ans++;
            }
            while(!temp.empty()){
                que.push(temp.top());
                temp.pop();
            }
            cout<<ans<<" ";
        }
        que.push(a[i]);
    }
}
