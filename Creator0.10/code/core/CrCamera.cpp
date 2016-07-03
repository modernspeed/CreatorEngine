#include "CrCamera.h"
#include "CrEngine.h"

CrCamera::CrCamera()
	:m_m4Projection(1.f)
{
	m_sName = "Camera";
	m_m4Projection = glm::perspective(45.f, 16.f / 9.f, 0.1f, 100.f);
	CrEngine::Director()->AddCamera(this);
}

CrCamera::~CrCamera()
{
	CrEngine::Director()->RemoveCamera(this);
}

glm::mat4 CrCamera::GetVP()
{
	m_m4VP = m_m4Projection * GetTransform()->GetWorldToLocalMatrix();
	return m_m4VP;
}