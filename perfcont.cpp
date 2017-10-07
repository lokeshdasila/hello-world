#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nTestcase;
	cin>>nTestcase;

	for (int i = 0; i < nTestcase; ++i)		// for each testcase
	{
		int nProblems, nParticipants;
		cin>>nProblems>>nParticipants;

		int nHard=0,nCakewalk=0;
		for (int i = 0; i < nProblems; ++i)
		{
			int nSolved;
			cin>>nSolved;
			if (nSolved<=(nParticipants/10))
				nHard++;
			else if(nSolved>=(nParticipants/2))
				nCakewalk++;
			
		}
		if((nCakewalk==1)&&(nHard==2))
			cout<<"yes\n";
		else 
			cout<<"no\n";
	}
	return 0;
}
