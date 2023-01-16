#include<bits/stdc++.h>
using namespace std;
vector<int>enen_genarator(vector<int>a1)
{
    vector<int>ev;
    for(int i=0; i<a1.size(); i++)
    {
        if( a1[i]%2==0)
        {
            ev.push_back(a1[i]);
        }
    }
    return ev;
}
int main()
{
    vector<int>a= {1,2,4,5,6,7};
    vector<int>even=enen_genarator(a);
    for(int i=0; i<even.size(); i++)
    {
        cout<<even[i]<<" ";
    }
    return 0;
}
