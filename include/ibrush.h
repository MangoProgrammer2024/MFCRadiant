#ifndef IBRUSHTABLE_H
#define IBRUSHTABLE_H
class IBrushTable{
public:

 IBrushTable();
  ~IBrushTable();
  typedef float ifloat;
  IBrushTable * table;
  ifloat MAX_BRUSH_NUM[10000];
};
#endif
