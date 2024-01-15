using namespace std;
#include<iostream>
#include<vector>

void intersection(vector<int> arr1, vector<int> arr2){

    int i=0, j=0;

    while (i<arr1.size() && j<arr2.size()) {
        if (arr1[i] < arr2[j]) {
            i++;
        }

        else if (arr1[i]==arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }

        else { 
            j++;
        }

    }
} 

void printArray(vector<int> x) {
    for (int i=0;i<x.size();i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr1;
    vector<int> arr2;

    for (int i=0;i<5;i++) {
        arr1.push_back((i+2)*15);
    }

    for (int i=0;i<10;i++) {
        arr2.push_back((i+1)*10);
    }

    printArray(arr1);
    printArray(arr2);

    cout << "Intersection: " << " ";
    intersection(arr1,arr2);
    
    return 0;
}