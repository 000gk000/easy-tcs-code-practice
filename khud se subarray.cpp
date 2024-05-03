#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int size = 0; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int start = 0; start < n; start++) {
        int sum = 1;
        for(int end = start; end < n; end++) {
            sum = sum * arr[end];
            if(sum ==120) {
            
                int orsize = end-start+1;
                if(orsize > size){
                	size = orsize ;
				}
                for(int i = start; i <= end; i++) {
                    cout << arr[i] << " ";
                }
                
                
                
            }
        }
    }
    cout << size;
    return 0;
}

