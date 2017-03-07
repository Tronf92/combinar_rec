#include <iostream>
using namespace std;

int comb_rec(int a,int b){
	if(a==b){
		return 1;
	}
	if(b==0){
		return 1;
	}
	return comb_rec((a-1),b ) + comb_rec((a-1),(b-1));

}

int main()
{
	int n,k;
	cout << "Introduceti k:";
	cin >> k;
	cout << "Introduceti n:";
	cin >> n;
	if((k>n) || (n<0) || (k<0) ){
		cout << "Nu se poate calcula!" << endl;
	}
	else{
		cout << "Combinari de n luate cate k:" << comb_rec(n,k);
		cout << endl;
	}

	system("pause");
	return 0;
}