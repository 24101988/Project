#include "solution.hpp"

bool solution(string s) {
    bool wasb = false;

    for(unsigned int i=0; i < s.size(); i++) {
        if(s[i] == 'b') {
            wasb = true;
        }
        if(s[i] == 'a' && wasb == true) {
            return false;
        }
    }
    return true;
}
