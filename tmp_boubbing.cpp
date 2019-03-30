#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void sort(vector<int> &a)
{
	for(int i=0;i<a.size();i++)
		for(int j=0;j<a.size()-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);	
		}

}

void sort1(vector<int> &a)
{
	for(int i=0;i<a.size();i++)
		for(int j=i+1;j<a.size();j++)
		{
			if(a[j]<a[i])
				swap(a[j],a[i]);	
		}

}

void sort2(vector<int> &a)
{
	for(int i=1;i<a.size();i++)
		for(int j=a.size()-2;j>=i-1;j--)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);	
		}

}


int main()
{
	int t[]={9,8,7,6,5,4,3,2,1,0};
	vector<int> a(t,t+10);
	vector<int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	sort2(a);
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;

}
