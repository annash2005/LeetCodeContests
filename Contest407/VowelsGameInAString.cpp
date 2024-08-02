
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set> 

using namespace std;

class Solution {
public:
    bool doesAliceWin(string s) {
         std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int vowelCount = 0;
        for (char c : s) {
            if (vowels.count(c)) {
                vowelCount++;
            }
        }
        return vowelCount >= 1;
    }
   
};