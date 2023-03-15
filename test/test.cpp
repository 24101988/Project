#include <iostream>
#include <vector>
#include <utility>
#include "../source/solution.hpp"

using namespace std;

int main() {
    vector <pair<string,bool>> tests = {
        {"aabb", true},
        {"ab", true},
        {"bba", false},
        {"bb", true},
        {"aa", true},
        {"ba", false}
    };
    for (auto test : tests){
        if(solution(test.first) != test.second){
            cerr << "Fail - incorrect result " << endl;
            return 1;
        }
    }
    cout << " OK " << endl;
    return 0;
}