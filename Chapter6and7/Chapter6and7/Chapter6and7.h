
// Chapter6and7.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CChapter6and7App:
// � ���������� ������� ������ ��. Chapter6and7.cpp
//

class CChapter6and7App : public CWinApp
{
public:
	CChapter6and7App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CChapter6and7App theApp;