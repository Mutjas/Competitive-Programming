/** Problem name: String Task
  * Author: Ayyad Shenouda (MutjaS)
  * Date: 2016-06-04
  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    for(int i = 0; i < word.size(); ++i) {
        word[i] = tolower(word[i]);
        if(word[i] == 'a' || word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i') {
            word.erase(i, 1);
            i -= 1;
        }
    }
    for (int i = 0; i < word.size(); ++i) {
        word.insert(i,".");
        i += 1;
    }
    cout << word << endl;
    return 0;
}
