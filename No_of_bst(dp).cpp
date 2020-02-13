#include<bits/stdc++.h>
using namespace std;
int no_of_bst(int n)
{
    int a[n+1];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        int count1=0;
        for(int j=0;j<i;j++)
            count1+=(a[j]*a[i-j-1]);
        a[i]=count1;
    }
    return a[n];   
}
int main()
{
    int n;
    cin>>n;
    cout<<no_of_bst(n)<<endl;
}
