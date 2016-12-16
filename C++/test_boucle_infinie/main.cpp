#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int test=1;
	do
	{
	int a=12000;;
	int b=sqrt(a);
	a=(b*a)/sqrt(a*b*b*b*a);
	}while(!(test=0));
	return 0;
}
