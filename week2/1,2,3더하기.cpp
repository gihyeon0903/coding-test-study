// Example program
#include <iostream>
#include <string>

// 각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를 출력한다.

using namespace std;

int factorial(int num)
{
    int result = 1;
    //for(int i = num; i>0; --i)
    for (int i = 1; i <= num; ++i)
    {
        result = result * i;
    }
    return result;
}

int main(){
    int T, n, cnt;
    int div1, div2, div3;
    
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >> n;
        cnt = 0;
        
        div1 = n/1;
        div2 = n/2;
        div3 = n/3;
        
        for(int a=0; a<=div1; a++){
            for(int b=0; b<=div2; b++){
                for(int c=0; c<=div3; c++){
                        if((a*1+b*2+c*3) == n){
                            cnt += factorial(a+b+c)/(factorial(a)*factorial(b)*factorial(c));
                        }
                    }
                }
            }
            
        cout << cnt << endl;
        }
}