#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next = nullptr) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode oddHead(0);
        ListNode evenHead(0);
        ListNode* odd = &oddHead;
        ListNode* even = &evenHead;
        for (int isOdd = 0; head; head = head->next)
            if (isOdd ^= 1) {
                odd->next = head;
                odd = odd->next;
            } else {
                even->next = head;
                even = even->next;
            }
        odd->next = evenHead.next;
        even->next = nullptr;
        return oddHead.next;
    }
};
//Sample working
int main() {
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    Solution sol;
    ListNode* result = sol.oddEvenList(head);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;  
