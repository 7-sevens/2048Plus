/** @class  GameMainScene
  * @brief  ��Ϸ������
  * @author sevens
  * @date   2015/03/01
  * @blog   http://www.developer1024.com/
  */

#ifndef __LOADING_SCENE_H__
#define __LOADING_SCENE_H__

#include "cocos2d.h"
class LoadingScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	
	virtual bool init();
	
	CREATE_FUNC(LoadingScene);

	/**
	* ���������ص�����
	* @param[in] dt 
	* @return void	�޷���ֵ
	*/
	void loadingCallBack(float dt); 
};

#endif // __LOADING_SCENE_H__