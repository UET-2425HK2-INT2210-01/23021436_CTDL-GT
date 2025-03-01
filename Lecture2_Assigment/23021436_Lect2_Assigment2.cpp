#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
public:
    LinkedList() : head(nullptr) {}
    
    void insert(int position, int value) 
    {
        Node* newNode = new Node(value);
        if (position == 0) 
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < position - 1; i++) 
        {
            temp = temp->next;
        }
        if (temp == nullptr) return;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void remove(int position) 
    {
        if (head == nullptr)
             return;
        if (position == 0) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp != nullptr && temp->next != nullptr && i < position - 1; i++)
         {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr)   
            return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    
    void printList() 
    {
        Node* temp = head;
        while (temp != nullptr) 
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

private:
    Node* head;
};

int main() 
{
    int n;
    cin >> n;
    LinkedList list;
    
    for (int i = 0; i < n; i++)
     {
        string operation;
        cin >> operation;
        if (operation == "insert") 
        {
            int pos, val;
            cin >> pos >> val;
            list.insert(pos, val);
        }
         else if (operation == "delete") 
        {
            int pos;
            cin >> pos;
            list.remove(pos);
        }
    }
    
    list.printList();
    return 0;
}
