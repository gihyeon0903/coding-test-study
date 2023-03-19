// Example program
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

    
int main(){
    // Default : N장의 카드 (1 ~ N) 번호 오름차순으로 놓여있음
    // 1. 제일 위에 있는 카드를 버림 2.제일 위에 있는 카드를 제일 밑으로 옮김
    int N_card;
    deque<int> card_dq;
    
    cin >> N_card;
    
    for (int i=1; i<N_card+1; i++){
        card_dq.push_back(i);
        }
    
    while(card_dq.size() != 1){
        card_dq.pop_front();
        card_dq.push_back(card_dq.front());
        card_dq.pop_front();
        }
    cout << card_dq.front();
}