#include<iostream>
using namespace std;
template<class T>
void swappy(T *s,T *t){
    T temp;
    temp = *s;
    *s = *t;
    *t = temp;
}
template<class U>
U toNumber(string str){
    U temp;
    for(int i =0;i<str.size();i++){
        temp = temp * 10+(str[i]-48);
    }
    return temp;
}
