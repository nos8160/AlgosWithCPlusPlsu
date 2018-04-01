#include<iostream>
using namespace std;
void printArray(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<*(array+i)<< " ";
    }
    cout<<endl;
}
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
int sortWithSelection(int *array,int size){
    for(int i =0;i<size-1;i++){
        int smallest = i;
        for(int j =i+1;j<size;j++){
            if(array[j]< array[smallest]){
                smallest = j;
            }
        }
        int temp = array[i];
        array[i] =array[smallest];
        array[smallest] = temp;

    }
}
