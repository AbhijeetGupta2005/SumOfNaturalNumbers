#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int fNRC(string s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s = "leetcode";
    int index = fNRC(s);

    if (index != -1) {
        cout << "The first non-repeating character is at index: " << index << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
