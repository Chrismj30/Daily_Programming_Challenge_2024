#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2,int m,int n) {

    for(int i=0;i<m;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            int s=arr2[0];
            int j;
            for(j=1;j<n && arr2[j]<s;j++){
                arr2[j-1]=arr2[j];
            }
            arr2[j-1]=s;
        }
    }
}

int main() {
    vector<int> arr1={1, 3, 5, 7}; 
    vector<int> arr2={2, 4, 6, 8}; 
    
    merge(arr1,arr2,arr1.size(),arr2.size());

    cout<<"arr1: ";
    for(int num:arr1)
        cout<<num<<" ";
    cout<<endl;

    cout<<"arr2: ";
    for(int num:arr2)
        cout<<num<<" ";
    cout<<endl;

    return 0;
}
