#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char table[8][8];

void showTable();
void randomTable(char);

int main(){
for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
	table[i][j]='A'+i+j;
	}
}
for (int i=0;i<8;i++){
	for(int j=0;j<8;j++){
	randomTable(table[i][j]);
}
}
	
	srand(time(0));	
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomTable(char table){
	table=
}

	


