
// Chapter5.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CChapter5App:
// � ���������� ������� ������ ��. Chapter5.cpp
//

class CChapter5App : public CWinApp
{
public:
	CChapter5App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CChapter5App theApp;