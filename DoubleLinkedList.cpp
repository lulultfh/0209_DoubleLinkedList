#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs; //medan data
    string name; //medan data
    Node* next; //medan sambungan
    Node* prev; //medan sambungan
};

Node* START = NULL; //menandakan node masih kosong

void addNode()
{
    Node *newNode = new Node(); //step 1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode-> noMhs; //assign value to the data field of the new node
    cout << "\nEnter the roll name of the student: ";
    cin >> newNode-> name; //assign value to the data field of the new node
}