//////////////////////////////////////////////////////////////////////////
//  @class  GameMainScene
//	@brief	game main scene
//	@author sevens
//	@date   2015-03-01
//	@blog   http://www.developer1024.com/
//////////////////////////////////////////////////////////////////////////
#ifndef GAME_MAIN_SCENE_H_
#define GAME_MAIN_SCENE_H_

#include "cocos2d.h"
#include "Card.h"
#include "GameDef.h"

class GameMainScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(GameMainScene);

	virtual bool onTouchBegan(cocos2d::Touch *pTouch, cocos2d::Event *pEvent);
	virtual void onTouchEnded(cocos2d::Touch *pTouch, cocos2d::Event *pEvent);

public:
	// ������Ϸ��Ƭ�������
	void CreateGrid();

	void RandomCard();

	bool MoveLeft();
	bool MoveRight();
	bool MoveUp();
	bool MoveDown();

private:
	// ������Ϸģʽ������Ϸ�������������
	void matchGameModeData();

	void updateDeadlineTime(float dt);

	void checkGameResult();

private:
	Card*	_cardArray[MAX_SIDE_GRID_COUNT][MAX_SIDE_GRID_COUNT];			//��Ƭ����
	Card*	_cardActionArray[MAX_SIDE_GRID_COUNT][MAX_SIDE_GRID_COUNT];	//��Ƭ��������

	LabelTTF* _deadlineLabel;

	timeval	_timeval;

	Point	_touchBeginPos;

	double	_iCardSideLength;			//��Ƭ�߳�
	int		_iSideGridCount;			//ÿһ�У��У�������Ŀ

	double	_GridBGSideLength;			//���񱳾��߳�

	int		_iGameTime;					//��ʱģʽ��Ϸʱ����second��
};

#endif // GAME_MAIN_SCENE_H_