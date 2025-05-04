#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();  
        for (int i = 0; i < nums.size(); ++i) {
            ans ^= i ^ nums[i];  // XOR with index and element
        }
        return ans;
    }
};
int main() {
    int n;
    cout << "Enter number of elements in the array (n): ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements (0 to n with one missing): ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    Solution s;
    int missing=s.missingNumber(nums);
    cout << "Missing number is: " << missing << endl;
    return 0;
}
