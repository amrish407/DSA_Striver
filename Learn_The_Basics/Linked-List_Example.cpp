#include<iostream>
using namespace std;

//PROBLEM STATEMENT
/*

You are given a Singly Linked List of integers with a head pointer. 
Every node of the Linked List has a value written on it.

A sample Linked List: (5 -> 7 -> 9 ->12 -> NULL)

Now you have been given an integer value, 'K'. Your task is to check whether a node with a value equal to 'K' 
exists in the given linked list. Return 1 if node exists else return 0.

*/

//Code for Coding Ninja Platform

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    while(head!=NULL){
        if(head->data==k){
           return 1;
       }
       head=head->next;
   }
   return 0;

}