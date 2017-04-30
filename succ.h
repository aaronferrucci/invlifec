// Successor 
// This represents a particular 3x3 grid in Conway's Life
// Each of the 9 elements can be alive (1) or dead (0).
class Succ {
    // State of the grid. Here's the bit-index to grid position map:
    // 0 1 2
    // 3 4 5
    // 6 7 8
    int m_v;

  public:
    Succ(int v);
    Succ(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7, int b8);
    void print();
};

