#include <iostream>


using namespace std;

int binarySqrt(int x) {
    int start = 0;
    int end = x;

    int mid = start + (end-start)/2;

    int ans = 0;

    while (start <= end) {
        int squared = mid*mid;

        if (squared==x) {
            return mid;
        }

        if (squared<x) {
            ans = mid;
            start = mid+1;
        }

        else {
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

double floatingPoint(int target, int tempSol, int precision) {
    double ans = tempSol;
    double factor = 1;

    for (int i=0;i<precision;i++) {
        factor = factor/10;

        for (double j=ans;j*j<target;j=j+factor) {
            ans=j;
        }
    }
    return ans;
}


int main() {


    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    int precision = 0;

    cout << "Enter precision: ";
    cin >> precision;

    int tempSol = binarySqrt(number);

    cout << "TempSol-> " << tempSol;

    double ans = floatingPoint(number,tempSol,precision);

    cout << "Square root is -> " << ans;

    return 0;
}