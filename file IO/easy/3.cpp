#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void removeComments(string in_name, string out_name) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	while(getline(fin, line)) {
		int pos = line.find('#');
		if(pos>=0) fout<<line.substr(0,pos)<<"\n";
		else fout << line << "\n";
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	removeComments(in_name, out_name);
}
