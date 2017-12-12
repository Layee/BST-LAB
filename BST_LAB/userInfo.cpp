#include "userInfo.h"



userInfo::userInfo()
{
}



void userInfo::setUsername(string username) {
	userName = username;
}



void userInfo::setPassword(string newpassword) {
	   password  = newpassword;
}



bool userInfo:: operator == (userInfo& newUser) {
	return  (userName == newUser.getUsername());
}




