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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr = list1;
        ListNode* curr1 = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while(curr1 != NULL && curr!= NULL){
            ListNode* nextNode = curr->next;
            ListNode* nextNode1 = curr1->next;

            if(curr->val > curr1->val){
                tail->next = curr1;
                tail = curr1;
                curr1 = nextNode1;
            }
            else{
                tail->next = curr;
                tail = curr;
                curr = nextNode;
            }
        }
        if(curr != NULL) tail->next = curr;
        if(curr1 != NULL) tail->next = curr1;
        return dummy->next;
    }
};