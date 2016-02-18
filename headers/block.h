#ifndef BLOCK_H
#define BLOCK_H

class Block {
  private:
    int _x, _y;
  public:
    Block ();
    int GetX ();
    int GetY ();
    void SetX (int x);
    void SetY (int y);
}

#endif
