/*
 Program Name: main.cpp
 Programmer: Moris Gomez
 Date: Saturday 03/13/2024
 Version Control: 1.0
 About: Week 5, CSCI 2, Class Notes/Examples.
 Description:
   Create a simple Linked List for practice using Professor's example.
*/

#include <iostream>
using namespace std;

//STEP 1) create class for Node objects:
class Node
{
public:
    int data;
    Node* next; //contains address.
public:
    //default constructor:
    Node()
    {
        data = 0; //assigns 0 when Node object created w/o passing arguments.
        next = NULL; //points to nothing (empty pointer).
    }
    
    //constructor w/ 1 argument:
    Node(int d)
    {
        data = d; //pass a data value.
        next = NULL; //pointer w/ no address.
    }
    
};//end Node class.

int main()
{
//1) 2 objects of user type Node:
    //create Node object using default constructor:
    Node test;
    cout << test.data << endl << test.next << endl; //0 //0x0
    
    //create Node object using 1 argument constructor:
    Node testTwo(4);
    cout << testTwo.data << endl << testTwo.next << endl; //4 //0x0 bc points to null.
 
//2) create null Node pointers for address assigment later:
    //create first Node type pointer:
    Node *pointerTest;
    cout << pointerTest << endl; //0xf379e453426400d5 //garbage address.
    
    //create second Node type pointer:
    Node *pointerTestTwo;
    cout << pointerTestTwo << endl; //0x0 //garbage address.
    
//3) assign pointers to corresponding Node address:
    //assign first Node object to pointer:
    pointerTest = &test;
    cout << pointerTest << endl; //0x7ff7bfeff198
 
    //assign second Node object to pointer:
    pointerTestTwo = &testTwo;
    cout << pointerTestTwo << endl; //0x7ff7bfeff188
    
    //print data member variable of first Node via pointer:
    cout << pointerTest->data << endl; //0
    //use -> when getting a member variable through a pointer, derefrencing w/ classes.
    
//4) link all nodes:
    //change 'next' address of 1st node to second node:
    pointerTest->next = pointerTestTwo;
    
    //connect tail to head:
    pointerTestTwo->next = pointerTest;
    
//5) print Linked List:
    //node 1 (head):
    cout << "address of 1st node is: " << pointerTest << endl;
    cout << "data of 1st node is: " << pointerTest->data << endl;
    cout << "1st Node is pointing to: " << pointerTest->next << endl;
    cout << "--------" << endl;
    
    //node 2 (tail):
    cout << "address of 2nd node is: " << pointerTestTwo << endl;
    cout << "data of 2nd node is: " << pointerTestTwo->data << endl;
    cout << "2nd Node is pointing to: " << pointerTestTwo->next << endl;
    return 0;
}
