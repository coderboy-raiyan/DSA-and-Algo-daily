#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

class SinglyList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void insert_head(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        };
        newNode->next = head;
        head = newNode;
    }
    void insert_at_position(int pos, int val)
    {
        if (pos == 0)
        {
            insert_head(val);
            return;
        }
        if (pos == sz)
        {
            insert_tail(val);
            return;
        };
        if (pos > sz)
        {
            cout << "Position must be in limit of : " << sz << endl;
            return;
        }
        Node *lead = leader(pos);
        sz++;
        Node *newNode = new Node(val);
        newNode->next = lead->next;
        lead->next = newNode;
    };

    void insert_tail(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void delete_head()
    {
        sz--;
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
    };
    void delete_tail()
    {
        sz--;
        Node *temp = head;
        if (temp->next == NULL)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        while (temp != NULL && temp->next->next != NULL)
        {
            temp = temp->next;
        };
        Node *delNode = tail;
        temp->next = NULL;
        tail = temp;
        delete delNode;
    };

    void delete_at_position(int pos)
    {
        if (pos == 0)
        {
            delete_head();
            return;
        }
        if (pos == sz)
        {
            delete_tail();
            return;
        }
        if (pos > sz)
        {
            cout << "Position must be in limit of : " << sz << endl;
            return;
        };
        sz--;
        Node *lead = leader(pos);
        Node *delNode = lead->next;
        lead->next = lead->next->next;
        delete delNode;
    }

    Node *leader(int pos)
    {
        Node *temp = head;
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    };

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void reverse_list(Node *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        };
        reverse_list(curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }
};

int main()
{
    SinglyList myList;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        myList.insert_tail(val);
    }

    myList.reverse_list(myList.head);
    myList.printList();

    return 0;
}
