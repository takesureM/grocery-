#include "PaidUser.h"

PaidUser::PaidUser(int _id, string _login, string _password, Post* _posts, int _postsCount):User(_id, _login, _password)
{
	setPosts(_posts, _postsCount);
	
}

PaidUser::PaidUser(int _id, string _login, string _password):PaidUser(_id, _login, _password, nullptr, 0)
{
	
	setPosts(nullptr, 0);
}

void PaidUser::setPosts(Post* _posts, int _postsCount)
{
	if (_postsCount < 0)
	{
		throw exception("Posts count must be greater than zero");
	}
	this->_posts = _posts;
	this->_postsCount = _postsCount;
}

int PaidUser::getPostsCount()
{
	return this->_postsCount;
}