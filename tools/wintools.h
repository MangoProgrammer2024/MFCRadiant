//
#ifndef WINTOOLS_H
#define WINTOOLS_H
//
#define MFC_WINDOW 001
#define MFC_FRAME 002
#define MFC_STRING 003
#define MFC_BUTTON 004
#define MFC_TOOLBAR 005
#define MFC_GRIDSPLITTER 006
#define MFC_TREEVIEW 007
#define MFC_EVENT 008
#define MFC_TEXTBOX 009
#define MFC_SIGNAL 010
#define MFC_RADIO_BUTTON 011
#define MFC_LABEL 012
#define MFC_GRID 013
#define MFC_ICON 014
#define MFC_ERROR 015
//
class MfcTool{
public:
 MfcTool();
  ~MfcTool();
 const char * const MName();
};

#endif
