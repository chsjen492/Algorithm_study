#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(true){
        if(n<10){
            answer+=n;
            break;
        }
        answer+=n%10;
        n/=10;
    }
    return answer;
}