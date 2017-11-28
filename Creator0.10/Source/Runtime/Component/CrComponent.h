/*
CreatorEngine
Class CrTransform
Payne
*/

#ifndef _CREATOR_COMPONENT_H
#define _CREATOR_COMPONENT_H

#include <Core/CrObject.h>

class DLL_ClASS IBehaviour
{
public:
	virtual void Awake() = 0;
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Disabled() = 0;
	virtual void Enable() = 0;
	virtual void Destroy() = 0;

	virtual void OnGUI() = 0;
	virtual void OnInspectionGUI() = 0;
};

class CrGameObject;
class DLL_ClASS CrComponent : public CrObject, public IBehaviour
{
	friend class CrGameObject;
private:
	void SetGameObject(CrGameObject * pointer);

protected:
	CrComponent();
	~CrComponent();

public:

	virtual void Awake();
	virtual void Start();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Enable();
	virtual void Disabled();
	virtual void Destroy();

	virtual void OnGUI();
	virtual void OnInspectionGUI();
	
	CrGameObject * GetGameObject();

	virtual int GetInstanceCountLimit();


	//void AddListen();

protected:
	CrGameObject * m_pGameObject;	
};

#endif