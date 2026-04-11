#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

int solve(Node* head) {
    int count = 0;
    int sum = 0;
    int maximum = INT_MIN;
    bool exist = false;
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == 30) return true;
        count++;
        sum += curr->data;
        maximum = max(maximum,curr->data);
        curr=curr->next;
    }
    return exist;
}
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr!=NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int middle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast!=NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {
    // hardcoded list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "List: "; printList(head);
    cout << "Middle:  " << middle(head) << "\n";
    head = reverse(head);
    cout << "Reversed LL: "; printList(head);
    return 0;
}