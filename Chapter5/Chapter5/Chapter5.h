
// Chapter5.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CChapter5App:
// О реализации данного класса см. Chapter5.cpp
//

class CChapter5App : public CWinApp
{
public:
	CChapter5App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CChapter5App theApp;