/****************************************************************************
**+-----------------------------------------------------------------------+**
**|                                                                       |**
**| Copyright(c) 1998 - 2008 Texas Instruments. All rights reserved.      |**
**| All rights reserved.                                                  |**
**|                                                                       |**
**| Redistribution and use in source and binary forms, with or without    |**
**| modification, are permitted provided that the following conditions    |**
**| are met:                                                              |**
**|                                                                       |**
**|  * Redistributions of source code must retain the above copyright     |**
**|    notice, this list of conditions and the following disclaimer.      |**
**|  * Redistributions in binary form must reproduce the above copyright  |**
**|    notice, this list of conditions and the following disclaimer in    |**
**|    the documentation and/or other materials provided with the         |**
**|    distribution.                                                      |**
**|  * Neither the name Texas Instruments nor the names of its            |**
**|    contributors may be used to endorse or promote products derived    |**
**|    from this software without specific prior written permission.      |**
**|                                                                       |**
**| THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   |**
**| "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     |**
**| LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR |**
**| A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  |**
**| OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, |**
**| SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT      |**
**| LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, |**
**| DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY |**
**| THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   |**
**| (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE |**
**| OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  |**
**|                                                                       |**
**+-----------------------------------------------------------------------+**
****************************************************************************/
 
/***************************************************************************/
/*																		   */
/*	  MODULE:	HwInit.h										       */
/*    PURPOSE:	HwInit module Header file                             */
/*																		   */
/***************************************************************************/
#ifndef _HW_INIT_API_H_
#define _HW_INIT_API_H_

#include "osTIType.h"

TI_HANDLE hwInit_create(TI_HANDLE hOs);
TI_STATUS hwInit_config(TI_HANDLE hHwInit, TI_HANDLE hReport, TI_HANDLE hTntewDrv);
TI_STATUS hwInit_destroy(TI_HANDLE hHwInit);
TI_STATUS hwInit_recovery(TI_HANDLE hHwInit, TI_HANDLE hHwCtrl, void *funcCB, TI_HANDLE hRecoveryCtrl);
TI_STATUS hwInit_hwCtrl_Initiate(TI_HANDLE hHwInit, TI_HANDLE hHwCtrl);
TI_STATUS InitHw_FinalizeDownload(TI_HANDLE hHwInit);

#endif /* _HW_INIT_API_H_ */