#include "CrShader.h"

#include "CrDefine.h"
#include <string>
#include <fstream>

CrShader::CrShader()
{
}

CrShader::~CrShader()
{
}

void CrShader::UseShader()
{
	glUseProgram(m_uShaderID);
}

