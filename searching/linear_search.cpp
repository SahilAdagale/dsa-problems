#include<iostream>
using namespace std;

int linearsearch(int arr[] , int n , int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cout<< "enter the element to search: ";
    cin >> key;

    int index = linearsearch(arr, n , key);
    if(index !=-1){
        cout << "elemnt found at index : " << index << endl;
    }else{
        cout << "element not found " << endl;
    }

}