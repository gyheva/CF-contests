
#include<bits/stdc++.h>

using namespace std;

long long n,u,a[2000010],sum,avg,mini,i,j,ans;

int main(){

    cin>>n;

    for(i=1;i<=n;i++){

        cin>>a[i];

        sum+=a[i];

    }

    for(i=n+1;i<=n+n;i++) a[i]=a[i-n];

    avg=sum/n;

    mini=1e17;

    for(i=1;i<=n;i++){

        sum=0;

        ans=0;

        for(j=i;j<=i+n-1;j++){

            sum+=a[j];

            ans+=abs(sum-avg*(j-i+1));

        }

        mini=min(ans,mini);

    }

    cout<<mini;

}
