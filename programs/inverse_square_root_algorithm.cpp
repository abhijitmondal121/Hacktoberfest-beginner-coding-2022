int mySqrt(int x) {
    // QUAKE-3 inverse square root algorithm
    long i=0;
    memset(&i, 0, sizeof(i));
    float x2=0,y=0;
    const float threehalfs = 1.5F;
    x2 = (float)x*0.5F;
    y = (float)x;
    // i = *(long*)&y;
    i = 0x5f3759df-(i>>1);
    y = *(float *)&i;
    y = y*(threehalfs - (x2*y*y));
    return (int)y;
}