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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr = head;
        while (curr != NULL) {
            count++;
            curr = curr->next;
        }
        if(count == n) return head->next;
        curr= head;
        int size = count-n;
        for(int i = 0; i< size-1; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};