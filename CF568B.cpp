#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int i,n,cur,num1,num2,pre,k,j,f;
int main(){
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s1>>s2;
        f=0;
        k=0;
        for(j=0;j<s1.length()&&k<s2.length();j++){
            num1=1;
            num2=1;
            cur=s1[j];
            while(s1[j+1]==s1[j]){
                num1++;
                j++;
            }
            if(s2[k]==cur){
                while(s2[k+1]==s2[k]){
                    num2++;
                    k++;
                }
                if(num2<num1){
                    f=1;
                    break;
                }
            }
            else{
                f=1;
                break;
            }
            if(j==s1.length()-1&&k!=s2.length()-1){f=1;break;}
            if(j!=s1.length()-1&&k==s2.length()-1){f=1;break;}
            k++;
        }
        if(f==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
