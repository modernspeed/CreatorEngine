#include <CrComponent.h>

CrComponent::CrComponent()
{
}


CrComponent::~CrComponent()
{
}

void CrComponent::Awake()
{

}
void CrComponent::Start()
{

}
void CrComponent::Update()
{

}
void CrComponent::LateUpdate()
{

}
void CrComponent::Enable()
{

}
void CrComponent::Disabled()
{

}
void CrComponent::Destroy()
{

}

void CrComponent::SetGameObject(CrGameObject * pointer)
{
	m_pGameObject = pointer;
}

CrGameObject * CrComponent::GetGameObject()
{
	return m_pGameObject;
}

//0 = No Limit
//>0 = Limit count
int CrComponent::GetInstanceCountLimit()
{
	return 0;
}