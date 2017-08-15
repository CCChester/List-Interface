#ifndef __LIST_H__
#define __LIST_H__
#include "Node.h"
#include <iostream>


class List{   //parent class
protected:
    int *arr;  //vector array
    int length;   //array capacity
    int mysize;   //length of array
    Node *head;    //node
public:
    List():arr(new int[5]), length(5), mysize(0), head(NULL){}  //ctor
    virtual int at(int) = 0;     //all pure virtual
    virtual int first() = 0;
    virtual int last() = 0;
    virtual int size() = 0;
    virtual void add(int) = 0;
    virtual int find(int) = 0;
    virtual bool remove(int) = 0;
    virtual ~List() = 0;   //dtor
};

#endif
