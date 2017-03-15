///////////////////////////////////////////////////////////////////////////////
// Untitled2Driver.h

#ifndef __UNTITLED2DRIVER_H__
#define __UNTITLED2DRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define UNTITLED2DRV_NAME        "UNTITLED2"
#define UNTITLED2DRV_Major       1
#define UNTITLED2DRV_Minor       0

#define DEVICE_CLASS CUntitled2Driver

#include "ObjDriver.h"

class CUntitled2Driver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl UNTITLED2DRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(UNTITLED2DRV)
	VxD_Service( UNTITLED2DRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __UNTITLED2DRIVER_H__