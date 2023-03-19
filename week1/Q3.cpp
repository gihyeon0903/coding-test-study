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
    // N 동장의 종류
    // K 가치의 합
    // 첫째 줄에 N과 K가 주어짐.
    // 둘째 줄부터 동전의 가치가 오름차순으로 주어짐.(N개여야겠지?)
    // k원을 만드는데 필요한 동전의 개수의 최소값을 출력
    int N, K;
    int type;
    vector<int> type_arr;
    
    cin >> N >> K;
    
    for(int i=0; i<N ; i++){
        cin >> type;
        type_arr.push_back(type);
        }
    
    sort(type_arr.begin(), type_arr.end(), cmp);
    
    int residual = K;
    int total_n = 0;
    int n;
    
    for(int i=0; i<N ; i++){
        n = residual / type_arr[i];
        residual = residual % type_arr[i];
        total_n += n;
        }
        
    cout << total_n << endl;
}