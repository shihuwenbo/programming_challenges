#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int get_cyclen_recur(size_t n) {
    // answer is 1
    if(n == 1) {
        return 1;
    }
    
    // need iteration n even case
    if(n%2 == 0) {
        int ans = 1+get_cyclen_recur(n/2);
        return ans;
    }
    
    // need iteration n odd case
    int ans = 2+get_cyclen_recur((3*n+1)/2);
    return ans;
}

int main() {
    int num1;
    int num2;
    
    while(cin >> num1 >> num2) {
        
        cout << num1 << " " << num2;

        int max_cycle_length = -1;
        if(num1 < num2) {
            for(size_t i=num1; i<=num2; i++) {
                int tmp = get_cyclen_recur(i);
                if(tmp > max_cycle_length) {
                    max_cycle_length = tmp;
                }
            }
        }
        else {
            for(size_t i=num2; i<=num1; i++) {
                int tmp = get_cyclen_recur(i);
                if(tmp > max_cycle_length) {
                    max_cycle_length = tmp;
                }
            }
        }
        
        cout << " " << max_cycle_length << endl;
    }
}
