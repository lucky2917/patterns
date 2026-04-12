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
    ListNode* middle(ListNode* head) {
        ListNode* curr = head;
        ListNode* slow = curr;
        ListNode* fast = curr;
        while(fast->next !=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* prev=slow->next;
        slow->next = NULL;
        return prev;
    }
    ListNode* reverse(ListNode* slow) {
        ListNode* prev = NULL;
        ListNode* curr = slow;
        while(curr!= NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* merge(ListNode* head, ListNode* prev) {
        ListNode* curr = head;
        ListNode* curr1 = prev;
        ListNode* nextNode = curr;
        ListNode* nextNode1 = curr1;
        while(curr!=NULL && curr1!=NULL){
            nextNode = curr->next;
            nextNode1 = curr1->next;
            curr->next = curr1;
            if(!nextNode) break;
            curr1->next = nextNode;
            curr = nextNode;
            curr1 = nextNode1;
        }
        
        return head;
    }
    void reorderList(ListNode* head) {
        if (!head||!head->next) return;
        ListNode* mid = middle(head);
        ListNode* rev = reverse(mid);
        merge(head,rev);
    }
};