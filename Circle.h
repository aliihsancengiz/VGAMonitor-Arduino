
class  CircleObj
{ 
   public:
    float x,y,r,xV,yV;
    boolean moving;
    CircleObj(float x,float y,float r){
      this->x=x;
      this->y=y;
      this->r=r;
      this->xV=1;
      this->yV=1;
      this->moving=true;
    }
    void incX()
    {
      if(this->moving)
         this->x+=xV; 
    }
    void incY()
    {
      if(this->moving)
        this->y+=yV; 
    }
    void setMoving(boolean m)
    {
      this->moving=m; 
    }
    void check()
    {
      if((this->x+this->r/2) > 160 )
      {
        xV*=-1;
      }
      if((this->y+this->r/2) > 90)
      {
       yV*=-1; 
      }
      if((this->x-this->r/2)<0)
      {
        xV*=-1;
      }
      if((this->y-this->r/2)<0)
      {
        yV*=-1;
      }

    }
};
 
