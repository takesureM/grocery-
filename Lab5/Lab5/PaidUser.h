#pragma once
#include "User.h"
#include "Post.h"

class PaidUser:public User
{

private:
	Post* _posts;
	int _postsCount;

public:

	void setPosts(Post* _post, int _postsCount);

	Post* getPosts();
	int getPostsCount();

	PaidUser(int id, string _login , string _password, Post* _posts, int _postsCount);
	PaidUser(int id, string _login, string _password);



};


