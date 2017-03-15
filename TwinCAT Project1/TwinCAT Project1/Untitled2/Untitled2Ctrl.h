///////////////////////////////////////////////////////////////////////////////
// Untitled2Ctrl.h

#ifndef __UNTITLED2CTRL_H__
#define __UNTITLED2CTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define UNTITLED2DRV_NAME "UNTITLED2"

#include "resource.h"       // main symbols
#include "Untitled2W32.h"
#include "TcBase.h"
#include "Untitled2ClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CUntitled2Ctrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CUntitled2Ctrl, &CLSID_Untitled2Ctrl>
	, public IUntitled2Ctrl
	, public ITcOCFCtrlImpl<CUntitled2Ctrl, CUntitled2ClassFactory>
{
public:
	CUntitled2Ctrl();
	virtual ~CUntitled2Ctrl();

DECLARE_REGISTRY_RESOURCEID(IDR_UNTITLED2CTRL)
DECLARE_NOT_AGGREGATABLE(CUntitled2Ctrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CUntitled2Ctrl)
	COM_INTERFACE_ENTRY(IUntitled2Ctrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __UNTITLED2CTRL_H__
