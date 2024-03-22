#ifndef __ADT_SCALES_H
#define __ADT_SCALES_H

#include "NN/GTADModel_v3.h"

namespace hls4ml_axol1tl_v3{
//N_INPUT_1_1=AD_NNNINPUTS
typedef ap_fixed<4,4> ad_shift_t;
typedef ap_fixed<10,9> ad_offset_t;

static const ad_shift_t ad_shift[N_INPUT_1_1] = {3.,  0.,  6.,  2.,  5.,  6.,  1.,  5.,  6.,  1.,  5.,  6.,  0.,  5.,  6.,  1.,  7.,  7., -1.,  0.,  0., -1.,  0.,  0., -1.,  0.,  0.,  4.,  6.,  6.,  3.,  5.,  6.,  3.,  5.,  5.,  3.,  4.,  5.,  2.,  2.,  5.,  1.,  0.,  3., -1.,  0.,  0., -1.,  0.,  0., -1.,  0.,  0., -1.,  0.,  0.};
static const ad_offset_t ad_offsets[N_INPUT_1_1] = {18., 0., 72., 7., 0., 70., 3., 0., 68., 2., 0., 68.,  2., 0., 66., 2., 0., 212., 0., 0., 0., 0., 0., 0., 0., 0., 0., 23., 0., 68., 15.5, 0., 66., 11.5, 0., 64., 9., 0., 58., 6., 1., 44., 3., 0., 14., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
}
#endif
