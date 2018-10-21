//===================================================================
// COPYRIGHT Tony 2017/03/29
//===================================================================
// JNCITempFixArrowRep.cpp
// Header definition of class JNCITempFixArrowRep
//===================================================================
//
// Usage notes:
//
//===================================================================
//  2017/03/29 Creation: Code generated by the 3DS wizard
//===================================================================
#ifndef JNCITempFixArrowRep_H
#define JNCITempFixArrowRep_H

#include "VisTempRepMod.h"
#include "CATBaseUnknown.h"

//Mathematics 
#include "CATMathPoint.h"
#include "CATMathDirection.h"

//VisualizationFoundation 
#include "CATRep.h"


extern ExportedByVisTempRepMod  IID IID_JNCITempFixArrowRep ;


class ExportedByVisTempRepMod JNCITempFixArrowRep: public CATBaseUnknown
{
CATDeclareInterface;

public:

	virtual HRESULT CreateDefaultTypeFixArrow(CATMathPoint *iOrigin,CATMathDirection * iDir,int color1=0,int color2=255,int color3=0) = 0;

	virtual HRESULT ChangeDefaultTypeFixArrow(CATMathPoint *iOrigin,CATMathDirection * iDir,int color1=0,int color2=255,int color3=0) = 0;

	virtual HRESULT SetGraphicRepresentation (CATRep *  iRep ) = 0;

	virtual HRESULT GetGraphicRepresentation (CATRep **  oRep ) = 0;

	virtual HRESULT GetOriginalPoint(CATMathPoint &iMathPoint) = 0;

	virtual HRESULT GetAlignDir(CATMathDirection &iMathDir) = 0;

};

//-----------------------------------------------------------------------
CATDeclareHandler( JNCITempFixArrowRep, CATBaseUnknown );

#endif