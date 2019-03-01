#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
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
	string line;
	int sum=0,b=1,s=0;
	float a1[sum+1];
	while(getline(source,line)){
		a1[sum]=atof(line.c_str());
		sum++;
	}
	source.close();
	sort(a1,sum);
	float q[sum];
	for(int i=0;i<sum;i++){
		q[i]=a1[i];
	}
	ofstream dest("result.txt");
	for(int i = 0; i < sum;i++){
		dest<<b<<":"<< q[i] << "\n";
		
		if(q[i]!=q[i+1]){
			b=b+1+s;
			s=0;
		}
		else {
			s=s+1;
		}
 }
	
	dest.close();
	
	return 0;
}

