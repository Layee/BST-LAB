#include<iostream>
#include<string>
#include<fstream>
#include"userInfo.h"
#include "BST.h"
using namespace std;


int main() {
	string username, usernameInput;
	string userpassword, userpassowrdInput;
	fstream myfile;
	BST<userInfo> myBST;
	userInfo myuser;

	cout << "Enter a user name :" << endl;
	cin >> usernameInput;

	cout << "Enter the password:" << endl;
	cin >> userpassowrdInput;
	cout << endl;

	userInfo userinput;
	userinput.setUsername(usernameInput);
	userinput.setPassword(userpassowrdInput);

	myfile.open("user.txt");

	while (!myfile.eof()) {
		myfile >> username >> userpassword;
		myuser.setUsername(username);
		myuser.setPassword(userpassword);
		myBST.insert(myuser);
	}

	//myBST.inorder(cout);
	
	if (myBST.search(userinput)) {
		cout << " This user is valid" << endl;
		cout << endl;
		myBST.inorder(cout);
		cout << endl;
	}
	else {
		cout << "Invalid user "<< endl;
	}
	system("pause");
	return 0;
}