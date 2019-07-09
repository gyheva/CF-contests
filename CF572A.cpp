#include<bits/stdc++.h>
using namespace std;
int n,sum;
char c[200];
int main(){
    cin>>n;
    scanf("%s",c+1);
    for(int i=1;i<=n;i++){
        sum+=c[i]-'0';
    }
    if(n%2==1) printf("1\n%s",c+1);
    else if(sum!=n/2) printf("1\n%s",c+1);
    else{
        printf("2\n%c %s",c[1],c+2);
    }
}
