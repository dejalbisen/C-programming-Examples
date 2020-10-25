#include<iostream>
using namespace std;
int main()
{
	char c;
	int islowercasevowel,isuppercasevowel;
	cout<<"enter an alphabet";
	cin>>c;
	islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	isuppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(islowercasevowel||isuppercasevowel)
	cout<<c<<"is a vowel";
	else
	cout<<c<<"is a consonant";
	return 0;
}
