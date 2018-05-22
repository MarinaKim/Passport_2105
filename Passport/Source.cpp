#include"Passport.h"
#include"Date.h"
#include"ForeignPassport.h"
#include<vector>
#include<fstream>

int main() {
	int n;
	cout << "Enter tasks num:";
	cin >> n;
	switch (n) {
	case 1: {
		vector<ForeignPassport> ps;
		ifstream in_file("ForeignPassport.txt");
		if (!in_file) {
			cerr << "file open error" << endl;
		}
		else
		{
			while (!in_file.eof()) {
				ForeignPassport tmp;
				in_file >> tmp;
				ps.push_back(tmp);
			}


			in_file.close();
			in_file.open("Visas.txt");
			int index, count;
			while (!in_file.eof()) {
				in_file >> index >> count;
				for (int i = 0; i < count;i++) {
					Visa v;
					in_file >> v;
					ps[index - 1].addVisa(v);
				}
			}
			for (int i = 0; i < ps.size();i++) {
				cout << ps[i] << endl;
			}
		}
	}break;

	}
	system("pause");
	return 0;
}