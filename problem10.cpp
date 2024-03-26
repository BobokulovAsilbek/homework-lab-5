#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *next;
    Node(){
        value = 0;
        next = NULL;
    }
    Node(int val){
        value = val;
        next = NULL;
    }
};
class LinkedList{
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }
    LinkedList(int val){
        Node *newNode = new Node(val);
        head = newNode;
    }
    void InsertNode(int val){
        Node *newNode = new Node(val);
        if(head == NULL) head = newNode;
        else{
            Node *tmp = head;
            while(tmp->next != NULL){
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
    }
    void deleteElements(){
        Node *tmp = head;
        while(tmp != NULL){
            cout << tmp->value << " is deleted\n";
            head = tmp->next;
            tmp = tmp->next;
        }
    }
};
int main()
{
    LinkedList List;
    int n;
    while(cin >> n) List.InsertNode(n);
    List.deleteElements();
}
