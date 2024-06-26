#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = numer1*denom2+numer2*denom1;
    int b = denom1*denom2;
    answer.push_back(a/gcd(a, b));
    answer.push_back(b/gcd(a, b));
    return answer;
}