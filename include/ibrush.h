#ifndef EBRUSHTABLE_H
#define EBRUSHTABLE_H
class EBrushTable{
public:

 EBrushTable();
  ~EBrushTable();
  typedef float ifloat;
  EBrushTable * table;
  ifloat MAX_BRUSH_NUM[10000];
};
#endif
#ifndef EBRUSH_H
#define EBRUSH_H
class EBrush{
public:

 EBrush();
  ~EBrush();
 enum EBrushType{
   //id brushes
   EQuakeBrush = 0, EDoomBrush, EDoomIIBrush,EDoomPlusBrush,
   EDoomEternalBrush, ERageBrush, EWolfensteinBrush, EQuakeIIBrush,
   EQuakeIIIBrush, EDoomIIIBrush,
   //cod brushes
   EBlackOpsVIBrush, EMWIIBrush, EGhostsBrush, EAdvancedWarfareBrush, EBlackOpsIIBrush, EInfiniteWarfareBrush
   //
 };

};

#endif
