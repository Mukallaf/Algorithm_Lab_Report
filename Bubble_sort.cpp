#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    bool flag;
    for (i = 0; i < n - 1; i++) {
        flag = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (flag == false)
            break;
    }
}


int main(){
    int n;
    cout << "Input the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Input the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "The sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

}