#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main (){
	int i;
	srand(time(NULL));
	i = rand()%10+1;
	
	int a;
	cin >> a;
	if(i=a){
		cout << "Acertou!";
	}
	else{
		cout << "Errou!";
		return 0;
	}
}