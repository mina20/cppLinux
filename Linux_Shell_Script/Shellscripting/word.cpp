#include<iostream>
#include<cstring>
using namespace std;

class word
{
	private: 
		char *_ps;
		int _count;
	public:
		word(char* ps,int c=1):_ps(new char [strlen(ps) + 1]),_count(c)
					{
						if(ps) 
						strcpy(_ps,ps);
							else
							{
								_ps = 0;
								_count = 0;
							}
					}
			
											


};
int main()
{
	char *name="Swhatabhau";
	int c=3;
	word w(name,3);
	cout<< word w() <<endl;
return 0;

}

