// Nguyễn Minh Tú - 5502 - 732833
//Bài tập 1: Đảo ngược một danh sách liên kết đơn

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node* prepend(Node* head, int data) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    Node* new_node = new Node(data);
    new_node->next = head;

    head = new_node;

    return head;
    /*****************/
}

// print the list content on a line
void print(Node* head) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    Node *tmp = head;
    while(tmp != NULL){
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    cout << endl;
    /*****************/
}

// return the new head of the reversed list
Node* reverse(Node* head) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    Node* current = head->next;
    Node* prev = head; prev->next = NULL;
    Node* next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;

    return head;
    /*****************/
}

int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i){
        cin >> u;
        head = prepend(head, u);
    }

    cout << "Original list: ";
    print(head);

    head = reverse(head);

    cout << "Reversed list: ";
    print(head);

    return 0;
}

// Nguyễn Minh Tú - 5502 - 732833