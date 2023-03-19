// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    // test case 수 입력 받음
    // 첫문자 마지막 문자 출력
    int n_case;
    string str;
    
    cin >> n_case;
    
    for(int i=0; i<n_case; i++){
        cin >> str;
        cout << str[0] << str[str.length()-1] << endl;
        
        }
    
    

}