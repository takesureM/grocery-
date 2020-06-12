#include "User.h"

User::User(int _id, string _login, string _password)
{
	setId(_id);
	setLogin(_login);
	setPassword(_password);
}

User::User()
{
	setId(0);
	setLogin("");
	setPassword("");
}

void User::setId(int _id)
{
	this->_id = _id;
}

void User::setLogin(string _login)
{
	for (int i = 0; i < _login.size(); i++)
	{
		if (_login[i] == '*' || _login[i] == ':' || _login[i] == '$' || _login[i] == '@' 
			|| _login[i] == '!' || _login[i] == '#' || _login[i] == '%' || _login[i] == '&' 
			|| _login[i] == '^' || _login[i] == '(' || _login[i] == ')' || _login[i] == '~')
		{
			throw exception("Login should not contain characters!.. Hatisi PAMWEPO");
		}
	}
	this->_login = _login;
}

void User::setPassword(string _password)
{
	this->_password = _password;
}

int User::getId()
{
	return this->_id;
}

string User::getLogin()
{
	return this->_login = _login;
}

string User::getPasword()
{
	return this->_password;
}

bool User::IsCorrectPassword(string _password)
{
	if (_password == this->getPasword())
	{
		return true;
	}
	return false;
	
}

User* Login(User** users, int userCount, string enteredLogin, string enteredPassword)
{
	for (int i = 0; i < userCount; i++)
	{
		if (users[i]->getLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Incorrect password");
			}
		}
	}
	return nullptr;
}