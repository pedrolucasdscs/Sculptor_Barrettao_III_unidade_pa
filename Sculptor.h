#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"

class Sculptor{
	
  protected:
  voxel*** v; // ponteiro para matriz tridimensional
  float r, g, b, a; // Propriedades cor e transparencia
  int nx, ny, nz; // dimensões
  
  
  public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  
  void setColor(float r, float g, float b, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(const char* filename);
  
};



#endif // SCULPTOR_H
