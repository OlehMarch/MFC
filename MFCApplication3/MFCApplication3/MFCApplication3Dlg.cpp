
// MFCApplication3Dlg.cpp : файл реализации
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "MFCApplication3Dlg.h"
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


// диалоговое окно CMFCApplication3Dlg



CMFCApplication3Dlg::CMFCApplication3Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplication3Dlg::IDD, pParent)
	, m_stat1(_T(""))
	, m_stat3(_T(""))
	, m_stat10(_T(""))
	, m_ch1(FALSE)
	, m_ch2(FALSE)
	, m_stat11(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATIC1, m_stat1);
	DDX_Control(pDX, IDC_STATIC1, m_stat2);
	DDX_Control(pDX, IDC_STATIC11, m_st11);
	DDX_Control(pDX, IDC_STATIC12, m_st12);
	DDX_Text(pDX, IDC_STATIC3, m_stat3);
	DDX_Control(pDX, IDC_BUTTON8, m_but);
	DDX_Control(pDX, IDC_BUTTON13, m_vis);
	DDX_Text(pDX, IDC_STATIC10, m_stat10);
	DDX_Check(pDX, IDC_CHECK1, m_ch1);
	DDX_Check(pDX, IDC_CHECK2, m_ch2);
	DDX_Control(pDX, IDC_CHECK3, m_ch3);
	DDX_Text(pDX, IDC_STATIC14, m_stat11);
	DDX_Control(pDX, IDC_CHECK5, m_ch4);
	DDX_Control(pDX, IDC_CHECK6, m_ch5);
}

BEGIN_MESSAGE_MAP(CMFCApplication3Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication3Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication3Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication3Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication3Dlg::OnBnClickedButton4)
	ON_WM_RBUTTONDBLCLK()
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication3Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication3Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication3Dlg::OnBnClickedButton7)
ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication3Dlg::OnBnClickedButton8)
ON_BN_DOUBLECLICKED(IDC_BUTTON8, &CMFCApplication3Dlg::OnBnDoubleclickedButton8)
ON_BN_SETFOCUS(IDC_BUTTON8, &CMFCApplication3Dlg::OnBnSetfocusButton8)
ON_BN_KILLFOCUS(IDC_BUTTON8, &CMFCApplication3Dlg::OnBnKillfocusButton8)
ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication3Dlg::OnBnClickedButton9)
ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication3Dlg::OnBnClickedButton10)
ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication3Dlg::OnBnClickedButton11)
ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication3Dlg::OnBnClickedButton12)
ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication3Dlg::OnBnClickedButton14)
ON_BN_CLICKED(IDC_CHECK1, &CMFCApplication3Dlg::OnBnClickedCheck1)
ON_BN_CLICKED(IDC_CHECK2, &CMFCApplication3Dlg::OnBnClickedCheck2)
ON_BN_CLICKED(IDC_CHECK5, &CMFCApplication3Dlg::OnBnClickedCheck5)
ON_BN_CLICKED(IDC_CHECK6, &CMFCApplication3Dlg::OnBnClickedCheck6)
ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication3Dlg::OnBnClickedButton15)
END_MESSAGE_MAP()


// обработчики сообщений CMFCApplication3Dlg
CStatic m_st1;
BOOL CMFCApplication3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.
	CRect rect(15, 10, 70, 50);
	m_st1.Create(_T("My text"), WS_CHILD | WS_VISIBLE | SS_LEFT, rect, this, IDC_STATIC);
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
	m_ch4.SetIcon(m_hIcon);
	m_ch5.SetIcon(m_hIcon);

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CMFCApplication3Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMFCApplication3Dlg::OnPaint()
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
HCURSOR CMFCApplication3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication3Dlg::OnBnClickedButton1()
{
	MessageBox(_T("Hello!!!"), _T("Hello Window"), MB_OK);
	// TODO: добавьте свой код обработчика уведомлений
}

void CMFCApplication3Dlg::OnBnClickedButton2()
{
	CAboutDlg aboutButton;
	aboutButton.DoModal();
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton3()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_stat1 = "Text";
	m_stat2.ModifyStyle(0, SS_CENTER, 0);
	UpdateData(FALSE);
}


void CMFCApplication3Dlg::OnBnClickedButton4()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_stat1 = "Текст";
	m_stat2.ModifyStyle(SS_CENTER, 0, 0);
	UpdateData(FALSE);
}


void CMFCApplication3Dlg::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	MessageBox(_T("R_Button DbClk"), _T(""), MB_OK);
	CDialogEx::OnRButtonDblClk(nFlags, point);
}


void CMFCApplication3Dlg::OnBnClickedButton5()
{
	HICON m_ic1;
	m_ic1 = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_st11.SetIcon(m_ic1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton6()
{
	CBitmap m_b1;
	m_b1.LoadBitmap(IDB_BITMAP1);
	m_st12.SetBitmap(m_b1);
	// TODO: добавьте свой код обработчика уведомлений
}

CStatic m_st13;
void CMFCApplication3Dlg::OnBnClickedButton7()
{
	CRect rect1(17, 50, 0, 0);
	m_st13.Create(_T(""), WS_CHILD | WS_VISIBLE | SS_BITMAP, rect1, this, IDC_STATIC);
	CBitmap m_b1;
	m_b1.LoadBitmap(IDB_BITMAP1);
	m_st13.SetBitmap(m_b1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton8()
{
	MessageBox(_T("L_Button Clk"), _T(""), MB_OK);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnDoubleclickedButton8()
{
	MessageBox(_T("L_Button DbClk"), _T(""), MB_OK);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnSetfocusButton8()
{
	m_stat3 = "Set focus";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnKillfocusButton8()
{
	m_stat3 = "Kill focus";
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton9()
{
	m_but.SetWindowText(_T("New Name"));
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton10()
{
	m_but.SetIcon(m_hIcon);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton11()
{
	HBITMAP hbit;
	hbit = (HBITMAP)LoadImage(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP1), IMAGE_BITMAP, 0, 0, 0);
	m_but.SetBitmap(hbit);
	// TODO: добавьте свой код обработчика уведомлений
}

CButton m_but1, m_but2;
void CMFCApplication3Dlg::OnBnClickedButton12()
{
	CRect rect1(21, 195, 111, 225);
	m_but1.Create(_T("New Button"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, rect1, this, 1101);
	CRect rect2(21, 230, 111, 270);
	m_but2.Create(_T("New Button"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON | BS_ICON, rect2, this, 1102);
	m_but2.SetIcon(m_hIcon);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedButton14()
{
	m_vis.ModifyStyle(0, WS_VISIBLE, 0);
	m_vis.SetWindowText(_T("Button which was unvisible"));
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedCheck1()
{
	UpdateData(TRUE);
	if (m_ch1){
		m_stat10 = "Tick";
	}
	else {
		m_stat10 = "Hollow";
	}
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedCheck2()
{
	UpdateData(TRUE);
	m_ch3.SetCheck(m_ch2);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedCheck5()
{
	m_stat11 = m_ch4.GetCheck();
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication3Dlg::OnBnClickedCheck6()
{
	m_stat11 = m_ch5.GetCheck();
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}

CButton m_ch6;
void CMFCApplication3Dlg::OnBnClickedButton15()
{
	CRect rect(320, 250, 440, 280);
	m_ch6.Create(_T("New CheckBox"), WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX, rect, this, 1103);
	// TODO: добавьте свой код обработчика уведомлений
}
