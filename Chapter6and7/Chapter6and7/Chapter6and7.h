
// Chapter6and7.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CChapter6and7App:
// О реализации данного класса см. Chapter6and7.cpp
//

class CChapter6and7App : public CWinApp
{
public:
	CChapter6and7App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CChapter6and7App theApp;