
// Chapter9and10.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CChapter9and10App:
// � ���������� ������� ������ ��. Chapter9and10.cpp
//

class CChapter9and10App : public CWinApp
{
public:
	CChapter9and10App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CChapter9and10App theApp;