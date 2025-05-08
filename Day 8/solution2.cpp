#include <iostream>
#include <string>
#include <numeric>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        return accumulate(columnTitle.begin(), columnTitle.end(), 0,
                          [](int acc, char c) { return acc * 26 + (c - 'A' + 1); });
    }
};
int main() {
    Solution sol;
    string columnTitle = "AB";
    int result = sol.titleToNumber(columnTitle);

    cout << result << endl; 
    return 0;
}
