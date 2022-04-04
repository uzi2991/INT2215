#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    arr.erase(arr.begin() + k - 1);
    
    int a, b;
    cin >> a >> b;
    arr.erase(arr.begin() + a - 1, arr.begin() + b - 1);
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}
