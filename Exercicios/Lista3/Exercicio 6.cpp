#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int num;

	cout << "Digite um nuemro:\t" << endl;
	cin >> num;
	
    if(num % 2 == 0) {
		cout << num << " e um numero par.";
    } else {
		cout << num << " e um numero impar.";
    }
}
