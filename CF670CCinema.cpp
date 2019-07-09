#include<bits/stdc++.h>
using namespace std;
int n,k,i,lan,M,maxa,maxs,id,a[200010],au[200010],sub[200010];
map<int,int> m;
int main(){
    cin>>n;
    k=1;
    for(i=1;i<=n;i++){
        cin>>lan;
        if(m[lan]==0){
            m[lan]=k;
            a[k]=1;
            k++;
        }
        else a[m[lan]]++;
    }
    cin>>M;
    maxa=-1;
    maxs=-1;
    for(i=1;i<=M;i++) cin>>au[i];
    for(i=1;i<=M;i++) cin>>sub[i];
    for(i=1;i<=M;i++){
        if((a[m[au[i]]]>maxa)||(a[m[au[i]]]==maxa&&a[m[sub[i]]]>maxs)){
            maxa=a[m[au[i]]];
            maxs=a[m[sub[i]]];
            id=i;
        }
    }
    cout<<id;
}
