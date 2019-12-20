
// MFCApplication3Dlg.h : файл заголовка
//

#pragma once
#include "afxwin.h"


// диалоговое окно CMFCApplication3Dlg
class CMFCApplication3Dlg : public CDialogEx
{
// Создание
public:
	CMFCApplication3Dlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CString m_stat1;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
	CStatic m_stat2;
	CStatic m_st11;
	CStatic m_st12;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
//	afx_msg void OnBnClickedButton81();
//	afx_msg void OnBnDoubleclickedButton81();
	CString m_stat81;
	afx_msg void OnStnClickedStatic81();
//	afx_msg void OnBnSetfocusButton81();
//	afx_msg void OnBnKillfocusButton81();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnDoubleclickedButton8();
	CString m_stat3;
	afx_msg void OnBnSetfocusButton8();
	afx_msg void OnBnKillfocusButton8();
	afx_msg void OnBnClickedButton9();
	CButton m_but;
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	CButton m_vis;
	afx_msg void OnBnClickedButton14();
	CString m_stat10;
	BOOL m_ch1;
	afx_msg void OnBnClickedCheck1();
	BOOL m_ch2;
	CButton m_ch3;
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck5();
	int m_stat11;
	CButton m_ch4;
	afx_msg void OnBnClickedCheck6();
	CButton m_ch5;
	afx_msg void OnBnClickedButton15();
};
