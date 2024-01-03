// MemInfo.cpp: implementation of the CMemInfo class.
//
// Author: T.YogaRamanan

//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MemInfo.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMemInfo::CMemInfo()
{
	m_ppstInfo.clear();
}

CMemInfo::~CMemInfo()
{
	DeleteAll();
}

int CMemInfo::Add(std::string& szDecorated, std::string& szUndecorated)
{
	ST_INFO temp;
	temp.szDecorated = szDecorated;
	temp.szUndecorated = szUndecorated;
	m_ppstInfo.push_back(temp);
	return 0;
}

int CMemInfo::DeleteAll()
{
	m_ppstInfo.clear();
	return 0;
}

int CMemInfo::Get(int dwIndex, std::string& szDecorated, std::string& szUndecorated)
{
	szDecorated = m_ppstInfo[dwIndex].szDecorated;
	szUndecorated = m_ppstInfo[dwIndex].szUndecorated;
	return 0;
}