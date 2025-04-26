#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "aabC1#b";  // Example string

    vector<int> hash(256, 0); // Array of size 256 to handle all ASCII chars

    // Counting frequency of each character
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]]++;  // Directly use character as index (ASCII value)
    }

    // Querying frequency of characters
    cout << "Frequency of 'a': " << hash['a'] << endl;
    cout << "Frequency of 'b': " << hash['b'] << endl;
    cout << "Frequency of 'C': " << hash['C'] << endl;
    cout << "Frequency of '1': " << hash['1'] << endl;
    cout << "Frequency of '#': " << hash['#'] << endl;

    return 0;
}
