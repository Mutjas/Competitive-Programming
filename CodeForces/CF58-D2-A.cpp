/** Problem name: Chat room
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-08
  */

  #include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool a=1;
    size_t sz=s.find('h');
    if(sz>=s.size())
        a=0;
    sz=s.find('e',sz+1);
    if(sz>=s.size())
        a=0;
    sz=s.find('l',sz+1);
    if(sz>=s.size())
        a=0;
    sz=s.find('l',sz+1);
    if(sz>=s.size())
        a=0;
    sz=s.find('o',sz+1);
    if(sz>=s.size())
        a=0;
    if(a)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}