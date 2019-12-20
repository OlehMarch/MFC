
// Chapter9and10Dlg.cpp : файл реализации
//

#include "stdafx.h"
#include "Chapter9and10.h"
#include "Chapter9and10Dlg.h"
#include "afxdialogex.h"
#include "cmath"

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


// диалоговое окно CChapter9and10Dlg



CChapter9and10Dlg::CChapter9and10Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChapter9and10Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CChapter9and10Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_CHECK2, m_check);
	DDX_Control(pDX, IDC_TREE1, m_tree);
}

BEGIN_MESSAGE_MAP(CChapter9and10Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_BN_CLICKED(IDC_BUTTON1, &CChapter9and10Dlg::OnBnClickedButton1)
	ON_WM_RBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_RBUTTONUP()
	ON_BN_CLICKED(IDC_BUTTON2, &CChapter9and10Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CChapter9and10Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CChapter9and10Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CChapter9and10Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CChapter9and10Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CChapter9and10Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CChapter9and10Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CChapter9and10Dlg::OnBnClickedButton9)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &CChapter9and10Dlg::OnNMDblclkList1)
	ON_NOTIFY(LVN_ENDLABELEDIT, IDC_LIST1, &CChapter9and10Dlg::OnLvnEndlabeleditList1)
	ON_BN_CLICKED(IDC_BUTTON10, &CChapter9and10Dlg::OnBnClickedButton10)
	ON_NOTIFY(LVN_COLUMNCLICK, IDC_LIST1, &CChapter9and10Dlg::OnLvnColumnclickList1)
	ON_NOTIFY(LVN_BEGINDRAG, IDC_LIST1, &CChapter9and10Dlg::OnLvnBegindragList1)
	ON_WM_LBUTTONUP()
	ON_BN_CLICKED(IDC_BUTTON11, &CChapter9and10Dlg::OnBnClickedButton11)
END_MESSAGE_MAP()


// обработчики сообщений CChapter9and10Dlg

BOOL CChapter9and10Dlg::OnInitDialog()
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
	m_image.Create(32, 32, 0, 0, 1);
	m_image.Add(m_hIcon);
	m_image.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
	SetTimer(0, 20 , NULL);
	dd = 0;
	tt = 0;
	nn = 0;
	x2 = y2 = 10;

	m_image2.Create(32, 32, 0, 0, 1);
	m_image2.Add(m_hIcon);
	m_image2.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
	m_image2.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
	m_list.SetImageList(&m_image2, LVSIL_NORMAL);
	m_list.SetImageList(&m_image2, LVSIL_SMALL);
	m_list.InsertColumn(0, _T("One"), LVCFMT_LEFT, 90, 0);
	m_list.InsertColumn(1, _T("Two"), LVCFMT_LEFT, 50, 2);
	m_list.InsertColumn(2, _T("Three"), LVCFMT_LEFT, 80, 2);
	m_list.InsertColumn(3, _T("Four"), LVCFMT_RIGHT, 40, 3);

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CChapter9and10Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CChapter9and10Dlg::OnPaint()
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
		CPaintDC dc(this);
		m_image.Draw(&dc, 0, CPoint(x2, y2), ILD_NORMAL);
		m_image.Draw(&dc, nn, CPoint(x1, y1), ILD_NORMAL);
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CChapter9and10Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CChapter9and10Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	if (nIDEvent == 0) {
		InvalidateRect(CRect(x1, y1, x1 + 32, y1 + 32), TRUE);
		if (dd == 0) {
			tt += 1;
			x1 = (int)(200 + 200 * sin(tt * 0.02));
			y1 = (int)(150 + 150 * cos(tt * 0.02));
		}
		else {
			y1 += 10;
		}
		if (x1 > 200) {
			nn = 0;
		}
		else {
			nn = 1;
		}
		InvalidateRect(CRect(x1, y1, x1 + 32, y1 + 32), TRUE);
	}
	CDialogEx::OnTimer(nIDEvent);
}


void CChapter9and10Dlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	CRect rect(x1, y1, x1 + 32, y1 + 32);
	if (rect.PtInRect(point)) {
		dd = 1 - dd;
	}
	CDialogEx::OnLButtonDown(nFlags, point);
}


void CChapter9and10Dlg::OnBnClickedButton1()
{
	dd = 0;
	tt = 0;
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	CRect rect(x2, y2, x2 + 32, y2 + 32);
	if (rect.PtInRect(point)) {
		m_image.BeginDrag(0, CPoint(16, -16));
		m_image.DragEnter(this, point);
	}
	CDialogEx::OnRButtonDown(nFlags, point);
}

bool drag = false;
CImageList *img;
int mit;

void CChapter9and10Dlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	if (drag) {
		img->DragMove(point);
	}
	m_image.DragMove(point);
	CDialogEx::OnMouseMove(nFlags, point);
}


void CChapter9and10Dlg::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	m_image.DragLeave(this);
	m_image.EndDrag();
	InvalidateRect(NULL);
	x2 = point.x - 16;
	y2 = point.y - 16;
	CDialogEx::OnRButtonUp(nFlags, point);
}


void CChapter9and10Dlg::OnBnClickedButton2()
{
	CString cstr;
	LVITEM lv;
	for (int i = 0; i < 10; i++) {
		cstr.Format(_T("%i"), rand() % 1000);
		m_list.InsertItem(i, cstr, rand() % 3);
		lv.mask = LVIF_TEXT;
		lv.iSubItem = 1;
		lv.iItem = i;
		cstr.Format(_T("%i"), rand() % 100);
		lv.pszText = (LPTSTR)(LPCTSTR)cstr;
		m_list.SetItem(&lv);
		lv.iSubItem = 2;
		cstr.Format(_T("%i"), rand() % 10000);
		lv.pszText = (LPTSTR)(LPCTSTR)cstr;
		m_list.SetItem(&lv);
		lv.iSubItem = 3;
		cstr.Format(_T("%i"), rand() % 10);
		lv.pszText = (LPTSTR)(LPCTSTR)cstr;
		m_list.SetItem(&lv);
	}
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton3()
{
	m_list.ModifyStyle(LVS_LIST, LVS_ICON, 0);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton4()
{
	m_list.ModifyStyle(LVS_LIST, LVS_SMALLICON, 0);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton5()
{
	m_list.ModifyStyle(0, LVS_LIST, 0);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton6()
{
	m_list.ModifyStyle(LVS_LIST, LVS_REPORT, 0);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton7()
{
	m_list.DeleteAllItems();
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton8()
{
	m_list.DeleteItem(m_list.GetNextItem(-1, LVNI_FOCUSED));
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnBnClickedButton9()
{
	m_list.Arrange(LVA_DEFAULT);
	// TODO: добавьте свой код обработчика уведомлений
}


void CChapter9and10Dlg::OnNMDblclkList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	MessageBox(m_list.GetItemText(m_list.GetHotItem(), 0));
	*pResult = 0;
}


void CChapter9and10Dlg::OnLvnEndlabeleditList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	NMLVDISPINFO *pDispInfo = reinterpret_cast<NMLVDISPINFO*>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	LV_ITEM it = pDispInfo->item;
	m_list.SetItemText(it.iItem, 0, it.pszText);
	m_list.SetItemText(it.iItem, 1, _T("***"));
	*pResult = 0;
}


void CChapter9and10Dlg::OnBnClickedButton10()
{
	int i = -1;
	i = m_list.GetNextItem(i, LVNI_SELECTED);
	while (i > -1) {
		MessageBox(m_list.GetItemText(i, 0));
		i = m_list.GetNextItem(i, LVNI_SELECTED);
	}
	// TODO: добавьте свой код обработчика уведомлений
}

typedef struct tagSortInfo {
	CListCtrl *pListControl;
	int nColumnNo;
	bool nAscendingSortOrder;
}SortInfo;

SortInfo m_inf;
int CALLBACK sortf(LPARAM lparam1, LPARAM lparam2, LPARAM sortp) {
	SortInfo *pSortInfo = (SortInfo*)sortp;
	int nn = pSortInfo->nColumnNo;
	bool sortorder = pSortInfo->nAscendingSortOrder;
	CListCtrl *pl = pSortInfo->pListControl;
	CString cstr1 = pl->GetItemText((int)lparam1, nn);
	CString cstr2 = pl->GetItemText((int)lparam2, nn);
	if (sortorder) {
		if (cstr1 < cstr2) {
			return -1;
		}
		if (cstr1 == cstr2) {
			return 0;
		}
		if (cstr1 > cstr2) {
			return 1;
		}
		/*strcmp(cstr1, cstr2);*/
	}
	else {
		if (cstr2 < cstr1) {
			return -1;
		}
		if (cstr2 == cstr1) {
			return 0;
		}
		if (cstr2 > cstr1) {
			return 1;
		}
		/*strcmp(cstr2, cstr1);*/
	}
}

void CChapter9and10Dlg::OnLvnColumnclickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	m_inf.nColumnNo = pNMLV->iSubItem;
	m_inf.pListControl = &m_list;
	m_inf.nAscendingSortOrder = m_check.GetCheck();
	for (int i = 0; i < m_list.GetItemCount(); i++) {
		m_list.SetItemData(i, i);
	}
	m_list.SortItems(sortf,(DWORD) &m_inf);
	*pResult = 0;
}


void CChapter9and10Dlg::OnLvnBegindragList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	drag = true;
	mit = pNMLV->iItem;
	CPoint cp;
	img = m_list.CreateDragImage(mit, &cp);
	img->DragShowNolock(true);
	img->SetDragCursorImage(0, CPoint(0, 0));
	img->BeginDrag(0, CPoint(32, 32));
	img->DragEnter(&m_list, CPoint(0, 0));
	SetCapture();
	*pResult = 0;
}


void CChapter9and10Dlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	drag = false;
	img->DragLeave(&m_list);
	img->EndDrag();
	CPoint cp;
	m_list.GetOrigin(&cp);
	point += cp;
	point -= CPoint(32, 32);
	m_list.SetItemPosition(mit, point);
	ReleaseCapture();
	CDialogEx::OnLButtonUp(nFlags, point);
}


void CChapter9and10Dlg::OnBnClickedButton11()
{
	WIN32_FIND_DATA fd;
	HANDLE hf = FindFirstFile(_T("*.*"), &fd);
	if (hf != INVALID_HANDLE_VALUE) {
		LVITEM ll;
		ll.iItem = 0;
		CString cs;
		do {
			if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				continue;
			}
			ll.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM;
			ll.iImage = 0;
			ll.iSubItem = 0;
			ll.pszText = fd.cFileName;
			m_list.InsertItem(&ll);
			ll.iSubItem = 1;
			ll.mask = LVIF_TEXT;
			char *buf;
			buf = (char*) fd.cAlternateFileName;
!!!!!!!		//ll.pszText = (LPTSTR)(LPCTSTR)(strrchr(buf, '.')) + 1;
			m_list.SetItem(&ll);
			ll.iSubItem = 2;
			cs.Format(_T("%dkb"), fd.nFileSizeLow / 1024);
			ll.pszText = (LPTSTR)(LPCTSTR)cs;
			m_list.SetItem(&ll);
			ll.iItem++;
		} while (FindNextFile(hf, &fd));
	}
	// TODO: добавьте свой код обработчика уведомлений
}
