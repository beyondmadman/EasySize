
// EasySize.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CEasySizeApp: 
// �йش����ʵ�֣������ EasySize.cpp
//

class CEasySizeApp : public CWinApp
{
public:
	CEasySizeApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CEasySizeApp theApp;