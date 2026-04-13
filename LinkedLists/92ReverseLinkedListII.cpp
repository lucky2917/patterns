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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        int count=0;
        ListNode* a = head;
        ListNode* b = head;
        ListNode* trav1 = head;
        while(trav1!=NULL){
            count++;
            trav1=trav1->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* trav = head;
        ListNode* revEnd = NULL;
        for(int i = 1; i <= count;i++){
            if(i==left-1) a = trav;
            if(i==left){
                curr = trav;
                revEnd = trav;
            }
            if(i==right) b = trav;
            trav = trav->next;
        }
        prev=b->next;
        ListNode* nextNode = curr;
        if (b==NULL) return head;
        ListNode* bNext = b->next;
        prev = bNext;
        while(curr!=bNext){
            nextNode = curr->next;
            curr->next = prev;
            prev= curr;
            curr=nextNode;
        }
        if(left>1) a->next=prev;
        else head = prev;
        revEnd->next=curr;
        return head;
    }
};