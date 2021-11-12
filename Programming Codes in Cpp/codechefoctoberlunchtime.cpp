#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int x;
        cin>>x;
        if(x%2==0)
        {
           cout<<((x/2)+1)<<" "<<((x/2)-1)<<endl;
        }
        else
        {
            cout<<(x/2)<<" "<<((x/2)+1)<<endl;
        }
    }
return 0;
}
