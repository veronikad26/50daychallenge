#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};
    vector<int> result = sol.plusOne(digits);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;  
    return 0;
}
