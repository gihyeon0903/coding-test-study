// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int i, int j){
    return j< i;
    }


int main(){
    // A, B 입력
    // A>B => >
    // A<B => <
    // A=B => ==
    int A, B;
    
    cin >> A >> B;
    
    if (A > B){cout << ">";}
    else if(A < B){cout << "<";}
    else if (A == B){cout << "==";}
}