#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next = nullptr) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        ListNode* tail;
        int length = 1;
        for (tail = head; tail->next; tail = tail->next)
            ++length;
        tail->next = head;  
        const int t = length - k % length;
        for (int i = 0; i < t; ++i)
            tail = tail->next;
        ListNode* newHead = tail->next;
        tail->next = nullptr;
        return newHead;
    }
};
int main() {
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    int k = 2;
    Solution sol;
    ListNode* result = sol.rotateRight(head, k);

    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;  
    return 0;
}
