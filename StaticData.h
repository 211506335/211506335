//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : StaticData.h
//  @ Date : 2017/9/30
//  @ Author : 211506335
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H


class StaticData {
public:
	StaticData sharedStaticData();
	void purge();
	int intValueFromKey();
	char stringValueFromKey();
	float floatValueFromKey();
	bool booleanValueFromKey();
	cocos2d::CCPoint pointValueFromKey();
	cocos2d::CCRect rectValueFromKey();
	cocos2d::CCSize sizeValueFromKey();
protected:
	cocos2d::CCDictionary _dictionary;
	std::string _staticFileName;
	bool init();
private:
	void StaticData();
	StaticData();
};

#endif  //_STATICDATA_H
