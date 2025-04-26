#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 2, 1, 3, 1, 4, 2};

    unordered_map<int, int> hash; // can take vector or array depending on the requirement

    for (int i = 0; i < a.size(); i++) {
        hash[a[i]]++;
    }

    // Now you can query any element
    cout << "Frequency of 1: " << hash[1] << endl;
    cout << "Frequency of 2: " << hash[2] << endl;
    cout << "Frequency of 5: " << hash[5] << endl; // returns 0 if not present

    return 0;
}
