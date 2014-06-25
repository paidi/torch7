#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THLapack.h"
#else

/* AX=B */
TH_API void THLapack_(gesv)(int n, int nrhs, buffer a, int lda, int *ipiv, buffer b, int ldb, int* info);
/* ||AX-B|| */
TH_API void THLapack_(gels)(char trans, int m, int n, int nrhs, buffer a, int lda, buffer b, int ldb, buffer work, int lwork, int *info);
/* Eigenvals */
TH_API void THLapack_(syev)(char jobz, char uplo, int n, buffer a, int lda, buffer w, buffer work, int lwork, int *info);
/* Non-sym eigenvals */
TH_API void THLapack_(geev)(char jobvl, char jobvr, int n, buffer a, int lda, buffer wr, buffer wi, buffer vl, int ldvl, buffer vr, int ldvr, buffer work, int lwork, int *info);
/* svd */
TH_API void THLapack_(gesvd)(char jobu, char jobvt, int m, int n, buffer a, int lda, buffer s, buffer u, int ldu, buffer vt, int ldvt, buffer work, int lwork, int *info);
/* LU decomposition */
TH_API void THLapack_(getrf)(int m, int n, buffer a, int lda, int *ipiv, int *info);
/* Matrix Inverse */
TH_API void THLapack_(getri)(int n, buffer a, int lda, int *ipiv, buffer work, int lwork, int* info);

/* Positive Definite matrices */
/* Cholesky factorization */
void THLapack_(potrf)(char uplo, int n, buffer a, int lda, int *info);
/* Matrix inverse based on Cholesky factorization */
void THLapack_(potri)(char uplo, int n, buffer a, int lda, int *info);
/* Solve A*X = B with a symmetric positive definite matrix A using the Cholesky factorization */
void THLapack_(potrs)(char uplo, int n, int nrhs, buffer a, int lda, buffer b, int ldb, int *info);

#endif
