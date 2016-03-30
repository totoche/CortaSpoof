#include "spoof.h"
#include <time.h>
#include <WinInet.h>
#include <string.h>
#include "dico.h"

#pragma comment (lib, "Wininet.lib")

/*---------------------------- Constructor CSpoof -----------------------------
|	Class CSpoof
|	Function CSpoof
|
|  Purpose: Constructor of CSpoof class, take a pointer on CortaSpoof class
|
|	Parameters:
|       CortaSpoof * corta (IN) -- pointer on CortaSpoof class
|
*-------------------------------------------------------------------------*/
CSpoof::CSpoof(CortaSpoof* corta)
{
	m_corta = corta;
}


/*---------------------------- Destructor CSpoof -----------------------------
|	Class CSpoof
|	Function ~CSpoof
|
|  Purpose: Destructor of CSpoof class
|
*-------------------------------------------------------------------------*/
CSpoof::~CSpoof()
{

}

/*---------------------------- Random String -----------------------------
|	Function Random_String
|
|  Purpose: fill str with a Random hexadecimal string with a specific 
|			number of caracters.
|
|	Parameters:
|       char str[] (OUT) -- array of caracters
|		int size (IN) -- number of caracters of the string
|
*-------------------------------------------------------------------------*/
bool Random_String(char str[], int size)
{
	int i;
	if (str == NULL)
	{
		return false;
	}

	srand(time(0));
	str[size - 1] = '\0';
	for (i = 0; i < size - 1; i++)
	{
		char c;
		c = rand() % 36;
		if (c < 26)
		{
			str[i] = c + 97;
		}
		else
		{
			str[i] = c + 22;
		}
	}
	return true;
}

/*---------------------------- Send HTTPS Frame -----------------------------
|  Class CSpoof
|  Function Send_Frame
|
|  Purpose:  This functin send a HTTPS frame
|
|  Parameters:
|       LPWSTR ServerName (IN) -- IP or DNS of the server
|		LPWSTR Params (IN) -- Parameter
|		LPWSTR Referer (IN) -- Referer of the frame
|		LPWSTR Headers (IN) -- headers
|
|  Returns:  return true if OK, false else.
*-------------------------------------------------------------------------*/
bool CSpoof::SendHTTPSRequest_POST(LPWSTR ServerName, LPWSTR Params, LPWSTR Referer, LPWSTR Headers, LPWSTR Content)
{

	HINTERNET hOpen = ::InternetOpen(TEXT("Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0; Cortana 1.4.8.152;10.0.0.0.10240.21) like Gecko"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hOpen == NULL)
	{
		return false;
	}

	HINTERNET hConnect = ::InternetConnect(
		hOpen,                      // InternetOpen handle
		ServerName,             // Server  name
		INTERNET_DEFAULT_HTTPS_PORT,// Default HTTPS port - 443
		NULL,                         // User name
		NULL,                         //  User password
		INTERNET_SERVICE_HTTP,      // Service
		0,                          // Flags
		0                           // Context
		);
	if (hConnect == NULL)
	{
		InternetCloseHandle(hOpen);
		return false;
	}

	HINTERNET hReq = ::HttpOpenRequest(
		hConnect,                   // InternetConnect handle
		L"POST",                      // Method
		Params,                         // Object name
		HTTP_VERSION,               // Version
		Referer,                         // Referrer
		NULL,                       // Extra headers
		INTERNET_FLAG_SECURE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID
		,       // Flags
		0                            // Context
		);
	if (hReq == NULL)
	{
		InternetCloseHandle(hOpen);
		InternetCloseHandle(hConnect);
		return false;
	}

again:
	BOOL isSend = ::HttpSendRequest(hReq, Headers, 0, Content, wcslen(Content));
	if (isSend == TRUE)
	{
		//MessageBox(0, L"Envoie reussi", L"Error", 0);
	}
	else
	{
		DWORD dwError = GetLastError();
		if (dwError == ERROR_INTERNET_INVALID_CA)
		{
			DWORD dwFlags;
			DWORD dwBuffLen = sizeof(dwFlags);

			InternetQueryOption(hReq, INTERNET_OPTION_SECURITY_FLAGS,
				(LPVOID)&dwFlags, &dwBuffLen);

			dwFlags |= SECURITY_FLAG_IGNORE_UNKNOWN_CA;
			InternetSetOption(hReq, INTERNET_OPTION_SECURITY_FLAGS,
				&dwFlags, sizeof(dwFlags));

			goto again;
		}
		else
		{
			MessageBox(0, L"Erreur envoie", L"Error", 0);
			InternetCloseHandle(hOpen);
			InternetCloseHandle(hConnect);
			InternetCloseHandle(hReq);
			return false;
		}
	}
	// close WinInet
	InternetCloseHandle(hOpen);
	InternetCloseHandle(hConnect);
	InternetCloseHandle(hReq);


	return true;
}

/*---------------------------- Send HTTPS Frame -----------------------------
|  Class CSpoof
|  Function Send_Frame
|
|  Purpose:  This functin send a HTTPS frame
|
|  Parameters:
|       LPWSTR ServerName (IN) -- IP or DNS of the server
|		LPWSTR Params (IN) -- Parameter
|		LPWSTR Referer (IN) -- Referer of the frame
|		LPWSTR Headers (IN) -- headers
|
|  Returns:  return true if OK, false else.
*-------------------------------------------------------------------------*/
bool CSpoof::SendHTTPSRequest_GET(LPWSTR ServerName, LPWSTR Params, LPWSTR Referer, LPWSTR Headers)
{

	HINTERNET hOpen = ::InternetOpen(TEXT("Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0; Cortana 1.4.8.152;10.0.0.0.10240.21) like Gecko"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hOpen == NULL)
	{
		return false;
	}

	HINTERNET hConnect = ::InternetConnect(
		hOpen,                      // InternetOpen handle
		ServerName,             // Server  name
		INTERNET_DEFAULT_HTTPS_PORT,// Default HTTPS port - 443
		NULL,                         // User name
		NULL,                         //  User password
		INTERNET_SERVICE_HTTP,      // Service
		0,                          // Flags
		0                           // Context
		);
	if (hConnect == NULL)
	{
		InternetCloseHandle(hOpen);
		return false;
	}

	HINTERNET hReq = ::HttpOpenRequest(
		hConnect,                   // InternetConnect handle
		L"GET",                      // Method
		Params,                         // Object name
		HTTP_VERSION,               // Version
		Referer,                         // Referrer
		NULL,                       // Extra headers
		INTERNET_FLAG_SECURE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID
		,       // Flags
		0                           // Context
		);
	if (hReq == NULL)
	{
		InternetCloseHandle(hOpen);
		InternetCloseHandle(hConnect);
		return false;
	}

again:
	BOOL isSend = ::HttpSendRequest(hReq, Headers, 0, NULL, 0);
	if (isSend == TRUE)
	{
		//MessageBox(0, L"Envoie reussi", L"Error", 0);
	}
	else
	{
		DWORD dwError = GetLastError();
		if (dwError == ERROR_INTERNET_INVALID_CA)
		{
			DWORD dwFlags;
			DWORD dwBuffLen = sizeof(dwFlags);

			InternetQueryOption(hReq, INTERNET_OPTION_SECURITY_FLAGS,
				(LPVOID)&dwFlags, &dwBuffLen);

			dwFlags |= SECURITY_FLAG_IGNORE_UNKNOWN_CA;
			InternetSetOption(hReq, INTERNET_OPTION_SECURITY_FLAGS,
				&dwFlags, sizeof(dwFlags));

			goto again;
		}
		else
		{
			MessageBox(0, L"Erreur envoie", L"Error", 0);
			InternetCloseHandle(hOpen);
			InternetCloseHandle(hConnect);
			InternetCloseHandle(hReq);
			return false;
		}
	}
	// close WinInet
	InternetCloseHandle(hOpen);
	InternetCloseHandle(hConnect);
	InternetCloseHandle(hReq);


	return true;
}

/*---------------------------- Spoof -----------------------------
|  Class CSpoof
|  Function Spoof
|
|  Purpose:  This function send frame to bing server.
|
|  Returns:  return 0 if OK, -1 else.
*-------------------------------------------------------------------------*/
int CSpoof::Spoof()
{
	int m_speed = m_corta->get_Speed();
	bool *choice = m_corta->get_Choice();
	char* headers = new char[3000];
	char* params = new char[1000];
	char* cvid = new char[SIZE_CVID_IG];
	char* ig = new char[SIZE_CVID_IG];
	int i = m_speed;
	CDico* dico;

	Random_String(cvid, SIZE_CVID_IG);
	if (m_corta->get_Dico())
	{
		dico = new CDico(m_corta->get_Language());
		if (!dico->File_OK())
		{
			m_corta->set_Dico(false);
		}
	}

	/* Tant que l'utilisateur n'a pas appuyé sur stop */
	while (m_corta->get_Start() == true)
	{
		/* gestion du timer */
		if (i == m_speed)
		{
			/* send frame to init frame cortana */
			if (choice[2] == true)
			{
				sprintf(headers, "Accept: */*\r\nX-Search-SafeSearch: %s\r\nX-Device-MachineId: %s\r\nX-BM-Market: %s\r\nX-BM-DateFormat: %s\r\nX-Device-OSSKU: %d\r\nX-BM-DTZ: %d\r\nX-DeviceID: %s\r\nX-BM-DeviceScale: %d\r\nX-Device-Manufacturer: %s\r\nX-BM-Theme: %s\r\nX-BM-DeviceDimensionsLogical: %s\r\nX-BM-DeviceDimensions: %s\r\nX-Device-Product: %s\r\nX-BM-CBT: 1439740000\r\nX-Device-isOptin: false\r\nAccept-Language: %s\r\nX-Device-Touch: %s\r\nX-Device-ClientSession: %s\r\nX-Search-AppId: Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI\r\nX-BM-ClientFeatures: FontV4, OemEnabled\r\nAccept-Encoding: gzip, deflate\r\nConnection: Keep-Alive\r\n\r\n\r\n", m_corta->get_SafeSearch(), m_corta->get_MachineId(), m_corta->get_Market(), m_corta->get_DateFormat(), m_corta->get_OSSKU(), m_corta->get_DTZ(), m_corta->get_DeviceId(), m_corta->get_DeviceScale(), m_corta->get_DeviceManufacturer(), m_corta->get_Theme(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceProduct(), m_corta->get_Language(), m_corta->get_Touch(), m_corta->get_DeviceSession());

				Random_String(ig, SIZE_CVID_IG);

				wchar_t wtextH[3000];
				mbstowcs(wtextH, headers, strlen(headers) + 1);//Plus null
				LPWSTR ptrH = wtextH;
				if (!SendHTTPSRequest_GET(L"www.bing.com", L"/AS/API/WindowsCortanaPane/V2/Init", L"https://www.bing.com/AS/API/WindowsCortanaPane/V2/Init", ptrH))
				{
					return -1;
				}

			}
			/* send frame to www.bing.com?/manifest/threshold.appcache */
			if (choice[0] == true)
			{
				sprintf(headers, "Accept: */*\
								\r\nX-Search-SafeSearch: %s\
								\r\nX-Device-MachineId: %s\
								\r\nX-BM-Market: %s\
								\r\nX-BM-DateFormat: %s\
								\r\nX-Device-OSSKU: %d\
								\r\nX-Device-NetworkType: %s\
								\r\nX-BM-DTZ: %d\
								\r\nX-BM-UserDisplayName: %s\
								\r\nX-DeviceID: %s\
								\r\nX-BM-DeviceScale: %d\
								\r\nX-Device-Manufacturer: %s\
								\r\nX-BM-Theme: %s\
								\r\nX-BM-DeviceDimensionsLogical: %s\
								\r\nX-BM-DeviceDimensions: %s\
								\r\nX-Device-Product: %s\
								\r\nX-BM-CBT: 1439740000\
								\r\nX-Device-isOptin: false\
								\r\nAccept-Language: %s\
								\r\nX-Device-Touch: %s\
								\r\nX-Device-ClientSession: %s\
								\r\nX-Search-AppId: Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI\
								\r\nOrigin: https://www.bing.com\
								\r\nAccept-Encoding: gzip, deflate\
								\r\n\r\n\r\n", m_corta->get_SafeSearch(), m_corta->get_MachineId(), m_corta->get_Market(), m_corta->get_DateFormat(), m_corta->get_OSSKU(), m_corta->get_NetworkType(), m_corta->get_DTZ(), m_corta->get_UserDisplayName(), m_corta->get_DeviceId(), m_corta->get_DeviceScale(), m_corta->get_DeviceManufacturer(), m_corta->get_Theme(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceProduct(), m_corta->get_Language(), m_corta->get_Touch(), m_corta->get_DeviceSession());
				
				wchar_t wtext[3000];
				mbstowcs(wtext, headers, strlen(headers) + 1);//Plus null
				LPWSTR ptr = wtext;
				if (!SendHTTPSRequest_GET(L"www.bing.com", L"?/manifest/threshold.appcache", L"https://www.bing.com/", ptr))
				{
					return -1;
				}
			}
			/* send a query frame to bing */
			if (choice[1] == true)
			{
				/* on commence par rechercher la chaine de caracère à envoyer*/
				char *query;
				char *subQuery;
				int j;

				Random_String(ig, SIZE_CVID_IG);
				if (m_corta->get_Dico())
				{
					query = dico->Random_Expression();
				}
				else
				{
					query = m_corta->get_Query();
				}
				subQuery = new char[strlen(query) + 1];
				
				for (i = 0; i < strlen(query); i++)
				{
					subQuery[i] = query[i];
					subQuery[i + 1] = '\0';

					sprintf(headers, "Accept: */*\r\nX-BM-ClientFeatures: FontV4, OemEnabled\r\nX-Search-SafeSearch: %s\r\nX-Device-MachineId: %s\r\nX-BM-Market: %s\r\nX-BM-DateFormat: %s\r\nX-Device-OSSKU: %d\r\nX-Device-NetworkType: %s\r\nX-BM-DTZ: %d\r\nX-BM-UserDisplayName: %s\r\nX-DeviceID: %s\r\nX-BM-DeviceScale: %d\r\nX-Device-Manufacturer: %s\r\nX-BM-Theme: %s\r\nX-BM-DeviceDimensionsLogical: %s\r\nX-BM-DeviceDimensions: %s\r\nX-Device-Product: %s\r\nX-BM-CBT: 1439740000\r\nX-Device-isOptin: false\r\nX-Device-Touch: %s\r\nX-Device-ClientSession: %s\r\nX-Search-AppId: Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI\r\nX-MSEdge-ExternalExpType: JointCoord\r\nX-MSEdge-ExternalExp: sup001,pleasenosrm40ct,d-thshld42,d-thshld77,d-thshld78\r\nAccept-Language: %s\r\nAccept-Encoding: gzip, deflate\r\nConnection: Keep-Alive\r\n\r\n\r\n", m_corta->get_SafeSearch(), m_corta->get_MachineId(), m_corta->get_Market(), m_corta->get_DateFormat(), m_corta->get_OSSKU(), m_corta->get_NetworkType(), m_corta->get_DTZ(), m_corta->get_UserDisplayName(), m_corta->get_DeviceId(), m_corta->get_DeviceScale(), m_corta->get_DeviceManufacturer(), m_corta->get_Theme(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceProduct(), m_corta->get_Touch(), m_corta->get_DeviceSession(), m_corta->get_Language());

					sprintf(params, "/AS/API/WindowsCortanaPane/V2/Suggestions?qry=%s&cp=%d&cvid=%s&ig=%s&cc=%s&setlang=%s", subQuery, strlen(m_corta->get_Query()), cvid, ig, m_corta->get_Market(), m_corta->get_Language());

					wchar_t wtextH[3000];
					mbstowcs(wtextH, headers, strlen(headers) + 1);//Plus null
					LPWSTR ptrH = wtextH;
					wchar_t wtextP[1000];
					mbstowcs(wtextP, params, strlen(params) + 1);//Plus null
					LPWSTR ptrP = wtextP;
					if (!SendHTTPSRequest_GET(L"www.bing.com", ptrP, L"https://www.bing.com/AS/API/WindowsCortanaPane/V2/Init", ptrH))
					{
						return -1;
					}
				}
				delete [] (subQuery);
			}
			if (choice[3] == true) //Init
			{
				sprintf(headers, "Accept: */*\
								\r\nX-Search-SafeSearch: %s\
								\r\nX-Device-MachineId: %s\
								\r\nX-BM-Market: %s\
								\r\nX-BM-DateFormat: %s\
								\r\nX-Device-OSSKU: %d\
								\r\nX-BM-DTZ: %d\
								\r\nX-DeviceID: %s\
								\r\nX-BM-DeviceScale: %d\
								\r\nX-Device-Manufacturer: %s\
								\r\nX-BM-Theme: %s\
								\r\nX-BM-DeviceDimensionsLogical: %s\
								\r\nX-BM-DeviceDimensions: %s\
								\r\nX-Device-Product: %s\
								\r\nX-BM-CBT: 1439740000\
								\r\nX-Device-isOptin: false\
								\r\nAccept-Language: %s\
								\r\nX-Device-Touch: %s\
								\r\nX-Device-ClientSession: %s\
								\r\nX-Search-AppId: Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI\
								\r\nX-BM-ClientFeatures: FontV4, OemEnabled\
								\r\nOrigin: https://www.bing.com\
								\r\nAccept-Encoding: gzip, deflate\
								\r\nConnection: Keep-Alive\
								\r\n\r\n\r\n", m_corta->get_SafeSearch(), m_corta->get_MachineId(), m_corta->get_Market(), m_corta->get_DateFormat(), m_corta->get_OSSKU(), m_corta->get_DTZ(), m_corta->get_DeviceId(), m_corta->get_DeviceScale(), m_corta->get_DeviceManufacturer(), m_corta->get_Theme(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceDimensions(), m_corta->get_DeviceProduct(), m_corta->get_Touch(), m_corta->get_DeviceSession(), m_corta->get_Language());

				Random_String(ig, SIZE_CVID_IG);
				sprintf(params, "/zinc?form=WNSBOX&cc=%s&setlang=%s", m_corta->get_Market(), m_corta->get_Language());

				wchar_t wtextH[3000];
				mbstowcs(wtextH, headers, strlen(headers) + 1);//Plus null
				LPWSTR ptrH = wtextH;
				wchar_t wtextP[300];
				mbstowcs(wtextP, params, strlen(params) + 1);//Plus null
				LPWSTR ptrP = wtextP;

				WCHAR ptrR[100] = L"https://www.bing.com";
				//wcscpy(ptrR, L"https://www.bing.com");
				wcscat(ptrR, ptrP);
				if (!SendHTTPSRequest_GET(L"www.bing.com", ptrP, ptrR, ptrH))
				{
					return -1;
				}

			}
			i = 0;
		}
		Sleep(100);
		i++;
		m_corta->set_NbSend(m_corta->get_NbSend() + 1);
	}
	if (m_corta->get_Dico())
	{
		delete dico;
	}
	delete[] headers;
	delete[] params;
	delete[] cvid;
	delete[] ig;
	return 0;
}