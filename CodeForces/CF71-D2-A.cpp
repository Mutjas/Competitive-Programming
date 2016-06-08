/** Problem name: Way Too Long Words
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-04
  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    string word;
    while(numberOfTestCases > 0) {
        cin >> word;
        int wordSize = word.size();
        if (wordSize <= 10) {
            cout << word << endl;
        } else {
            cout << word[0] << wordSize - 2 << word[wordSize - 1] << endl;
        }
        numberOfTestCases -= 1;
    }
    return 0;
}
