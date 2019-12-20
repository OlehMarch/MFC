
// Chapter6and7Dlg.h : файл заголовка
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// диалоговое окно CChapter6and7Dlg
class CChapter6and7Dlg : public CDialogEx
{
// Создание
public:
	CChapter6and7Dlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_CHAPTER6AND7_DIALOG };

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
	afx_msg LONG OnHotKey(UINT nID, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_list;
	afx_msg void OnLbnSelchangeList1();
	CString m_edit1;
	CString m_stat1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLbnDblclkList1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	CString m_stat2;
	CComboBox m_combo;
	afx_msg void OnCbnSelendcancelCombo1();
	afx_msg void OnCbnSelendokCombo1();
	afx_msg void OnCbnEditchangeCombo1();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	CString m_edit2;
	CScrollBar m_scroll;
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	CScrollBar m_scroll2;
	CButton m_but;
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	CScrollBar m_scroll3;
	CScrollBar m_scroll4;
	CSliderCtrl m_slider;
	CStatic m_stat3;
	CSliderCtrl m_slider2;
	CProgressCtrl m_prog1;
	CProgressCtrl m_prog2;
	CSliderCtrl m_slider3;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CButton m_check;
	afx_msg void OnDeltaposSpin4(NMHDR *pNMHDR, LRESULT *pResult);
	CProgressCtrl m_prog3;
	CSpinButtonCtrl m_spinb;
	afx_msg void OnDeltaposSpin1(NMHDR *pNMHDR, LRESULT *pResult);
	CStatic m_stat4;
	CHotKeyCtrl m_hot1;
	CHotKeyCtrl m_hot2;
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	CString m_stat5;
	CIPAddressCtrl m_ip;
	afx_msg void OnBnClickedButton18();
	BYTE m_b1;
	BYTE m_b2;
	BYTE m_b3;
	BYTE m_b4;
	afx_msg void OnBnClickedButton19();
	CAnimateCtrl m_anim;
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton23();
	CString m_stat6;
	afx_msg void OnAcnStartAnimate2();
	afx_msg void OnAcnStopAnimate2();
};
