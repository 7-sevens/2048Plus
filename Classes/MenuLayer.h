/** @class  GameMainScene
  * @brief  ��Ϸ������
  * @author sevens
  * @date   2015/03/01
  * @blog   http://www.developer1024.com/
  */

#ifndef __MENU_LAYER_H__
#define __MENU_LAYER_H__

#include "cocos2d.h"


class MenuLayer :public cocos2d::LayerColor
{
public:
	static MenuLayer* create(const cocos2d::Color4B& color);
	virtual bool initWithColor(const cocos2d::Color4B& color);
	//��������
	virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event); //ע������Ҫ�������ռ�������cocos2d
	virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
};

#endif // __MENU_LAYER_H__