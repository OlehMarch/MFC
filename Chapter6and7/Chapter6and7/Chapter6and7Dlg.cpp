
// Chapter6and7Dlg.cpp : файл реализации
//

#include "stdafx.h"
#include "Chapter6and7.h"
#include "Chapter6and7Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// диалоговое окно CChapter6and7Dlg



CChapter6and7Dlg::CChapter6and7Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChapter6and7Dlg::IDD, pParent)
	, m_edit1(_T(""))
	, m_stat1(_T(""))
	, m_stat2(_T(""))
	, m_edit2(_T(""))
	, m_stat5(_T(""))
	, m_b1()
	, m_b2()
	, m_b3()
	, m_b4()
	, m_stat6(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CChapter6and7Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_STATIC1, m_stat1);
	DDX_Text(pDX, IDC_STATIC2, m_stat2);
	DDX_Control(pDX, IDC_COMBO1, m_combo);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_SCROLLBAR1, m_scroll);
	DDX_Control(pDX, IDC_SCROLLBAR2, m_scroll2);
	DDX_Control(pDX, IDC_BUTTON14, m_but);
	DDX_Control(pDX, IDC_SCROLLBAR4, m_scroll3);
	DDX_Control(pDX, IDC_SCROLLBAR3, m_scroll4);
	DDX_Control(pDX, IDC_SLIDER1, m_slider);
	DDX_Control(pDX, IDC_STATIC3, m_stat3);
	DDX_Control(pDX, IDC_SLIDER2, m_slider2);
	DDX_Control(pDX, IDC_PROGRESS1, m_prog1);
	DDX_Control(pDX, IDC_PROGRESS2, m_prog2);
	DDX_Control(pDX, IDC_SLIDER3, m_slider3);
	DDX_Control(pDX, IDC_CHECK1, m_check);
	DDX_Control(pDX, IDC_PROGRESS3, m_prog3);
	DDX_Control(pDX, IDC_SPIN2, m_spinb);
	DDX_Control(pDX, IDC_STATIC4, m_stat4);
	DDX_Control(pDX, IDC_HOTKEY1, m_hot1);
	DDX_Control(pDX, IDC_HOTKEY2, m_hot2);
	DDX_Text(pDX, IDC_STATIC5, m_stat5);
	DDX_Control(pDX, IDC_IPADDRESS1, m_ip);
	DDX_Text(pDX, IDC_EDIT4, m_b1);
	DDX_Text(pDX, IDC_EDIT5, m_b2);
	DDX_Text(pDX, IDC_EDIT6, m_b3);
	DDX_Text(pDX, IDC_EDIT7, m_b4);
	DDX_Control(pDX, IDC_ANIMATE2, m_anim);
	DDX_Text(pDX, IDC_STATIC6, m_stat6);
}

BEGIN_MESSAGE_MAP(CChapter6and7Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LIST1, &CChapter6and7Dlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &CChapter6and7Dlg::OnBnClickedButton1)
	ON_LBN_DBLCLK(IDC_LIST1, &CChapter6and7Dlg::OnLbnDblclkList1)
	ON_BN_CLICKED(IDC_BUTTON2, &CChapter6and7Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CChapter6and7Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CChapter6and7Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CChapter6and7Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CChapter6and7Dlg::OnBnClickedButton6)
	ON_CBN_SELENDCANCEL(IDC_COMBO1, &CChapter6and7Dlg::OnCbnSelendcancelCombo1)
	ON_CBN_SELENDOK(IDC_COMBO1, &CChapter6and7Dlg::OnCbnSelendokCombo1)
	ON_CBN_EDITCHANGE(IDC_COMBO1, &CChapter6and7Dlg::OnCbnEditchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON7, &CChapter6and7Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CChapter6and7Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CChapter6and7Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CChapter6and7Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CChapter6and7Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CChapter6and7Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CChapter6and7Dlg::OnBnClickedButton13)
	ON_WM_HSCROLL()
	ON_WM_VSCROLL()
	ON_WM_TIMER()
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN4, &CChapter6and7Dlg::OnDeltaposSpin4)
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN1, &CChapter6and7Dlg::OnDeltaposSpin1)
	ON_BN_CLICKED(IDC_BUTTON16, &CChapter6and7Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CChapter6and7Dlg::OnBnClickedButton17)
	ON_MESSAGE(WM_HOTKEY, OnHotKey)
	ON_BN_CLICKED(IDC_BUTTON18, &CChapter6and7Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CChapter6and7Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON14, &CChapter6and7Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON20, &CChapter6and7Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CChapter6and7Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CChapter6and7Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON24, &CChapter6and7Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON23, &CChapter6and7Dlg::OnBnClickedButton23)
	ON_ACN_START(IDC_ANIMATE2, &CChapter6and7Dlg::OnAcnStartAnimate2)
	ON_ACN_STOP(IDC_ANIMATE2, &CChapter6and7Dlg::OnAcnStopAnimate2)
END_MESSAGE_MAP()


// обработчики сообщений CChapter6and7Dlg

CRect rectGlobal, rectGlobal2;

BOOL CChapter6and7Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	m_list.AddString(_T("111111111"));
	m_list.AddString(_T("2222222"));
	m_list.AddString(_T("333 333 333 333"));
	m_list.AddString(_T("44444 44444"));
	m_list.AddString(_T("555555"));
	m_list.AddString(_T("66 66"));
	m_list.AddString(_T("77777777 7777777 7777 777 77 77 7 7 7"));
	m_list.AddString(_T("8888"));
	m_list.AddString(_T("99"));
	m_list.AddString(_T("00000 00000 000000 0000000 00 0 0 0 000000 00000 0 0 00"));
	m_list.SetColumnWidth(150);
	m_scroll.SetScrollRange(0, 100, TRUE);
	m_scroll2.SetScrollRange(0, 80, TRUE);
	m_scroll3.SetScrollRange(0, 100, TRUE);
	m_scroll4.SetScrollRange(0, 100, TRUE);
	m_but.GetWindowRect(rectGlobal);
	ScreenToClient(rectGlobal);
	m_stat3.GetWindowRect(rectGlobal2);
	ScreenToClient(rectGlobal2);
	m_slider.SetRange(0, 100, TRUE);
	m_slider2.SetRange(0, 80, TRUE);
	m_slider.SetSelection(15, 75);
	m_slider.SetTicFreq(10);
	m_prog1.SetRange(0, 200);
	m_prog2.SetRange(0, 200);
	m_slider3.SetRange(0, 200, TRUE);
	SetTimer(1, 100, NULL);
	m_prog2.SetStep(10); //10 is default value
	m_spinb.SetRange(0, 200);
	m_spinb.SetBase(16);
	m_hot1.SetRules(HKCOMB_S, HOTKEYF_ALT);

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CChapter6and7Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CChapter6and7Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CChapter6and7Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CChapter6and7Dlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	m_list.InsertString(m_list.GetCurSel(), m_edit1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnLbnSelchangeList1()
{
	m_list.GetText(m_list.GetCurSel(), m_stat1);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnLbnDblclkList1()
{
/* *   нужно только если нет OnLbnSelchangeList  * *
 *	m_list.GetText(m_list.GetCurSel(), m_stat1);   *
 *	UpdateData(FALSE);							   *
 * * * * * * * * * * * * * * * * * * * * * * * * * */
	MessageBox(m_stat1, _T(""), MB_OK);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton2()
{
	m_list.ResetContent();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton3()
{
	UpdateData(TRUE);
	if (m_list.FindString(-1, m_edit1) == LB_ERR) {
		MessageBox(_T("Nothing was found"), _T(""), MB_OK);
	}
	else {
		MessageBox(_T("String was found"), _T(""), MB_OK);
	}
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton4()
{
	UpdateData(TRUE);
	if (m_list.SelectString(-1, m_edit1) == LB_ERR) {
		MessageBox(_T("Nothing was found"), _T(""), MB_OK);
	}
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton5()
{
	m_list.DeleteString(m_list.GetCurSel());
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton6()
{
	m_list.Dir(0x0010, _T("*.*"));
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnCbnSelendcancelCombo1()
{
	m_stat2 = "Cancel";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnCbnSelendokCombo1()
{
	m_stat2 = "OK";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnCbnEditchangeCombo1()
{
	m_combo.GetWindowText(m_stat2);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton7()
{
	m_combo.SetDroppedWidth(m_combo.GetDroppedWidth() * 2);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton8()
{
	m_combo.GetLBText(2, m_stat2);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton9()
{
	UpdateData(TRUE);
	m_combo.InsertString(0, m_edit2);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton10()
{
	m_combo.DeleteString(0);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton11()
{
	UpdateData(TRUE);
	m_combo.AddString(m_edit2);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton12()
{
	UpdateData(TRUE);
	if (m_combo.FindString(-1, m_edit2) == LB_ERR) {
		MessageBox(_T("Nothing was found"), _T(""), MB_OK);
	}
	else {
		MessageBox(_T("String was found"), _T(""), MB_OK);
	}
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton13()
{
	m_combo.ResetContent();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	int CurPos = pScrollBar->GetScrollPos();
	switch (nSBCode) {
		case SB_THUMBTRACK:
			CurPos = nPos;
			break;
		case SB_LEFT:
			CurPos = 0;
			break;
		case SB_LINELEFT:
			CurPos--;
			break;
		case SB_PAGELEFT:
			CurPos -= 10;
			break;
		case SB_PAGERIGHT:
			CurPos += 10;
			break;
		case SB_LINERIGHT:
			CurPos++;
			break;
		case SB_RIGHT:
			CurPos = 100;
			break;
	}
	pScrollBar->SetScrollPos(CurPos);
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	CRect rectLocal;
	rectLocal = rectGlobal;
	rectLocal.top += m_scroll3.GetScrollPos();
	rectLocal.bottom += m_scroll3.GetScrollPos() + m_scroll4.GetScrollPos();
	rectLocal.left += m_scroll.GetScrollPos();
	rectLocal.right += m_scroll.GetScrollPos() + m_scroll2.GetScrollPos();
	m_but.MoveWindow(rectLocal, TRUE);

	CRect rectLocal2;
	rectLocal2 = rectGlobal2;
	rectLocal2.bottom += m_slider2.GetPos();
	rectLocal2.left += m_slider.GetPos() * 1.4;
	rectLocal2.right += m_slider.GetPos() * 1.4 + m_slider2.GetPos();
	m_stat3.MoveWindow(rectLocal2, TRUE);
	InvalidateRect(rectLocal2);

	m_prog1.SetPos(m_slider3.GetPos());

	CDialogEx::OnHScroll(nSBCode, nPos, pScrollBar);
}


void CChapter6and7Dlg::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	int CurPos = pScrollBar->GetScrollPos();
	switch (nSBCode) {
	case SB_THUMBTRACK:
		CurPos = nPos;
		break;
	case SB_LEFT:
		CurPos = 0;
		break;
	case SB_LINELEFT:
		CurPos--;
		break;
	case SB_PAGELEFT:
		CurPos -= 10;
		break;
	case SB_PAGERIGHT:
		CurPos += 10;
		break;
	case SB_LINERIGHT:
		CurPos++;
		break;
	case SB_RIGHT:
		CurPos = 100;
		break;
	}
	pScrollBar->SetScrollPos(CurPos);
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	CRect rectLocal;
	rectLocal = rectGlobal;
	rectLocal.left += m_scroll.GetScrollPos();
	rectLocal.right += m_scroll.GetScrollPos() + m_scroll2.GetScrollPos(); 
	rectLocal.top += m_scroll3.GetScrollPos();
	rectLocal.bottom += m_scroll3.GetScrollPos() + m_scroll4.GetScrollPos();
	m_but.MoveWindow(rectLocal, TRUE);

	m_slider.SetPos(m_slider2.GetPos() / 2);
	CRect rectLocal2;
	rectLocal2 = rectGlobal2;
	rectLocal2.bottom += m_slider2.GetPos();
	rectLocal2.left += m_slider.GetPos() * 1.4;
	rectLocal2.right += m_slider.GetPos() * 1.4 + m_slider2.GetPos();
	m_stat3.MoveWindow(rectLocal2, TRUE);
	InvalidateRect(rectLocal2);

	CDialogEx::OnVScroll(nSBCode, nPos, pScrollBar);
}


void CChapter6and7Dlg::OnTimer(UINT_PTR nIDEvent)
{
	if ((nIDEvent == 1) && (m_check.GetCheck())) {
		m_prog1.OffsetPos(-15);
		m_prog2.StepIt();
	}
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного

	CDialogEx::OnTimer(nIDEvent);
}


void CChapter6and7Dlg::OnDeltaposSpin4(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	m_prog3.SetPos(pNMUpDown->iPos);
	*pResult = 0;
}


void CChapter6and7Dlg::OnDeltaposSpin1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	CString cstr;
	cstr = (char) (pNMUpDown->iPos + 64);
	m_stat4.SetWindowText(cstr);
	*pResult = 0;
}


void CChapter6and7Dlg::OnBnClickedButton16()
{
	WORD cod, mod;
	m_hot1.GetHotKey(cod, mod);
	m_hot2.SetHotKey(cod, mod);
	// TODO: добавьте свой код обработчика уведомлений
}


LONG CChapter6and7Dlg::OnHotKey(UINT nID, LPARAM lparam) {
	if (nID == 0) {
		SetForegroundWindow();
		MessageBox(_T("Hot Key"), _T(""), MB_OK);
	}
	return 0;
}


void CChapter6and7Dlg::OnBnClickedButton17()
{
	WORD cod, mod;
	m_hot1.GetHotKey(cod, mod);
	UINT mod1 = 0;
	if (mod & HOTKEYF_ALT) {
		mod1 = MOD_ALT;
	}
	if (mod & HOTKEYF_CONTROL) {
		mod1 = MOD_CONTROL;
	}
	if (mod & HOTKEYF_SHIFT) {
		mod1 = MOD_SHIFT;
	}
	RegisterHotKey(AfxGetMainWnd()->m_hWnd, 0, mod1, cod);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton18()
{
	UpdateData(TRUE);
	BYTE b1, b2, b3, b4;
	m_ip.GetAddress(b1, b2, b3, b4);
	m_stat5.Format(_T("%i . %i . %i . %i"), b1, b2, b3, b4);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton19()
{
	UpdateData(TRUE);
	m_ip.SetAddress(m_b1, m_b2, m_b3, m_b4);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton14()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton20()
{
	m_anim.Open(_T("boxed-correct.avi"));
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton21()
{
	m_anim.Play(0, -1, -1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton22()
{
	m_anim.Stop();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton24()
{
	m_anim.Seek(-1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnBnClickedButton23()
{
	m_anim.Open(IDR_AVI1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnAcnStartAnimate2()
{
	UpdateData(TRUE);
	m_stat6 = "Animation goes";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter6and7Dlg::OnAcnStopAnimate2()
{
	UpdateData(TRUE);
	m_stat6 = "";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}
