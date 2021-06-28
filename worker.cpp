#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	int x = stoi(argv[1]);
	int y = stoi(argv[2]);
	
	int sol = 0;
	
	for (int n = 1; n <= x; n++)		//Summation from 1-x
	{
		sol += y;						//Applying formula
	}

	cout<<endl<<"Summation = "<<sol<<endl;
}
