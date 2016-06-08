/** Problem name: Petya and Strings
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-04
  */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); ++i) {
        if (tolower(s1[i]) < tolower(s2[i])) {
            cout << -1 << endl;
            return 0;
        } else if (tolower(s1[i]) > tolower(s2[i])) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
