#include<iostream>
using namespace std;
int binSearch(int arr[],int first, int last, int num);
int main(){
    int i, arr[10], num, loc;
    cout<<"Enter 10 elements (in ascending order) \n";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched \n";
    cin>>num;
    loc = binSearch(arr, 0, 9, num);
    if(loc==0){
        cout<<num<<" is not present \n";
    }
    else{
        cout<<"\n"<<num<<" is at position "<<loc<<"\n";
    }
    return 0;
}
int binSearch(int arr[],int first, int last, int num){
    int middle;
    if(first>last){
        return 0;
    }
    middle = (first+last)/2;
    if(arr[middle]==num){
        return (middle+1);
    }
    else if(arr[middle]>num){
        binSearch(arr, first, middle-1, num);
    }
    else if(arr[middle]<num){
        binSearch(arr, middle+1, last, num);
    }
}
