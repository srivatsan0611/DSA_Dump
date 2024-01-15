using namespace std;
#include<iostream>
#include<vector>

void reverseVector(vector<int> &x) {
    int l = 0;
    int r = x.size() - 1;

    while (l <= r) {
        int temp = x[l];
        x[l] = x[r];
        x[r] = temp;

        l++;
        r--;
    }
    return;
} 

void printVector(vector<int> x) {
    for (int i=0;i<x.size();i++) {
        cout << x[i] << " ";
    }
    cout << endl;
} 

int main() {
    vector<int> problem;

    for (int i = 1; i <= 10; i++)
        problem.push_back(i * 10);

    // before reversing

    printVector(problem);

    // reverse

    reverseVector(problem);

    // after reversing

    printVector(problem);

    return 0;
}