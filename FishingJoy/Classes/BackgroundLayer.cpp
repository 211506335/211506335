#include "BackgroundLayer.h"

BackgroundLayer::BackgroundLayer(void)
{
}

bool BackgroundLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	CCSprite *bgSprite = CCSprite::create("bj01_01-ipadhd.png"/*"bj02_01-ipadhd.png"*/);/*添加背景*/
	this->addChild(bgSprite);
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	bgSprite->setPosition(CCPoint(winSize.width / 2, winSize.height / 2));
	return true;
}

BackgroundLayer::~BackgroundLayer(void)
{
}
