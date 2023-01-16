#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
    }
    int x,y;
    cin>>x>>y;
    x=x-1;
    y=y-1;
    for(int i=x; i<=y; i++)
    {
        a.erase(a.begin()+1);
    }
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
