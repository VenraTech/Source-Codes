DWORD64 xrl;

VOID SeedXorshift64(DWORD dwXor) {
  xrl = dwXor;
}

DWORD64 Xorshift64(VOID) {
  xrl ^= xrl >> 13;
  xrl ^= xrl << 17;
  xrl ^= xrl >> 5;
  return xrl;
}
