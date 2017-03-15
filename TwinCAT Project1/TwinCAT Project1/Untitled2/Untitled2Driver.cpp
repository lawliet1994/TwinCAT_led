///////////////////////////////////////////////////////////////////////////////
// Untitled2Driver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "Untitled2Driver.h"
#include "Untitled2ClassFactory.h"

DECLARE_GENERIC_DEVICE(UNTITLED2DRV)

IOSTATUS CUntitled2Driver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CUntitled2ClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CUntitled2Driver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CUntitled2Driver::UNTITLED2DRV_GetVersion( )
{
	return( (UNTITLED2DRV_Major << 8) | UNTITLED2DRV_Minor );
}

