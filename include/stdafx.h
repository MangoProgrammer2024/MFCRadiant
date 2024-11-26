#ifndef STDAFX_H 
#define STDAFX_H
//afx error msg 
#define AFX_ERROR_MSG(const char * msg)(msg = "afx had an error\n")
//includes
#include <string>
#include <windows.h>
#include <math.h>
#include "GL.h"
#include "glu.h"
#include <cstdlib.h>
#include <time.h>
//application directory
const std::string&& app_directory;
//c defines for application
CWnd * wnd;
CFrame * wnd_frame;
CPanel * wnd_panel;
CToolbar * wnd_toolbar;
CButton * wnd_button;
CSplitter * wnd_splitter;
CBitmap * wnd_bmp;
//winapi tags
void WINAPI * mLoadApi(CWnd * wnd);
float * winTick(WINAPI*);
//winstring
typedef std::string cstr;
//endif
#endif
