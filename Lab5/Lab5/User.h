#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Post.h"

using namespace std;

class User 
{

private:
	int _id;
	string _login;
	string _password;
	

public:
	void setLogin(string _login);
	void setPassword(string _password);
	void setId(int _id);

	int getId();
	string getLogin();
	string getPasword();

	User(int _id, string _login, string _password);
	User();
	bool IsCorrectPassword(string _password);

};

User* Login(User** users, int usersCount, string enteredLogin, string enteredPassword);


