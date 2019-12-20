
// Chapter9and10.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CChapter9and10App:
// О реализации данного класса см. Chapter9and10.cpp
//

class CChapter9and10App : public CWinApp
{
public:
	CChapter9and10App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CChapter9and10App theApp;