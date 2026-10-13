#include <iostream>
using namespace std;

int main() {
    int start_num, end_num, i, j, prime;
    
    cin >> start_num >> end_num;
    cout << endl;
    for (i = start_num; i <= end_num; i++) {
        if (i > 1) {
            prime = 1; //1 to represent true
            
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    prime = 0;
                }
            }            
            if (prime == 1) {
                cout << i << endl; 
            }
        }
    }
    return 0;
}
