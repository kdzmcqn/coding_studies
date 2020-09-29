#include <iostream>
using namespace std;
#define MAX 5005
int arr[MAX];
int N;

void Swap(int &a, int &b) {
    int temp =a;
    a = b;
    b = temp;
}

void selection_sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int minidx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[minidx] > arr[j]) {
                minidx = j;
            }
        }
        Swap(arr[minidx], arr[i]);
    }
}

int main() {

    cin>>N;
    for(int i=0; i < N; i++) {
        cin>>arr[i];
    }

    selection_sort(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
	system("pause");
    return 0;
}
