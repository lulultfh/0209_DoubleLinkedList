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
}