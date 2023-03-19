// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int i, int j){
    return i > j;
    }

int main(){
    // 9개의 정수를 받음
    // 최대 값과 그 인덱스(1부터 시작)를 출력
    
    int input_N;
    int max_val;
    int max_idx;
    
    vector<int> N_arr;
    
    for(int i=0; i<9; i++){
        cin >> input_N;
        N_arr.push_back(input_N);
        }
    
    vector<int> tmp = N_arr;
    
    sort(N_arr.begin(), N_arr.end(), cmp);
    
    max_val = N_arr[0];
    
    for(int i=1; i<10; i++){
        if (tmp[i-1] == max_val){
            max_idx = i;
            break;
            }
        }
    
    cout << max_val << endl << max_idx;
}