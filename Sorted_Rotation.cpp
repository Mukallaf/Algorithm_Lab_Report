#include <bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int first, int last){
    int i, j, pivot, temp; 
    if(first < last){
        pivot = first;
        i = first;
        j = last;
        while(i < j){
            while(arr[i] <= arr[pivot] && i < last)
                i++;
            while(arr[j] > arr[pivot])
                j--;
            if(i < j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, first, j-1);
        quicksort(arr, j+1, last);
    }
}

void rev_quicksort(int arr[], int first, int last){
    int i, j, pivot, temp; 
    if(first < last){
        pivot = first;
        i = first;
        j = last;
        while(i < j){
            while(arr[i] >= arr[pivot] && i < last)
                i++;
            while(arr[j] < arr[pivot])
                j--;
            if(i < j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        rev_quicksort(arr, first, j-1);
        rev_quicksort(arr, j+1, last);
    }
}

int main(){
    int n, p;
    cout << "Enter the Array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers of Array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rev_quicksort(arr, 0, n-1);
    
    cout << "Enter the starting index : ";
    cin >> p;
    quicksort(arr, 0, p-1);
    quicksort(arr, p, n-1);


    cout << "After sorting from index no " << p << "\nThe final Array is : ";
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';
}
