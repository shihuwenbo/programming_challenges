#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(vector<string>& field, int m, int n) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(field[i][j] == '*') {
                continue;
            }
            
            int count = 0;
            
            // top left
            if(i > 0 && j > 0) {
                if(field[i-1][j-1] == '*') {
                    count++;
                }
            }
            
            // top
            if(i > 0) {
                if(field[i-1][j] == '*') {
                    count++;
                }
            }
            
            // top right
            if(i > 0 && j < n-1) {
                if(field[i-1][j+1] == '*') {
                    count++;
                }
            }
            
            // left
            if(j > 0) {
                if(field[i][j-1] == '*') {
                    count++;
                }
            }
            
            // right
            if(j < n-1) {
                if(field[i][j+1] == '*') {
                    count++;
                }
            }
            
            // bottom left
            if(i < m-1 && j > 0) {
                if(field[i+1][j-1] == '*') {
                    count++;
                }
            }
            
            // bottom
            if(i < m-1) {
                if(field[i+1][j] == '*') {
                    count++;
                }
            }
            
            // bottom right
            if(i < m-1 && j < n-1) {
                if(field[i+1][j+1] == '*') {
                    count++;
                }
            }
            
            field[i][j] = count+48;
        }
    }

}

int main() {
    int m;
    int n;
    
    int pcount = 0;
    
    while(cin >> m >> n) {
        pcount++;

        if(m == 0 && n == 0) {
            break;
        }
        if(pcount > 1) {
            cout << endl;
        }

        vector<string> field;        
        for(int i=0; i<m; i++) {
            string row;
            cin >> row;
            field.push_back(row);
        }
        
        cout << "Field #" << pcount << ":" << endl;
        solve(field, m, n);
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                cout << field[i][j];
            }
            cout << endl;
        }
    }
}
