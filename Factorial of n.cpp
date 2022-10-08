#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
	{
		f*=i;
	}
	return f;
}

int main()
{
	int n;
	cout<<"Enter The Number:";
	cin>>n;
	
	int ans=factorial(n);
	cout<<"The factorial of "<<n<<" is: "<<ans;
	
	getch();
	return 0;
}
