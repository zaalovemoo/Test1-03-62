#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source("score1.txt");
	ofstream dest("reslut1.txt");
	string line;
	int sum=0;
	float a1[sum+1];
	while(getline(source,line)){
		a1[sum]=atof(line.c_str());
		sum++;
	}
	sort(a1,sum);
	dest<<a1[15]<<"\n";
	dest.close();
	source.close();
	return 0;
}
