#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THLapack.h"
#else

/* AX=B */
TH_API void THLapack_(gesv)(int n, int nrhs, real_buffer a, int lda, int *ipiv, real_buffer b, int ldb, int* info);
/* ||AX-B|| */
TH_API void THLapack_(gels)(char trans, int m, int n, int nrhs, real_buffer a, int lda, real_buffer b, int ldb, real_buffer work, int lwork, int *info);
/* Eigenvals */
TH_API void THLapack_(syev)(char jobz, char uplo, int n, real_buffer a, int lda, real_buffer w, real_buffer work, int lwork, int *info);
/* Non-sym eigenvals */
TH_API void THLapack_(geev)(char jobvl, char jobvr, int n, real_buffer a, int lda, real_buffer wr, real_buffer wi, real_buffer vl, int ldvl, real_buffer vr, int ldvr, real_buffer work, int lwork, int *info);
/* svd */
TH_API void THLapack_(gesvd)(char jobu, char jobvt, int m, int n, real_buffer a, int lda, real_buffer s, real_buffer u, int ldu, real_buffer vt, int ldvt, real_buffer work, int lwork, int *info);
/* LU decomposition */
TH_API void THLapack_(getrf)(int m, int n, real_buffer a, int lda, int *ipiv, int *info);
/* Matrix Inverse */
TH_API void THLapack_(getri)(int n, real_buffer a, int lda, int *ipiv, real_buffer work, int lwork, int* info);

/* Positive Definite matrices */
/* Cholesky factorization */
void THLapack_(potrf)(char uplo, int n, real_buffer a, int lda, int *info);
/* Matrix inverse based on Cholesky factorization */
void THLapack_(potri)(char uplo, int n, real_buffer a, int lda, int *info);
/* Solve A*X = B with a symmetric positive definite matrix A using the Cholesky factorization */
void THLapack_(potrs)(char uplo, int n, int nrhs, real_buffer a, int lda, real_buffer b, int ldb, int *info);

#endif
