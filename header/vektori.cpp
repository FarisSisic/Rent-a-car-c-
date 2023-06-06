#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> testni;
	int broj;
	cout << "Unesite sve brojeve, a kada vise ne zelite unesite 0" << endl;
	do{
		cin >> broj;
		testni.push_back(broj);	
	}while(broj!=0);
	cout << "Testni je velik: " << testni.size() << " " << endl;
	
	
	
	return 0;
}
