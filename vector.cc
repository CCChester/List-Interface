#include "vector.h"
#include <iostream>
using namespace std;

void Vector::add(int num){
    if (mysize == length){
        int *temp = new int [length*2];
        int i = 0;
        while(i < length){
            temp[i] = arr[i];
	    i++;
        }
        delete [] arr;
        arr = temp;
        length = length * 2;
    }
    arr[mysize] = num;
    mysize++;
}

int Vector::first(){
    return arr[0];
}

int Vector::last(){
    return arr[mysize-1];
}

int Vector::size(){
    return mysize;
}

int Vector::at(int num){
     return arr[num];
}

int Vector::find(int num){
    for(int index = 0; index < mysize; index++){
        if (arr[index] == num){
            return index;
        }
    }
    return -1;
}

bool Vector::remove(int num){
    int index = 0;
    int control = 0;
    while (index < mysize){
        if (arr[index] == num){
            control = 1;
            break;
        }
        else{index++;}
    }
    if (control == 0){
        return false;
    }
    else{
        int *temp = new int [length];
        int i = 0;
        int pos = 0;
        while (pos < mysize){
            if (pos == index){
                pos++;
            }
            else{
                temp[i] = arr[pos];
                pos++;
                i++;
            }
        }
        delete [ ] arr;
        arr = temp;
        mysize--;
    }
    return true;
}

Vector::~Vector(){
    delete[ ] arr;
}
