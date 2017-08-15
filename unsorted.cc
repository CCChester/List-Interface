#include "unsorted.h"
#include <iostream>

using namespace std;

void UnsortedList::add(int num){
    Node *u1 = new Node;
    u1->data = num;
    u1->next = NULL;
    if(mysize == 0){head = u1;}
    else{
        Node *u2 = head;
        while(u2->next != NULL){
            u2 = u2->next;
        }
        u2->next = u1;
    }
    mysize++;
}

int UnsortedList::first(){
    return head->data;
}

int UnsortedList::size(){
    return mysize;
}

int UnsortedList::at(int num){
    Node *u = head;
    for(int i = 0; i < num; i++){
	u = u->next;
    }
    return u->data;
}

int UnsortedList::find(int num){
    Node *u = head;
    for(int i = 0; i < mysize; i++){
       if (u->data == num){
	   return i;
       }
       else{
           if (u->next == NULL){
	       return -1;
	   }
           u = u->next;
       }
    }
    return -1;
}

int UnsortedList::last(){
    Node *u = head;
    while(u->next != NULL){
        u = u->next;
    }
    return u->data;
}

bool UnsortedList::remove(int num){
    if(mysize == 0){return false;}
    else if(mysize == 1){
        if (head->data == num){
             delete head;
             mysize--;
             return true;
         }
         else{return false;}
    }
    else if(head->data == num){
        Node *u = head->next;
        delete head;
        head = u;
        mysize--;
        return true;
    }
    else{
        Node *u1 = head->next;
        Node *u2 = head;
        while(true){
            if (u1->data == num){
                if (u1->next != NULL){
                    u2->next = u1->next;
                    mysize--;
                    delete u1;
                    return true;
                }
                else{
                    u2->next = NULL;
                    delete u1;
                    mysize--;
                    return true;
                }
            }
            else{
                if(u1->next == NULL){break;}
                u1 = u1->next;
                u2 = u2->next;
            }
        }
    }
    return false;
}

UnsortedList::~UnsortedList(){
    while (head->next != NULL){
        Node *u = head;
        head = head->next;
        delete u;
    }
    delete head;
    delete [ ] arr;
}
