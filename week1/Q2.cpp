// Example program
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n_case;
    string input_str;
    string A, B;
    
    cin >> n_case;
    
    for (int i=0; i<n_case; i++){
        cin >> input_str;
        
        A.push_back(input_str[0]);
        B.push_back(input_str[2]);
        
        cout << stoi(A) + stoi(B) << endl;
        
        A.pop_back();
        B.pop_back();
        }

}