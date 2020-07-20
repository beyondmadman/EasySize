#ifndef ITEMRESIZE_H
#define ITEMRESIZE_H

#include <stdio.h>
#include <vector>
using namespace std;

typedef struct _RESIZEINFO
{
	UINT nID;
	CWnd* pParent;
	float fLeft;
	float fRight;
	float fTop;
	float fBottom;
}RESIZEINFO;

class CItemResize
{
public:
	CItemResize();
	~CItemResize();

private:
	CRect m_rectDlg;
	vector<RESIZEINFO> m_vResizeID;

public:
	void AddItemRect(UINT nID, CWnd* pParent);
	void ResizeItem();

};
#endif


