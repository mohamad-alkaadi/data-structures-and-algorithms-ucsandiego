#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

long long SlowMaxPairwiseProduct(const vector<int>& numbers){
	long long result = 0;
	int n = numbers.size();
	for (int i =0; i<n; ++i){
		for(int j = i + 1; j < n; ++j){
			if(((long long) numbers[i]) * numbers[j] > result){
				result = ((long long)numbers[i]) * numbers[j];
			}
		}
	}
	return result;
}

long long FastMaxPairwiseProduct(const vector<int>& numbers){
	int n = numbers.size();
	int max_index1 = -1;
	for(int i =0; i < n; ++i){
		if((max_index1 == -1) || (numbers[i] > numbers[max_index1])){
			max_index1 = i;
		}
	}
	int max_index2 = -1;
	for(int j =0; j<n; ++j){
		if((numbers[j] != numbers[max_index1]) && ((max_index2== -1) || (numbers[j] > numbers[max_index2]))){
			max_index2= j;
		}
	}
	return ((long long) (numbers[max_index1])) * numbers[max_index2];

}	

int main(){
	while (true){
		int n = rand() % 4 + 2; // +2 for if the random is equal to 0 then we add 2 to it 
		cout << n << "\n";
		vector<int> a; 
		for (int i=0; i < n; ++i){
			a.push_back(rand() % 10); //gen numbers from  0 to 99999
		}
		for (int i=0; i< n; ++i){
			cout << a[i] << ' ';	
		}
		cout << "\n";
		long long res1 = SlowMaxPairwiseProduct(a);
		long long res2 = FastMaxPairwiseProduct(a);
		if (res1 != res2){
			cout << "Wrong answer: " << res1 << ' ' << res2 << '\n';
			break;
		}else{
			cout << "OK\n";
		}
	}
	return 0;
}
