#include<iostream>
#include<time.h>
#include "TemplateCollection.cpp"
using namespace std;
int main(){
    double start = clock();
    int array[] = {-89,0,-32,789,0,1,45};
    int size = sizeof(array)/sizeof(array[0]);
    sortWithSelection(array,size);
    printArray(array,size);
    cout<< clock()-start<<endl;
}
