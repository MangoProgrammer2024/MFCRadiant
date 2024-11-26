//QuakeBrush.cpp
#include "include/ebrush.h"
#include "include/stdafx.h"

int g_nBrushId = 0;
//quake brush name
const char * BrushName(EBrush * e){
  static char eBuff[1024];
  if(g_nBrushId = 0){
    e->EBrushType == EQuakeBrush;
    printf("%c", "BrushName");
  };
  return eBuff;
};
