#include<bits/stdc++.h>
using namespace std;
long long a[5],d,d1,d2,ans;
int main(){
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+3+1);
    cin>>d;
    d1=a[2]-a[1];
    d2=a[3]-a[2];
    if(d1<d) ans+=d-d1;
    if(d2<d) ans+=d-d2;
    cout<<ans;
}
