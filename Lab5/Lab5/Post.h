#pragma once
#include <iostream>
#include <string>
using namespace  std;

class Post
{
private:
	string _title;
	string _text;
public:
	void setTitle(string _title);
	void setText(string _text);

	string getTitle();
	string getText();

	Post(string _title, string _text);
	Post();

};


