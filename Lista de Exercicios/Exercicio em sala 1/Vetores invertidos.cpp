#include <iostream>
using namespace std;

int main(){
	
	int vet1[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for(int i = 0; i <= 10/2; i++) {
		int temp = vet1[i];
		vet1[i] = vet1[9 - i];
		vet1 [9 - i] = temp;
	}
	
	for (int i = 0; i < 10; i++)
		cout << vet1[i] << " ";
	
	return 0;
}
