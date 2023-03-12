#include <iostream>
#include "solution.hpp"

using namespace std;

int main() {
    string word;
    cout << "Type a word consisting only of letters a or b " << endl;
    cin >> word;
    bool result = solution(word);
    cout << "For word " << word << " result is " << result << endl; 
    return 0;
}
