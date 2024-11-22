#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    
    cout << "Sum of positive numbers: " << sum << endl;
    
    return 0;
}
