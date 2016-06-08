/** Problem name: Twins
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-08
  */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned n,c=0,sum=0,tot=0;
    cin>>n;
    vector<unsigned>v(n);
    for(auto&a:v)
        cin>>a;
    sum=accumulate(v.begin(),v.end(),0);
    sort(v.rbegin(),v.rend());
    for(const auto &a:v)
    {
        ++c;
        sum-=a;
        tot+=a;
        if(tot>sum)
            break;
    }
    cout<<c<<endl;

    return 0;
}