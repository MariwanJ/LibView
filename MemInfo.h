// MemInfo.h: interface for the CMemInfo class.
//
// Author: T.YogaRamanan

//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEMINFO_H__F50C909E_EEA2_4FC1_AFC9_1AC67CDC2436__INCLUDED_)
#define AFX_MEMINFO_H__F50C909E_EEA2_4FC1_AFC9_1AC67CDC2436__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <vector>
#include <string>
typedef struct
{
	std::string szDecorated;
	std::string szUndecorated;
}ST_INFO;

class CMemInfo
{
public:
	int DeleteAll();

	int Get(int dwIndex, std::string& szDecorated, std::string& szUndecorated);
	int Add(std::string& szDecorated, std::string& szUndecorated);
	std::vector <ST_INFO> m_ppstInfo;
	CMemInfo();
	virtual ~CMemInfo();
};

#endif // !defined(AFX_MEMINFO_H__F50C909E_EEA2_4FC1_AFC9_1AC67CDC2436__INCLUDED_)
