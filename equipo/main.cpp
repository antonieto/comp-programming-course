#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int sum = 0;
    int arr[n];
    
    for(int i=0; i<n; i++){
        arr[i] = 1;
        sum += 1;
    }
    
    int rem = sum % k;
    int extra = k - rem;
    
    if(rem == 0){
        cout << "1\n";
        return 0;
    }
    
    if(extra == k){
        cout << sum << "\n";
        return 0;
    }
    
    if(extra <= n){
        for(int i=0; i<extra; i++){
            arr[i] += 1;
        }
    }
    else{
        int q = extra/n;
        int r = extra%n;
        
        for(int i=0; i<n; i++){
            arr[i] += q;
        }
        
        for(int i=0; i<r; i++){
            arr[i] += 1;
        }
    }
    
    cout << *max_element(arr, arr+n) << "\n";
    
    return 0;
}
