#include<iostream>
using namespace std;

class search{
    public:
    void binarySearch(int arr[], int keynum, int num){
        int low = 1;
        int high = num;
        int mid;
        do{
            mid = (low + high)/2;
            if(keynum < arr[mid]){
                high = mid-1;
            }
            else if(keynum > arr[mid]){
                low = mid+1;
            }
        }while(keynum!=arr[mid] && low <= high);
        if(keynum == arr[mid]){
            cout<<"Search Successful\n";
        }
        else{
            cout<<"Search Failed\n";
        }
    }
};
int main(){
    int i, j, num, temp,keynum;
    cout<<"Enter the size of array \n";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements one by one \n";
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    // Bubble sort
    for(i=0;i<num;i++){
        for(j=0;j<(num - i - 1);j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Enter the element to be searched \n";
    cin>>keynum;
    search s1;
    s1.binarySearch(arr,keynum,num); 
    return 0;
}
