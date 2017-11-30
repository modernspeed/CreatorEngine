/*
CreatorEngine
Class CrMeshRender : CrComponent
Payne
*/

#ifndef _CREATOR_MESHRENDER_H
#define _CREATOR_MESHRENDER_H

#include <CrComponent.h>
#include <CrMesh.h>
#include <CrMaterial.h>

class DLL_ClASS CrMeshRender : public CrComponent
{
public:
	CrMeshRender();
	~CrMeshRender();

public:
	
	EasyGetSet(int8_t, m_CastShadows, CastShadows);				   //Ͷ��Ӱ��
	EasyGetSet(int8_t, m_ReceiveShadows, ReceiveShadows);		   //����Ӱ��
	EasyGetSet(int8_t, m_UseLightProbes, UseLightProbes);		   //�ƹ�̽����
	EasyGetSet(int8_t, m_ReflectionProbes, ReflectionProbes);	   //����̽ͷ

	void SetMesh(CrMesh * mesh);
	CrMesh * GetMesh();

	void SetMaterial(CrMaterial * material);
	CrMaterial * GetMaterial();

	void Draw(glm::fmat4 & mvp, glm::vec3 & eye, glm::fmat4 & mv, glm::fmat4 & v);
protected:
	std::vector<CrMaterial *> m_pMaterials;
	CrMesh * m_pMesh;
};


#endif