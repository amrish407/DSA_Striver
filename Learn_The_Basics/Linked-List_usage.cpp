#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {} //This line defines a constructor for the ListNode structure. 
                //A constructor is a special member function that initializes objects of a class or structure.
};

int doesNodeExist(ListNode* head, int K) {
    ListNode* current = head;

    // Traverse the linked list
    while (current != nullptr) {
        // If current node's value matches K, return 1
        if (current->val == K) {
            return 1;
        }
        // Move to the next node
        current = current->next;
    }

    // If no node with value K is found, return 0
    return 0;
}

int main() {
    // Example linked list: 1 -> 3 -> 5 -> 7 -> 9
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(5);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(9);

    // Check if node with value 5 exists
    int K = 5;
    cout << "Does node with value " << K << " exist? " << doesNodeExist(head, K) << endl;

    // Check if node with value 2 exists
    K = 2;
    cout << "Does node with value " << K << " exist? " << doesNodeExist(head, K) << endl;

    return 0;
}
