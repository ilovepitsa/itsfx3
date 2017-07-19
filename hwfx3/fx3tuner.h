#ifndef FX3TUNER_H
#define FX3TUNER_H

#include "fx3devifce.h"

class Fx3Tuner
{
public:
    Fx3Tuner(FX3DevIfce* dev);

    const int BandL2 = 0;
    const int BandL1 = 1;
    void SetPLL( int pll_idx, int band, int is_enable );
    void SetFreqDivs( int pll_idx, uint32_t N, uint32_t R );

protected:
    FX3DevIfce* dev = nullptr;

private:
    void pause();
};

#endif // FX3TUNER_H