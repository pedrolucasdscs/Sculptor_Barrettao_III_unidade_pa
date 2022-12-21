#include "CutEllipsoid.h"
#include <iostream>
#include <cmath>

CutEllipsoid::CutEllipsoid(int xcenter,int ycenter,int zcenter,int rx,int ry,int rz)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void CutEllipsoid::draw(Sculptor &s){
  int i,j,k;
  float SegX, SegY, SegZ;
  
  for(i = (xcenter - rx);i < (xcenter + rx);i++){
    for(j = (ycenter - ry);j < (ycenter + ry);j++){
      for(k = (zcenter - rz);k < (zcenter + rz);k++){

        SegX= pow(i-xcenter,2) / pow (rx,2); 
        SegY= pow(j-ycenter,2) / pow (ry,2);
        SegZ= pow(k-zcenter,2) / pow (rz,2);

        if((SegX + SegY + SegZ)<=1){
          s.cutVoxel(i,j,k);
        }
      }
    }
  }
}
