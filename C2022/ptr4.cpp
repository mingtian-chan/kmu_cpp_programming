#include <iostream>
using namespace std;

int get_sum1(int a[], int n){
    int i ;
    int sum = 0;

    for(i = 0; i < n; i++)
        sum += a[i];
        
    return sum;
}

int get_sum2(int a[], int n){
    int i;
    int *p;
    int sum = 0;

    p =  a;
    for (i = 0; i < n; i ++)
        sum += *p++;
    return sum;
}


int main() {
    int arr[] = {1, 2, 3,4,5};
    cout << get_sum1(arr, 5) << endl;
    cout << get_sum2(arr, 5) << endl; 
}