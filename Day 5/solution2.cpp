#include <iostream>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        long a = 1;
        long b = num;
        while (a < b) {
            long m = (a + b) / 2;
            if (m >= num / m)
                b = m;
            else
                a = m + 1;
        }
        return a * a == num;
    }
};
int main() {
    Solution sol;
    int num = 16;
    cout << (sol.isPerfectSquare(num) ? "True" : "False") << endl;  

    return 0;
}
