#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
			cin>>N;
        	cout<<"#"<<test_case<<" "<<N/3<<"\n";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}