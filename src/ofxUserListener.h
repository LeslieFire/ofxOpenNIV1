#ifndef _H_OFXUSERLISTENER
#define _H_OFXUSERLISTENER

class ofxUserListener{
public:
	virtual void UserIn(int id) = 0;
	virtual void UserOut(int id) = 0;
};

#endif