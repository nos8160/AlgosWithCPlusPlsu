#include<iostream>
#include "TemplateCollection.cpp"
using namespace std;
void conquer(int* array,int start,int mid, int end){
    int size1 = mid - start+1;
    int size2 = end-mid;
    int arr[size1],arr2[size2];
    for(int i =0;i< size1;i++){
        arr[i] = array[start+i];
    }
    for(int j =0;j<size2;j++){
        arr2[j] = array[mid+1+j];
    }
    int i=0,j=0,k=start;
    while(i<size1 && j< size2){
        if(arr[i]<=arr2[j]){
            array[k] = arr[i];
            i++;
        }
        else{
            array[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<size1){
        array[k]= arr[i];
        i++;
        k++;
    }
    while(j<size2){
        array[k]= arr2[j];
        j++;
        k++;

    }
}
void divide(int *array,int start,int end){

    if(start<end){
        int mid = start+(end - start)/2;
        divide(array,start,mid);
        divide(array,mid+1,end);
        conquer(array,start,mid,end);
    }

}
int main(){
    int iarray[] = {5,4,8,1};
    int size = sizeof(iarray)/sizeof(iarray[0]);
    divide(iarray,0,size-1);
    printArray(iarray,size);
}
