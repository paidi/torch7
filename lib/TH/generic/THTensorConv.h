#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THTensorConv.h"
#else


TH_API void THTensor_(validXCorr2Dptr)(buffer r_,
                                    real alpha,
                                    buffer t_, long ir, long ic,
                                    buffer k_, long kr, long kc,
                                    long sr, long sc);

TH_API void THTensor_(validConv2Dptr)(buffer r_,
                                   real alpha,
                                   buffer t_, long ir, long ic,
                                   buffer k_, long kr, long kc,
                                   long sr, long sc);

TH_API void THTensor_(fullXCorr2Dptr)(buffer r_,
                                   real alpha,
                                   buffer t_, long ir, long ic,
                                   buffer k_, long kr, long kc,
                                   long sr, long sc);

TH_API void THTensor_(fullConv2Dptr)(buffer r_,
                                  real alpha,
                                  buffer t_, long ir, long ic,
                                  buffer k_, long kr, long kc,
                                  long sr, long sc);

TH_API void THTensor_(validXCorr2DRevptr)(buffer r_,
                                       real alpha,
                                       buffer t_, long ir, long ic,
                                       buffer k_, long kr, long kc,
                                       long sr, long sc);

TH_API void THTensor_(conv2DRevger)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol);
TH_API void THTensor_(conv2DRevgerm)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol);
TH_API void THTensor_(conv2Dger)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv2Dmv)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv2Dmm)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv2Dmul)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv2Dcmul)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long srow, long scol, const char *vf, const char *xc);

TH_API void THTensor_(validXCorr3Dptr)(buffer r_,
                                    real alpha,
                                    buffer t_, long it, long ir, long ic,
                                    buffer k_, long kt, long kr, long kc,
                                    long st, long sr, long sc);

TH_API void THTensor_(validConv3Dptr)(buffer r_,
                                   real alpha,
                                   buffer t_, long it, long ir, long ic,
                                   buffer k_, long kt, long kr, long kc,
                                   long st, long sr, long sc);

TH_API void THTensor_(fullXCorr3Dptr)(buffer r_,
                                   real alpha,
                                   buffer t_, long it, long ir, long ic,
                                   buffer k_, long kt, long kr, long kc,
                                   long st, long sr, long sc);

TH_API void THTensor_(fullConv3Dptr)(buffer r_,
                                  real alpha,
                                  buffer t_, long it, long ir, long ic,
                                  buffer k_, long kt, long kr, long kc,
                                  long st, long sr, long sc);

TH_API void THTensor_(validXCorr3DRevptr)(buffer r_,
                                       real alpha, 
                                       buffer t_, long it, long ir, long ic,
                                       buffer k_, long kt, long kr, long kc,
                                       long st, long sr, long sc);

TH_API void THTensor_(conv3DRevger)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long sdepth, long srow, long scol);
TH_API void THTensor_(conv3Dger)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long sdepth, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv3Dmv)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long sdepth, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv3Dmul)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long sdepth, long srow, long scol, const char *vf, const char *xc);
TH_API void THTensor_(conv3Dcmul)(THTensor *r_, real beta, real alpha, THTensor *t_, THTensor *k_, long sdepth, long srow, long scol, const char *vf, const char *xc);

#endif
