#include "sorted.h"
#include <iostream>

using namespace std;

void SortedList::add(int num){
    Node *u = new Node;
    u->data = num;
    u->next = NULL;
    if(mysize == 0){
        head = u;
        mysize++;
        return;
    }
    else if(mysize == 1){
        if(head->data >= num){
            u->next = head;
            head = u;
        }
        else{
            head->next = u;
        }
        mysize++;
        return;
    }
    else{
        Node *current = head->next;
        Node *prev = NULL;
        if (num <= head->data){
            u->next = head;
            head = u;
            mysize++;
            return;
         }
        int index = 1;
        while(index < mysize){
            if (index == mysize - 1){
                if (current->data >= num){
                    if (prev == NULL){
                        Node *u2 = head;
                        u2->next = u;
                        u->next = current;
                    }
 	            else{
                         prev->next = u;
                   	 u->next = current;
		    }
		    mysize++;
                    return;
                }
                else{break;}
            }
            else if (current->data >= num){
                if (prev == NULL){
                    Node *u2 = head;
                    u2->next = u;
                    u->next = current;
                }
		else{
                    prev->next= u;
                    u->next = current;
                }
                mysize++;
                return;
            }
            else{
                prev = current;
                current = current->next;
            }
            index++;
        }
        current->next = u;
        mysize++;
        return;
    }
}

int SortedList::first(){
    return head->data;
}

int SortedList::size(){
    return mysize;
}

int SortedList::at(int num){
    Node *u = head;
    for(int i = 0; i < num; i++){
        u = u->next;
    }
    return u->data;
}

int SortedList::find(int num){
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

int SortedList::last(){
    Node *u = head;
    while(u->next != NULL){
        u = u->next;
    }
    return u->data;
}

bool SortedList::remove(int num){
    if(mysize == 0){return false;}
    else if(mysize == 1){
	if(head->data == num){
             delete head;
             mysize--;
             return true;
        }
        else{return false;}
    }
    else if(head->data == num){
        Node *u = head;
        head = head->next;
        delete u;
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

SortedList::~SortedList(){
    while (head->next != NULL){
        Node *u = head;
        head = head->next;
        delete u;
    }
    delete head;
    delete [ ] arr;
}
