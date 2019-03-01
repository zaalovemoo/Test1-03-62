#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	ifstream source("score1.txt");
	ofstream dest("reslut.txt");
	string line;
	int sum=0;
	float a1[sum+1];
	while(getline(source,line)){
		a1[sum]=atof(line.c_str());
		sum++;
	}
	for(int i = 0; i < sum;i++){
		dest << a1[i] << "\n";
	}
	dest.close();
	
	return 0;
}

