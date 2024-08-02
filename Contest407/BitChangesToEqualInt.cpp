#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minChanges(int n, int k) {
    if (n < k) {
        return -1;
    }
    std::string n_bin = std::bitset<32>(n).to_string();
    std::string k_bin = std::bitset<32>(k).to_string();

    n_bin.erase(0, n_bin.find_first_not_of('0'));
    k_bin.erase(0, k_bin.find_first_not_of('0'));
    
    if (k_bin.length() > n_bin.length()) {
        n_bin = std::string(k_bin.length() - n_bin.length(), '0') + n_bin;
    }
     if (n_bin.length() > k_bin.length()) {
        k_bin = std::string(n_bin.length() - k_bin.length(), '0') + k_bin;
    }

    int changes_needed = 0;
    for (size_t i = 0; i < n_bin.length(); ++i) {
        if (n_bin[i] == '1' && k_bin[i] == '0') {
            changes_needed += 1;
        } else if (n_bin[i] == '0' && k_bin[i] == '1') {
            return -1;
        }
    }

    return changes_needed;
    }
};