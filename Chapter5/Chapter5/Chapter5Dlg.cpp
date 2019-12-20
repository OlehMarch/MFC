
// Chapter5Dlg.cpp : файл реализации
//

#include "stdafx.h"
#include "Chapter5.h"
#include "Chapter5Dlg.h"
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


// диалоговое окно CChapter5Dlg



CChapter5Dlg::CChapter5Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChapter5Dlg::IDD, pParent)
	, m_stat1(_T(""))
	, m_stat2(0)
	, m_edit1(_T(""))
	, m_stat3(_T(""))
	, m_edit2(_T(""))
	, m_stat4(_T(""))
	, m_stat5(_T(""))
	, m_stat6(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CChapter5Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO1, m_var1);
	DDX_Control(pDX, IDC_RADIO2, m_var2);
	DDX_Control(pDX, IDC_RADIO3, m_var3);
	DDX_Text(pDX, IDC_STATIC1, m_stat1);
	DDX_Text(pDX, IDC_STATIC2, m_stat2);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_STATIC3, m_stat3);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_EDIT2, m_edit);
	DDX_Text(pDX, IDC_STATIC4, m_stat4);
	DDX_Text(pDX, IDC_STATIC5, m_stat5);
	DDX_Text(pDX, IDC_STATIC6, m_stat6);
}

BEGIN_MESSAGE_MAP(CChapter5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CChapter5Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_RADIO1, &CChapter5Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CChapter5Dlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CChapter5Dlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_BUTTON2, &CChapter5Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CChapter5Dlg::OnBnClickedButton3)
	ON_EN_CHANGE(IDC_EDIT1, &CChapter5Dlg::OnEnChangeEdit1)
	ON_EN_MAXTEXT(IDC_EDIT1, &CChapter5Dlg::OnEnMaxtextEdit1)
	ON_BN_CLICKED(IDC_BUTTON4, &CChapter5Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CChapter5Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CChapter5Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CChapter5Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CChapter5Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CChapter5Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CChapter5Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CChapter5Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CChapter5Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CChapter5Dlg::OnBnClickedButton13)
END_MESSAGE_MAP()


// обработчики сообщений CChapter5Dlg

BOOL CChapter5Dlg::OnInitDialog()
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

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CChapter5Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CChapter5Dlg::OnPaint()
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
HCURSOR CChapter5Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CChapter5Dlg::OnBnClickedButton1()
{
	if (m_var1.GetCheck()) {
		m_stat1 = "Radio1 Checked";
	}
	if (m_var2.GetCheck()) {
		m_stat1 = "Radio2 Checked";
	}
	if (m_var3.GetCheck()) {
		m_stat1 = "Radio3 Checked";
	}
	m_stat2 = GetCheckedRadioButton(IDC_RADIO4, IDC_RADIO6);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedRadio1()
{
	CChapter5Dlg::OnBnClickedButton1();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedRadio2()
{
	CChapter5Dlg::OnBnClickedButton1();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedRadio3()
{
	CChapter5Dlg::OnBnClickedButton1();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton2()
{
	m_var3.SetCheck(1);
	m_var2.SetCheck(0);
	m_var1.SetCheck(0);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton3()
{
	UpdateData(TRUE);
	m_edit2.Append(m_edit1);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnEnChangeEdit1()
{
	UpdateData(TRUE);
	m_stat3 = m_edit1;
	UpdateData(FALSE);
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CChapter5Dlg::OnEnMaxtextEdit1()
{
	UpdateData(TRUE);
	MessageBox(m_edit1, _T(""), MB_OK);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton4()
{
	UpdateData(TRUE);
	int d1, d2;
	m_edit.GetSel(d1, d2);
	m_edit2.Insert(d1, m_edit1);
	UpdateData(FALSE);
	m_edit.SetSel(d1, d2, FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton5()
{
	UpdateData(TRUE);
	m_edit.ReplaceSel(m_edit1);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton6()
{
	UpdateData(TRUE);
	m_stat4.Format(_T("%i %i %i"), m_edit.GetFirstVisibleLine(), m_edit.LineFromChar(-1), m_edit.LineLength(-1));
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton7()
{
	UpdateData(TRUE);
	TCHAR buff[255];
	m_edit.GetLine(m_edit.LineFromChar(-1), buff, 255);
	m_stat5 = buff;
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton8()
{
	UpdateData(TRUE);
	if (m_edit.GetModify()) {
		m_stat6 = _T("Text was modified");
	}
	else {
		m_stat6 = _T("Text wasn't modified");
	}
	m_edit.SetModify(FALSE);
	UpdateData(FALSE);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton9()
{
	m_edit.Clear();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton10()
{
	m_edit.Copy();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton11()
{
	m_edit.Cut();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton12()
{
	m_edit.Paste();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter5Dlg::OnBnClickedButton13()
{
	m_edit.Undo();
	// TODO: добавьте свой код обработчика уведомлений
}
