#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void InFiel(string& str)
{
	ofstream f("t2.txt");
	f << str;
	f.close();
}

string Del(string& str)
{
	size_t len = str.length();
	size_t start = 0, finish = len;
	int pos = str.find(' ', start);
	if (pos == -1)
	{
		return str;
	}
	start = pos;
	int pos2 = str.find_first_not_of(' ', start);
	str.erase(pos, pos2 - pos);
	pos2 = str.rfind(' ', finish);
	finish = pos2;
	pos = str.find_last_not_of(' ', finish);
	str.erase(pos + 1, pos2 - pos);
	start = 0;
	while (str.find(' ', start) != -1)
	{
		pos = str.find(' ', start);
		pos2 = str.find_first_not_of(' ', pos);
		str.replace(pos, pos2 - pos, 1, ' ');

		start = pos + 1;
	}
	return str;

}
string FromFile(char* fname)
{
	ifstream fin(fname);
	string s;
	getline(fin, s);
	fin.close();
	return s;
}


int main()
{
	char fname[] = "t1.txt";
	string s=FromFile(fname);
	s=Del(s);
	InFiel(s);
	return 0;
}