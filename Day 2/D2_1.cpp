#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           
            fast = fast->next->next;     
        }
        return slow;
    }
};
ListNode* createLinkedList(int n) {
    if (n == 0) return nullptr;
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* current = head;
    for (int i = 1; i < n; ++i) {
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }
    return head;
}
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    cout << "Enter the values of the linked list: ";
    ListNode* head = createLinkedList(n);

    cout << "Original linked list: ";
    printLinkedList(head);

    Solution sol;
    ListNode* middle = sol.middleNode(head);

    cout << "Middle node value: " << middle->val << endl;

    return 0;
}
