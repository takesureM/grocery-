#include "Post.h"


Post::Post(string _title, string _text)
{
	setTitle(_title);
	setText(_text);
}

Post::Post()
{
	setTitle("");
	setText("");
}

void Post::setTitle(string _title)
{
	this->_title = _title;
}

void Post::setText(string _text)
{
	this->_text = _text;
}

string Post::getText()
{
	return this->_text;
}

string Post::getTitle()
{
	return this->_title;
}