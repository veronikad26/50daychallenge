#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long num = x;
        long rev = 0;
        while (x > 0) {
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }
        return rev == num;
    }
};
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Solution sol;
    if (sol.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
