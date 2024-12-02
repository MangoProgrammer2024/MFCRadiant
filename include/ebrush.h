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

int EBrushId;//equal to a EBrushType
 //brush types supported
 enum EBrushType{
   //id brushes
   EQuakeBrush = 0, 
   EDoomBrush, 
   EDoomIIBrush,
   EDoomPlusBrush,
   EDoomEternalBrush,
   EWolfensteinBrush, 
   EQuakeIIBrush,
   EQuakeIIIBrush, 
   EDoomIIIBrush,
   EPortalIIBrush,
   //cod brushes
   EBlackOpsVIBrush,
   EMWIIBrush,
   EGhostsBrush,
   EAdvancedWarfareBrush,
   EBlackOpsIIBrush,
   EInfiniteWarfareBrush,
   //sw brushes
   EStarWarsJediSurvivorBrush,
   //misc brushes
   EMiscBrush
 };

bool eLoadType(EBrush * brush);

};

#endif
