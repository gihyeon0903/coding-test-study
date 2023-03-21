// Example program
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cmath>

// 두 정수 n과 m이 주어졌을 때, 0 < a < b < n인 정수 쌍 (a, b) 중에서 (a^2+b^2+m)/(ab)가 정수인 쌍의 개수를 구하는 프로그램을 작성하시오.

using namespace std;


int main(){
    int T, n, m;
    int cnt;
    vector<int> b;
    vector<int> a;\
    
    cin >> T;
    while (T != 0){
        cin >> n >> m;
        cnt = 0;
        a.clear();
        b.clear();
        
        for (int i=2; i<n; i++){
            b.push_back(i);
            }
            
        
        for (int i=0; i<b.size(); i++){
            
            for (int j=1; j<b[i]; j++){
                a.push_back(j);
            }
            
            
            for (int j=0; j<a.size(); j++){
                int a_sqrt = int(pow(a[j],2));
                int b_sqrt = int(pow(b[i],2));
                
                if ((a_sqrt + b_sqrt+ m) % (a[j]*b[i]) == 0){
                    cnt++;
                    }
                }
                
            a.clear();
            }
        
        cout << cnt << endl;
        T--;
    }
}