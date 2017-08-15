#ifndef __UNSORTED_H__
#define __UNSORTED_H__
#include "list.h"
class UnsortedList: public List{
public:
    int at(int);
    int first();
    int last();
    int size();
    void add(int);
    int find(int);
    bool remove(int);
    ~UnsortedList();
};
#endif
