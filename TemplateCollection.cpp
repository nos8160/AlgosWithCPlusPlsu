#include<iostream>
using namespace std;
template<class T>
void swappy(T *s,T *t){
    T temp;
    temp = *s;
    *s = *t;
    *t = temp;
}
