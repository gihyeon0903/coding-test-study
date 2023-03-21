// Example program
#include <iostream>
#include <string>
#include <vector>
#include <deque>
// 선영이는 집 호수에 반복되는 숫자가 있는 경우에는 그 집에 사는 사람에게 불운이 찾아온다고 믿는다. 따라서, 
// 선영이는 838호나 1004호와 같이 한 숫자가 두 번 이상 들어있는 집에는 절대 살지 않을 것이다.
// 2050년, 선영이는 한국에서 가장 돈이 많은 사람이 되었다. 그녀는 해변가에 새로운 호텔을 하나 지으려고 한다.
// 하지만, 투숙객에게 불운이 찾아오는 것을 피하기 위해서 반복되는 숫자가 없게 방 번호를 만들려고 한다.
// 정부는 선영이의 호텔 방 번호는 N보다 크거나 같고, M보다 작거나 같아야 한다는 조건을 걸고 신축 허가를 내주었다.
// 선영이의 새 호텔에는 방이 최대 몇 개 있을 수 있을까? (두 방이 같은 방 번호를 사용할 수 없다)
//  (1 ≤ N ≤ M ≤ 5000)

using namespace std;

int detect_duplication(int a, int b, int c, int d){
    deque<int> dq;
    
    dq.push_back(a);
    dq.push_back(b);
    dq.push_back(c);
    dq.push_back(d);
    
    while (dq.front() == 0){//제일 앞에 0이 있는 것을 다 지움
        dq.pop_front();
    }
    
    while(dq.size() != 1){
        for(int i=1; i<dq.size(); i++){
            if (dq.front() == dq[i])// 중복이 있음.
                return 0;
            }
        dq.pop_front();
        }
    return 1;
    }

int main(){
    int N, M;
    
    
    while(cin >> N >> M){
        
        vector<int> room;
        
        for(int i=N; i<=M; i++){
            room.push_back(i);
            }
            
        
        int num, digit_1000, digit_100, digit_10, digit_1;
        int cnt = 0;
        
        for(int i=0; i<room.size(); i++){
            num = room[i];
            
            digit_1000 = num/1000;
            num = num%1000;
             
            digit_100 = num/100;
            num = num%100;
             
            digit_10 = num/10;
            num = num%10;
            
            digit_1 = num/1;
            num = num%1;
            cnt += detect_duplication(digit_1000, digit_100, digit_10, digit_1);
            }
            
        cout << cnt << endl;
    }
}