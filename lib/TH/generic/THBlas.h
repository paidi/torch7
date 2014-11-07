#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THBlas.h"
#else

/* Level 1 */
TH_API void THBlas_(swap)(long n, real_buffer x, long incx, real_buffer y, long incy);
TH_API void THBlas_(scal)(long n, real a, real_buffer x, long incx);
TH_API void THBlas_(copy)(long n, real_buffer x, long incx, real_buffer y, long incy);
TH_API void THBlas_(axpy)(long n, real a, real_buffer x, long incx, real_buffer y, long incy);
TH_API real THBlas_(dot)(long n, real_buffer x, long incx, real_buffer y, long incy);

/* Level 2 */
TH_API void THBlas_(gemv)(char trans, long m, long n, real alpha, real_buffer a, long lda, real_buffer x, long incx, real beta, real_buffer y, long incy);
TH_API void THBlas_(ger)(long m, long n, real alpha, real_buffer x, long incx, real_buffer y, long incy, real_buffer a, long lda);

/* Level 3 */
TH_API void THBlas_(gemm)(char transa, char transb, long m, long n, long k, real alpha, real_buffer a, long lda, real_buffer b, long ldb, real beta, real_buffer c, long ldc);

#endif
