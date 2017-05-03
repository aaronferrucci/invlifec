// Predecessor
// The 5x5 grid that came before a successor.
// Like the successor, each grid element (25, here) can be alive (1) or dead
// (0).
class Pred {
  // State of the grid. Bit-index to grid position map:
  //  0  1  2  3  4
  //  5  6  7  8  9
  // 10 11 12 13 14
  // 15 16 17 18 19
  // 20 21 22 23 24
  // Luckily, I can assume an int has at least 25 bits.
  int m_v;
  bool valid;
};

