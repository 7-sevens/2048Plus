//////////////////////////////////////////////////////////////////////////
//  @class  SoundManager
//	@brief	sound manager
//	@author sevens
//	@date   2015-03-01
//	@blog   http://www.developer1024.com/
//////////////////////////////////////////////////////////////////////////
#ifndef SOUND_MANAGER_H_
#define SOUND_MANAGER_H_


enum SoundType
{
	SOUND_TYPE_GAMEWIN,
	SOUND_TYPE_GAMELOSE,
	SOUND_TYPE_MOVE,
	SOUND_TYPE_MERGE,
};

class SoundManager
{
public:
	static SoundManager* getInstance();

protected:
	SoundManager();
	~SoundManager();

public:
	// ��Ч���ؿ���
	void ChangeSoundSwitch(bool bSoundOn);

	// ��������
	void PlayMusic(SoundType type);

	// ������Ч
	void PlayEffect(SoundType type);

private:
	bool _bSoundOn;
};

#endif // SOUND_MANAGER_H_