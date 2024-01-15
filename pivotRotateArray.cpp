#include <iostream>
#include<bits/stdc++.h>



using namespace std;


int pivotElement(int *arr) {

    int start = 0;
    int end = 6;

    int mid = start + (end-start)/2;

    while (start <= end) {
        if (arr[mid]>arr[mid+1]) {
            return arr[mid+1];
        }

        else if (arr[mid]<arr[mid-1]) {
            end = mid-1;
        }

        else if (arr[mid]>arr[mid-1]) {
            start = start+1;
        }

        mid = start + (end-start)/2;

    }


    return -1;
}

void printArray(int *arr) {

    for (int i=0;i<7;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return;
}

int main(){

    int arr[7] = {7,8,12,3,4,5,6};

    cout << "Pivot Element at which rotation took place is -> " << pivotElement(arr) << endl;


    printArray(arr);

    return 0;
}