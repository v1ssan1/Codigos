#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

	int main(){
		int i;
		srand(time(NULL));
		i = rand()%100+1;
		
		cout << i << endl;
		return 0;
	}