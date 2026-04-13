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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        while(prev->next!=NULL && prev->next->next!=NULL){
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;
            ListNode* nn = second->next;
            prev->next = second;
            second->next=first;
            first->next=nn;
            prev=first;
        }
        return dummy->next;
    }
};