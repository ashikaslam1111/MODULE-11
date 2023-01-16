#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int low=0;
    int high=n-1;
    int flag=0;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
        {
            flag++;
            break;
        }
        else if(k>a[mid])low=mid+1;
        else if(k<a[mid])high=mid-1;
    }
    if(a[mid+1]==k||a[mid-1]==k)flag++;
    if(flag==2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
