#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);
    int l = n*m/g;
    answer.push_back(g);
    answer.push_back(l);
    return answer;
}