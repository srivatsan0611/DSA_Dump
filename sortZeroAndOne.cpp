#include <iostream>
//#include <vector>


using namespace std;


void print_Array(int *arr) {

    for (int i=0;i<8;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return;
}


void sort_Array(int *arr) {
    int i = 0;
    int j = 7;

    while (i < j) {


        while (arr[i]==0 && i<j) {
            i++;
        }

        while (arr[j]==1 && i<j) {
            j--;
        }

        if (arr[i]==1 && arr[j]==0 && i<j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }

}

int main() {

    int arr[8] = {0,1,1,0,1,1,0,0};

    print_Array(arr);

    sort_Array(arr);

    print_Array(arr);  

}