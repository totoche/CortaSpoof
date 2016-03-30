#ifndef SPOOF_H
#define SPOOF_H

#include <iostream>
#include <Windows.h>
#include "cortaspoof.h"

/*---------------------------- Class CSpoof -----------------------------
|  Purpose: this class allows to send frame to bing.com
|
|	Author : Paul HERNAULT
|			 Thomas AUBIN
*-------------------------------------------------------------------------*/

class CortaSpoof;
class CSpoof
{

public:
	CSpoof(CortaSpoof* corta);
	~CSpoof();
	int Spoof();
	bool SendHTTPSRequest_POST(LPWSTR ServerName, LPWSTR Params, LPWSTR Referer, LPWSTR Headers, LPWSTR Content);
	bool SendHTTPSRequest_GET(LPWSTR ServerName, LPWSTR Params, LPWSTR Referer, LPWSTR Headers);

protected:
	CortaSpoof *m_corta;
	char* query;
};

#endif 