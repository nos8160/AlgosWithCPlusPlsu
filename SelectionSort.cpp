#include<iostream>
#include "TemplateCollection.cpp"
using namespace std;
int main(){
    int array[] = {-56,78,0,-23,97,6,1};
    int size = sizeof(array)/sizeof(array[0]);
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
    printArray(array,size);

}
