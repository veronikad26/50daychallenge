#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next = nullptr) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p = nullptr;
        ListNode* q = nullptr;  
        for (ListNode* curr = head; curr != nullptr; curr = curr->next) {
            if (q != nullptr)
                q = q->next;
            if (--k == 0) {
                p = curr;
                q = head;
            }
        }
        swap(p->val, q->val);
        return head;
    }
};
int main() {
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    
    Solution sol;
    ListNode* result = sol.swapNodes(head, 2);

    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl; 
    return 0;
}
