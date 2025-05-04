#include <iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Solution s;
    int result=s.addDigits(num);
    cout << "The single digit result is: " << result << endl;
    return 0;
}
