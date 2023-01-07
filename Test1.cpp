#include <iostream>
using namespace std;

void square(int n){
	cout<<n<<" squared = "<<n*n<<endl;
}

int main()
{
	for(int x = 1; x <= 10; square(x++));
}

