#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THBlas.h"
#else

/* Level 1 */
TH_API void THBlas_(swap)(long n, buffer x, long incx, buffer y, long incy);
TH_API void THBlas_(scal)(long n, real a, buffer x, long incx);
TH_API void THBlas_(copy)(long n, buffer x, long incx, buffer y, long incy);
TH_API void THBlas_(axpy)(long n, real a, buffer x, long incx, buffer y, long incy);
TH_API real THBlas_(dot)(long n, buffer x, long incx, buffer y, long incy);

/* Level 2 */
TH_API void THBlas_(gemv)(char trans, long m, long n, real alpha, buffer a, long lda, buffer x, long incx, real beta, buffer y, long incy);
TH_API void THBlas_(ger)(long m, long n, real alpha, buffer x, long incx, buffer y, long incy, buffer a, long lda);

/* Level 3 */
TH_API void THBlas_(gemm)(char transa, char transb, long m, long n, long k, real alpha, buffer a, long lda, buffer b, long ldb, real beta, buffer c, long ldc);

#endif
