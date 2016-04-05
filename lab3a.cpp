#include"lab3a.h"
#include<string>
using namespace std;
void labA::sort(int a[9])
{
	vector<int>vec(9);
int in,item;
for(int i=0;i<9;i++)
{
	vec.at(i)=a[i];
}
for(int i=0;i<9;i++)
{
	in=vec.at(i);
	item=i;
	while((item>0)&&(vec.at(item-1)>in))
	{
		vec.at(item)=vec.at(item-1);
		--item;
	}
	vec.at(item)=in;
}
	int total=vec.at(8)+vec.at(7)+vec.at(6)+vec.at(5)+vec.at(4);
	cout<<total<<endl;


}
