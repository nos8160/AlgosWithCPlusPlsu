#include<iostream>
#include "TemplateCollection.cpp"
using namespace std;
int main(){
    bool isAlreadySorted = true;
    int temp = 0;
    int array[] ={0,11,2,99};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i< size;i++){
        for(int j = 0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swappy(&array[j],&array[j+1]);
                isAlreadySorted = false;
            }

        }
        if(isAlreadySorted == true){
            cout<<"inputs are already sorted."<<endl;
            break;
        }
    }
    for(int i:array){
        cout<<i<<endl;
    }

}
