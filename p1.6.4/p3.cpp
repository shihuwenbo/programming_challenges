#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

void print1(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
}

void print2(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print3(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print4(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
}

void print5(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print6(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print7(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
}

void print8(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print9(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void print0(int s, int p, vector<string>& board) {
    int stcol = p*(s+2);
    int ridx = 0;
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    ridx += 1;
    for(int i=0; i<s; i++, ridx++) {
        board[ridx][stcol] = '|';
        board[ridx][stcol+s+1] = '|';
    }
    for(int i=0; i<s; i++) {
        board[ridx][stcol+i+1] = '-';
    }
}

void solve(int s, const string& n) {

    // compute board size
    int nnum = n.size();
    int ncol = (2*s+2)*nnum;
    int nrow =2*s+3;

    // defined board
    vector<string> board;
    for(int i=0; i<nrow; i++) {
        board.push_back(string(ncol, ' '));
    }

    // print to board
    for(int i=0; i<n.size(); i++) {
        if(n[i] == '1') {
            print1(s,i,board);
        }
        else if(n[i] == '2') {
            print2(s,i,board);
        }
        else if(n[i] == '3') {
            print3(s,i,board);
        }
        else if(n[i] == '4') {
            print4(s,i,board);
        }
        else if(n[i] == '5') {
            print5(s,i,board);
        }
        else if(n[i] == '6') {
            print6(s,i,board);
        }
        else if(n[i] == '7') {
            print7(s,i,board); 
        }
        else if(n[i] == '8') {
            print8(s,i,board);
        }
        else if(n[i] == '9') {
            print9(s,i,board);
        }
        else if(n[i] == '0') {
            print0(s,i,board);
        }
    }

    // display board
    for(int i=0; i<nrow; i++) {
        cout << board[i] << endl;
    }
    cout << endl;
}

int main() {
    int s;
    int nint;

    while(cin >> s >> nint) {
        
        if(s == 0 && nint == 0) {
            break;
        }

        char ncstr[10];
        sprintf(ncstr,"%d",nint);
        string n(ncstr);
        solve(s, n);
    }
}
