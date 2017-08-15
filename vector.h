#ifndef __VECTOR__h_
#define __VECTOR__h_
#include "list.h"

class Vector: public List{
public:
    int at(int);
    int first();
    int last();
    int size();
    void add(int);
    int find(int);
    bool remove(int);
    ~Vector();
};

#endif
