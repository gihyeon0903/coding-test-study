// Example program
#include <iostream>
#include <string>

using namespace std;

int main(){
    int year;
    int ans = 0;
    
    cin >> year;
    
    if (year % 4 == 0){
        if (year % 100 != 0){
            ans = 1;
            }
        if (year % 400 == 0){
            ans = 1;
            }
        }
    
    cout << ans;
}