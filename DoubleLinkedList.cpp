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