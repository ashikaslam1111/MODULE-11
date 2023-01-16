#include <bits/stdc++.h>
using namespace std;
bool isSubset(int a1[],int a2[],int m,int n)
{
    sort(a1,a1+m);
    sort(a2,a2+n);
    int i=0,j =0;
    while (i <m && j<n)
    {
        if (a1[i] < a2[j])
        {
            return false;
        }
        if (a1[i] == a2[j])
        {
            i++;
        }
        j++;
    }
    if (i <m)
    {
        return false;
    }
    return true;
}
int main()
{
    int m,n;
    cin>>m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin>>a[i];
    cin>>n;
    int a2[n];
    for (int i=0; i<n; i++)
    {
        cin >> a2[i];
    }
    if (isSubset(a, a2,m,n))

        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
