#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* curr = head;
        ListNode* slow = curr;
        ListNode* fast = curr;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                ListNode* slow1 = head;
                while(slow != slow1){
                    slow = slow->next;
                    slow1 = slow1->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};