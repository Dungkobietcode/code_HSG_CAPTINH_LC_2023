#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    ll n,k=0;
    cin>>n;
    int r=sqrt(n);
    for (int i=1;i<=r;i++){
        if (n%i==0){
            k+=2;
        }
    }
    if(r*r==n){
        cout<<k-1;
        return 0;
    }
    cout<<k;
    return 0;
}
