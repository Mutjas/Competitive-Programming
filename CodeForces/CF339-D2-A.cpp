/** Problem name: Helpful Maths
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-08
  */
  #include <iostream>
  #include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    unsigned tot=0,totOf1=0,totOf2=0,totOf3=0;
    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]=='1')
            ++totOf1;
        else if(s[i]=='2')
            ++totOf2;
        else
            ++totOf3;
    }
    tot=totOf1+totOf2+totOf3;
    while(totOf1--&&tot--)
    {
        cout<<1;
        if(tot)
            cout<<'+';
    }
    while(totOf2--&&tot--)
    {
        cout<<2;
        if(tot)
            cout<<'+';
    }
    while(totOf3--&&tot--)
    {
        cout<<3;
        if(tot)
            cout<<'+';
    }
    cout<<endl;

    return 0;
}