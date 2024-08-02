#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int maxOperations(string s) {
        int count = 0;
        int zero = 0;
        bool group = false;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s.at(i) == '1'){
                count+=zero;
                group = false;
            }
            if((s.at(i) == '0') && (group == false)){
                zero++;
                group = true;
            }
        }
        return count;
    }
};