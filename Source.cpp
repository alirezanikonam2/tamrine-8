#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
	int j = 0, k = 0,b=0;
	string buf;
	struct mo{
		int code = 0;
		string name = "";
		int ghey = 0;
		int kilo = 0;
	};

	mo mive[3];

	ifstream in("fil.txt");

	while (getline(in, buf))
	{
		string word[4];
		k++;
		for (int i = 0; i < buf.size(); i++)
		{
			if (buf[i] == ',')
			{

				switch (j)
				{

				case 0:
					mive[j].code = stoi(word[j]);


				case 1:
					mive[j].name = word[j];


				case 2:
					mive[j].ghey = stoi(word[j]);


				case 3:
					mive[j].kilo = stoi(word[j]);


				}

				j++;
			}

				if (buf[i] != ',')
				{
					word[j] += buf[i];
				}



				}
				
		
		
		}
		
	
	in.close();


	for (int f = 0; f < 3; f++)
	{
		cout << mive[f].code << endl << mive[f].name << endl << mive[f].ghey << endl << mive[f].kilo << endl;
	}




















	system("pause");
	return 0;
}