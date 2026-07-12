#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int st,int end){
    int idx=st-1,pvtidx=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pvtidx){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}


void quicksort(vector<int> &arr,int st,int end){
    if(st<end){
        int pvtidx=partition(arr,st,end);
        quicksort(arr,st,pvtidx-1); //left
        quicksort(arr,pvtidx+1,end); //right

    }

}



int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    quicksort(arr, 0, arr.size() - 1);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
