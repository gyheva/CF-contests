#include<bits/stdc++.h>
using namespace std;
int i,n,k,a[(int)1e5+1],b[(int)1e5+1],fi;
int main(){
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    k=1;
    for(i=1;i<=n;i+=2){
        b[k]=a[i];
        k++;
    }
    if(n%2==1) fi=n-1;
    else fi=n;
    for(i=fi;i>=2;i-=2){
        b[k]=a[i];
        k++;
    }
    if(a[n-2]+a[n-1]>a[n]){
        cout<<"YES\n";
        for(i=1;i<=n;i++) cout<<b[i]<<" ";
    }
    else cout<<"NO\n";
}
