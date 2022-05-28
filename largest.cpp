#include <iostream>
using namespace std;
int main() {
float n1, n2, n3;
cout << "Enter three numbers: ";
cin >> n1 >> n2 >> n3;
if((n1 >= n2) && (n1 >= n3))
cout << "Largest number: " << n1;
else if ((n2 >= n1) && (n2 >= n3))
cout << "Largest number: " << n2;
else
cout << "Largest number: " << n3<<endl;

// I AM DEVANSH I AM APPENDING A NEW PROGRAM WHICH PRINTS THE FIBONACCI MEMBERS TILL THE NUMBER ENTERED!!!!

int none=0,nto=1,nt,n;
cout<<"Enter the no. till which fibonacci series is to be printed"<<endl;
cin>>n;
for(int i =0;i<n;i++)
{
cout<<n1<<"\n";
nt=none+nto;
none=nto;
nto=nt;

}
return 0;
}

