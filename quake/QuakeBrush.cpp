//QuakeBrush.cpp
#include "include/ebrush.h"
#include "include/stdafx.h"

int g_nBrushId = 0;
//quake brush name
const char * QuakeBrush(EBrush * e){
  static char eBuff[1024];
    if(/*brushpreferences.gametype = "Quake*/){
      e->EBrushType == EQuakeBrush;
      printf("%c", "BrushName");
    };
  return eBuff;
};
