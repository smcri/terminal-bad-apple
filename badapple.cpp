#include<bits/stdc++.h>
#include <unistd.h>

using namespace std;

int main()
{
	fstream badapple;
	badapple.open("input.txt");
	string line;
	string out[28];
	int count = 0;
	while(badapple>>line)
	{
		if(count == (27))
		{
			count = 0;
			usleep(33333);
			//cout << "\033[2J\033[1;1H";
		}
		for(int i = 0;i<line.length();i++)
		{
			if(line[i] == '0')
			{
				line[i] = ' ';
			}
		}
		cout<<line<<endl;
		count++;
	}
} 
