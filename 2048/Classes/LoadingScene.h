//////////////////////////////////////////////////////////////////////////
//  @class  LoadingScene
//	@brief	game loading scene
//	@author sevens
//	@date   2015-03-01
//	@blog   http://www.developer1024.com/
//////////////////////////////////////////////////////////////////////////
#ifndef LOADING_SCENE_H_
#define LOADING_SCENE_H_

#include "cocos2d.h"


class LoadingScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();
	
	CREATE_FUNC(LoadingScene);

	/**
	* ��Դ���ػص�����
	* @param[in] dt
	* @return void	�޷���ֵ
	*/
	void onLoadingCallBack(float dt);

protected:
private:
};

#endif // LOADING_SCENE_H_