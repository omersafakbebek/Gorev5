#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	string text;
	ifstream bfile("b.txt");
	ifstream afile("A.txt");
	vector<string> bvector;
	bfile.clear();
	vector<vector<string>> amatrix;
	int N=0;
	string line;
	while(getline(bfile,line)){
		bvector.push_back(line);
		N+=1;
	}	
	bfile.close();
	while(getline(afile,line)){	
		vector<string> row;	
		for(int i=0; i<N; i++){			
			string sub=line.substr(0,line.find(" "));
			line = line.substr(line.find(" ")+1,-1);			
			row.push_back(sub);
		}
		amatrix.push_back(row);
	}
	afile.close();
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			cout << amatrix[i][j]+" ";
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 0; i<N; i++){
		cout << bvector[i]+"\n";
	}	
}
