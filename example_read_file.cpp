#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
		result << line << "\n";
	}
	result.close;
	source.close
	return 0;
}

