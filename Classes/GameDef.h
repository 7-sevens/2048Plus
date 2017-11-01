#ifndef GAME_DEF_H_
#define GAME_DEF_H_

#define GRID_SPACE	5			// ������
#define MAX_SIDE_GRID_COUNT	8	// ÿһ��(��)���������

// ��Ϸģʽ
enum ENM_GAME_MODE
{
	GAME_MODE_NORMAL_4X4,		//����ģʽ4x4
	GAME_MODE_NORMAL_5X5,		//����ģʽ5x5
	GAME_MODE_NORMAL_6X6,		//����ģʽ6x6

	GAME_MODE_DEADLINE_5MIN,	//��ʱģʽ5MIN
	GAME_MODE_DEADLINE_10MIN,	//��ʱģʽ10MIN
	GAME_MODE_DEADLINE_15MIN,	//��ʱģʽ15MIN

	GAME_MODE_ENDLESS,			//�޾�ģʽ
};

#endif // GAME_DEF_H_