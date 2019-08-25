#include <iostream>

using namespace std;

int main() {
	int n,n2;
	int prev,actual=0;
	int high,low;
	cin>>n;
	for(int i=0;i<n;i++){
		high=0;
		low=0;
		cin>>n2;
		cin>>actual;
		n2--;
		while(n2--){
			prev=actual;
			cin>>actual;
			if(actual>prev)
				high++;
			else
				if(prev>actual)
					low++;
		}
		cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
		}
	return 0;
}

