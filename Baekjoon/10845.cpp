#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> a;

    int T;
    cin >> T;

    for (int t=0; t < T; t++) {
        string s;
        cin >> s;

        if (s=="push") {
            int k;
            cin >> k;

            a.push(k);
        }
        else if (s=="front") {
            if(a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.front() << endl;
            }
        }
        else if (s=="back") {
            if(a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.back() << endl;
            }
        }
        else if (s=="size") {
            cout << a.size() << endl;
        }
        else if (s=="pop") {
            if (a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.front() << endl;
                a.pop();
            }
        }
        else if (s=="empty") {
            if (a.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
    }
}
/*
class Node {
public:
    int data;
    Node* next;

    Node(int e) {
        this->data = e;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* front;
    Node* rear;

    LinkedList() {
        front = NULL;
        rear = NULL;
    }

    void addEnd(int X) {
        Node* new_node = new Node(X);

        if (front==NULL) {
            front = rear = new_node;
        }
        else {
            rear->next = new_node;
            rear = new_node;
        }
    }

    int removeFront() {
        Node* tmp = front;

        if (front!=NULL) {
            front = front->next;
        }
        return tmp->data;
    }
};

class LinkedQueue {
public:
    LinkedList *Q;
    int n;

    LinkedQueue() {
        this->Q = new LinkedList();
        this->n = 0;
    }
    
    int size() {
        return n;
    }

    bool isEmpty() {
        return n == 0;
    }

    void front() {
        if (isEmpty()) {
            cout << -1 << "\n";
        }
        else {
            cout << Q->front->data << "\n";
        }
    }

    void back() {
        if (isEmpty()) {
            cout << -1 << "\n";
        }
        else {
            cout << Q->rear->data << "\n";
        }
    }

    void push(int data) {
        
        Q->addEnd(data);
        n++;
    }

    void pop() {
        
        if (isEmpty()) {
            cout << -1 << "\n";
        }
        else {
            cout << Q->rear->data << "\n";
            Q->removeFront();
            n--;
        }
    }
};

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    LinkedQueue q;
    int n;

    cin >> n;

    for (int i=0; i < n; i++) {
        string s;

        for (int j=0; j < n; j++) {
            cin >> s;

            if (s=="push") {
                int x;

                cin >> x;

                q.push(x);
            }
            else if (s=="front") {
                q.front();
            }
            else if (s=="empty") {
                cout << q.isEmpty() << "\n";
            }
            else if (s=="size") {
                cout << q.size() << "\n";
            }
            else if (s=="pop") {
                q.pop();
            }
            else if (s=="back") {
                q.back();
            }
        }
    }
}
*/