#include<iostream>
using namespace std;
#include<string>


class userInfo
{
private:
	string userName;
	string password;
public:
	userInfo();
	string getUsername () { return userName; }
	string getPassword() { return password; }

	void setUsername(string username);
	void setPassword(string password);
	bool operator == (userInfo& newUser);

	friend  bool operator < (const userInfo& userone, const userInfo& userTwo) {
		return userone.userName < userTwo.userName;
   }

	 friend ostream& operator<<(ostream& outs, userInfo& less) {
	 outs << less.getUsername() << endl;
	 return outs;
	 }


	friend istream& operator >>(istream& is, userInfo& greater)
	 {
		 is >> greater.userName >> greater.userName >> greater.userName;
		 return is;
	 }




		/*
		bool operator == (Car& compareLicense);
	bool operator != (Car& compareLicense);
	*/
};




