#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next = nullptr) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        for (; head; head = head->next)
            if (head->val != val) {
                prev->next = head;
                prev = prev->next;
            }
        prev->next = nullptr;
        return dummy.next;
    }
};
// Sample working
int main() {
    // Example: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6, val = 6
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(6,
                  new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6)))))));

    int val = 6;
    Solution sol;
    ListNode* result = sol.removeElements(head, val);

    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl; 
    return 0;
}
