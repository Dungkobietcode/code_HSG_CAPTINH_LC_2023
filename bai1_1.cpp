#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    int n,x;
    cin>>n>>x;
    float gt=1;
    float S=1;
    for(int i=1;i<=n;i++)
    {
        float tmp=(gt*(2*i)*(2*i-1));
        S+=pow(x,2*i)/tmp;
        gt=tmp;
    }
    cout<<S;
    return 0;
}
