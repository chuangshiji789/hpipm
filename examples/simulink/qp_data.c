/***************
* dim
***************/
/* N */
int N = 20;
/* nx */
static int nnx[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, };
int *nx = nnx;
/* nu */
static int nnu[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, };
int *nu = nnu;
/* nbx */
static int nnbx[] = {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *nbx = nnbx;
/* nbu */
static int nnbu[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *nbu = nnbu;
/* ng */
static int nng[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *ng = nng;
/* nsbx */
static int nnsbx[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *nsbx = nnsbx;
/* nsbu */
static int nnsbu[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *nsbu = nnsbu;
/* nsg */
static int nnsg[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
int *nsg = nnsg;
/***************
* qp
***************/
/* A */
static double A0[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A1[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A2[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A3[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A4[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A5[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A6[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A7[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A8[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A9[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A10[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A11[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A12[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A13[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A14[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A15[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A16[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A17[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A18[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double A19[] = {9.000000000000000e-01, -2.000000000000000e-01, -1.000000000000000e-02, 3.000000000000000e-01, };
static double *AA[] = {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, };
double **hA = AA;
/* B */
static double B0[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B1[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B2[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B3[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B4[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B5[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B6[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B7[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B8[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B9[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B10[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B11[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B12[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B13[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B14[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B15[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B16[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B17[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B18[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double B19[] = {2.000000000000000e-01, 1.000000000000000e-01, };
static double *BB[] = {B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, B13, B14, B15, B16, B17, B18, B19, };
double **hB = BB;
/* b */
static double b0[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b1[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b2[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b3[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b4[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b5[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b6[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b7[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b8[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b9[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b10[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b11[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b12[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b13[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b14[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b15[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b16[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b17[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b18[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double b19[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double *bb[] = {b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, };
double **hb = bb;
/* Q */
static double Q0[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q1[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q2[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q3[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q4[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q5[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q6[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q7[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q8[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q9[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q10[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q11[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q12[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q13[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q14[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q15[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q16[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q17[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q18[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q19[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double Q20[] = {1.000000000000000e+02, 0.000000000000000e+00, 0.000000000000000e+00, 1.000000000000000e+02, };
static double *QQ[] = {Q0, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, };
double **hQ = QQ;
/* S */
static double S0[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S1[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S2[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S3[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S4[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S5[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S6[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S7[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S8[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S9[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S10[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S11[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S12[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S13[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S14[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S15[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S16[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S17[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S18[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S19[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double S20[] = {};
static double *SS[] = {S0, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20, };
double **hS = SS;
/* R */
static double R0[] = {1.000000000000000e-03, };
static double R1[] = {1.000000000000000e-03, };
static double R2[] = {1.000000000000000e-03, };
static double R3[] = {1.000000000000000e-03, };
static double R4[] = {1.000000000000000e-03, };
static double R5[] = {1.000000000000000e-03, };
static double R6[] = {1.000000000000000e-03, };
static double R7[] = {1.000000000000000e-03, };
static double R8[] = {1.000000000000000e-03, };
static double R9[] = {1.000000000000000e-03, };
static double R10[] = {1.000000000000000e-03, };
static double R11[] = {1.000000000000000e-03, };
static double R12[] = {1.000000000000000e-03, };
static double R13[] = {1.000000000000000e-03, };
static double R14[] = {1.000000000000000e-03, };
static double R15[] = {1.000000000000000e-03, };
static double R16[] = {1.000000000000000e-03, };
static double R17[] = {1.000000000000000e-03, };
static double R18[] = {1.000000000000000e-03, };
static double R19[] = {1.000000000000000e-03, };
static double R20[] = {};
static double *RR[] = {R0, R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, };
double **hR = RR;
/* r */
static double r0[] = {0.000000000000000e+00, };
static double r1[] = {0.000000000000000e+00, };
static double r2[] = {0.000000000000000e+00, };
static double r3[] = {0.000000000000000e+00, };
static double r4[] = {0.000000000000000e+00, };
static double r5[] = {0.000000000000000e+00, };
static double r6[] = {0.000000000000000e+00, };
static double r7[] = {0.000000000000000e+00, };
static double r8[] = {0.000000000000000e+00, };
static double r9[] = {0.000000000000000e+00, };
static double r10[] = {0.000000000000000e+00, };
static double r11[] = {0.000000000000000e+00, };
static double r12[] = {0.000000000000000e+00, };
static double r13[] = {0.000000000000000e+00, };
static double r14[] = {0.000000000000000e+00, };
static double r15[] = {0.000000000000000e+00, };
static double r16[] = {0.000000000000000e+00, };
static double r17[] = {0.000000000000000e+00, };
static double r18[] = {0.000000000000000e+00, };
static double r19[] = {0.000000000000000e+00, };
static double r20[] = {};
static double *rr[] = {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, };
double **hr = rr;
/* q */
static double q0[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q1[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q2[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q3[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q4[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q5[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q6[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q7[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q8[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q9[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q10[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q11[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q12[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q13[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q14[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q15[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q16[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q17[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q18[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q19[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double q20[] = {1.000000000000000e+00, 1.000000000000000e+00, };
static double *qq[] = {q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, q16, q17, q18, q19, q20, };
double **hq = qq;
/* idxbu */
static int idxbu0[] = {};
static int idxbu1[] = {};
static int idxbu2[] = {};
static int idxbu3[] = {};
static int idxbu4[] = {};
static int idxbu5[] = {0, 0, };
static int idxbu6[] = {};
static int idxbu7[] = {};
static int idxbu8[] = {};
static int idxbu9[] = {};
static int idxbu10[] = {};
static int idxbu11[] = {};
static int idxbu12[] = {};
static int idxbu13[] = {};
static int idxbu14[] = {};
static int idxbu15[] = {};
static int idxbu16[] = {};
static int idxbu17[] = {};
static int idxbu18[] = {};
static int idxbu19[] = {};
static int idxbu20[] = {};
static int *iidxbu[] = {idxbu0, idxbu1, idxbu2, idxbu3, idxbu4, idxbu5, idxbu6, idxbu7, idxbu8, idxbu9, idxbu10, idxbu11, idxbu12, idxbu13, idxbu14, idxbu15, idxbu16, idxbu17, idxbu18, idxbu19, idxbu20, };
int **hidxbu = iidxbu;
/* lbu */
static double lbu0[] = {};
static double lbu1[] = {};
static double lbu2[] = {};
static double lbu3[] = {};
static double lbu4[] = {};
static double lbu5[] = {0.000000000000000e+00, 0.000000000000000e+00, };
static double lbu6[] = {};
static double lbu7[] = {};
static double lbu8[] = {};
static double lbu9[] = {};
static double lbu10[] = {};
static double lbu11[] = {};
static double lbu12[] = {};
static double lbu13[] = {};
static double lbu14[] = {};
static double lbu15[] = {};
static double lbu16[] = {};
static double lbu17[] = {};
static double lbu18[] = {};
static double lbu19[] = {};
static double lbu20[] = {};
static double *llbu[] = {lbu0, lbu1, lbu2, lbu3, lbu4, lbu5, lbu6, lbu7, lbu8, lbu9, lbu10, lbu11, lbu12, lbu13, lbu14, lbu15, lbu16, lbu17, lbu18, lbu19, lbu20, };
double **hlbu = llbu;
/* ubu */
static double ubu0[] = {};
static double ubu1[] = {};
static double ubu2[] = {};
static double ubu3[] = {};
static double ubu4[] = {};
static double ubu5[] = {-0.000000000000000e+00, -0.000000000000000e+00, };
static double ubu6[] = {};
static double ubu7[] = {};
static double ubu8[] = {};
static double ubu9[] = {};
static double ubu10[] = {};
static double ubu11[] = {};
static double ubu12[] = {};
static double ubu13[] = {};
static double ubu14[] = {};
static double ubu15[] = {};
static double ubu16[] = {};
static double ubu17[] = {};
static double ubu18[] = {};
static double ubu19[] = {};
static double ubu20[] = {};
static double *uubu[] = {ubu0, ubu1, ubu2, ubu3, ubu4, ubu5, ubu6, ubu7, ubu8, ubu9, ubu10, ubu11, ubu12, ubu13, ubu14, ubu15, ubu16, ubu17, ubu18, ubu19, ubu20, };
double **hubu = uubu;
/* idxbx */
static int idxbx0[] = {0, 1, };
static int idxbx1[] = {};
static int idxbx2[] = {};
static int idxbx3[] = {};
static int idxbx4[] = {};
static int idxbx5[] = {};
static int idxbx6[] = {};
static int idxbx7[] = {};
static int idxbx8[] = {};
static int idxbx9[] = {};
static int idxbx10[] = {};
static int idxbx11[] = {};
static int idxbx12[] = {};
static int idxbx13[] = {};
static int idxbx14[] = {};
static int idxbx15[] = {};
static int idxbx16[] = {};
static int idxbx17[] = {};
static int idxbx18[] = {};
static int idxbx19[] = {};
static int idxbx20[] = {};
static int *iidxbx[] = {idxbx0, idxbx1, idxbx2, idxbx3, idxbx4, idxbx5, idxbx6, idxbx7, idxbx8, idxbx9, idxbx10, idxbx11, idxbx12, idxbx13, idxbx14, idxbx15, idxbx16, idxbx17, idxbx18, idxbx19, idxbx20, };
int **hidxbx = iidxbx;
/* lbx */
static double lbx0[] = {-1.000000000000000e+00, 3.000000000000000e+00, };
static double lbx1[] = {};
static double lbx2[] = {};
static double lbx3[] = {};
static double lbx4[] = {};
static double lbx5[] = {};
static double lbx6[] = {};
static double lbx7[] = {};
static double lbx8[] = {};
static double lbx9[] = {};
static double lbx10[] = {};
static double lbx11[] = {};
static double lbx12[] = {};
static double lbx13[] = {};
static double lbx14[] = {};
static double lbx15[] = {};
static double lbx16[] = {};
static double lbx17[] = {};
static double lbx18[] = {};
static double lbx19[] = {};
static double lbx20[] = {};
static double *llbx[] = {lbx0, lbx1, lbx2, lbx3, lbx4, lbx5, lbx6, lbx7, lbx8, lbx9, lbx10, lbx11, lbx12, lbx13, lbx14, lbx15, lbx16, lbx17, lbx18, lbx19, lbx20, };
double **hlbx = llbx;
/* ubx */
static double ubx0[] = {-1.000000000000000e+00, 3.000000000000000e+00, };
static double ubx1[] = {};
static double ubx2[] = {};
static double ubx3[] = {};
static double ubx4[] = {};
static double ubx5[] = {};
static double ubx6[] = {};
static double ubx7[] = {};
static double ubx8[] = {};
static double ubx9[] = {};
static double ubx10[] = {};
static double ubx11[] = {};
static double ubx12[] = {};
static double ubx13[] = {};
static double ubx14[] = {};
static double ubx15[] = {};
static double ubx16[] = {};
static double ubx17[] = {};
static double ubx18[] = {};
static double ubx19[] = {};
static double ubx20[] = {};
static double *uubx[] = {ubx0, ubx1, ubx2, ubx3, ubx4, ubx5, ubx6, ubx7, ubx8, ubx9, ubx10, ubx11, ubx12, ubx13, ubx14, ubx15, ubx16, ubx17, ubx18, ubx19, ubx20, };
double **hubx = uubx;
/* C */
static double C0[] = {};
static double C1[] = {};
static double C2[] = {};
static double C3[] = {};
static double C4[] = {};
static double C5[] = {};
static double C6[] = {};
static double C7[] = {};
static double C8[] = {};
static double C9[] = {};
static double C10[] = {};
static double C11[] = {};
static double C12[] = {};
static double C13[] = {};
static double C14[] = {};
static double C15[] = {};
static double C16[] = {};
static double C17[] = {};
static double C18[] = {};
static double C19[] = {};
static double C20[] = {};
static double *CC[] = {C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19, C20, };
double **hC = CC;
/* D */
static double D0[] = {};
static double D1[] = {};
static double D2[] = {};
static double D3[] = {};
static double D4[] = {};
static double D5[] = {};
static double D6[] = {};
static double D7[] = {};
static double D8[] = {};
static double D9[] = {};
static double D10[] = {};
static double D11[] = {};
static double D12[] = {};
static double D13[] = {};
static double D14[] = {};
static double D15[] = {};
static double D16[] = {};
static double D17[] = {};
static double D18[] = {};
static double D19[] = {};
static double D20[] = {};
static double *DD[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13, D14, D15, D16, D17, D18, D19, D20, };
double **hD = DD;
/* lg */
static double lg0[] = {};
static double lg1[] = {};
static double lg2[] = {};
static double lg3[] = {};
static double lg4[] = {};
static double lg5[] = {};
static double lg6[] = {};
static double lg7[] = {};
static double lg8[] = {};
static double lg9[] = {};
static double lg10[] = {};
static double lg11[] = {};
static double lg12[] = {};
static double lg13[] = {};
static double lg14[] = {};
static double lg15[] = {};
static double lg16[] = {};
static double lg17[] = {};
static double lg18[] = {};
static double lg19[] = {};
static double lg20[] = {};
static double *llg[] = {lg0, lg1, lg2, lg3, lg4, lg5, lg6, lg7, lg8, lg9, lg10, lg11, lg12, lg13, lg14, lg15, lg16, lg17, lg18, lg19, lg20, };
double **hlg = llg;
/* ug */
static double ug0[] = {};
static double ug1[] = {};
static double ug2[] = {};
static double ug3[] = {};
static double ug4[] = {};
static double ug5[] = {};
static double ug6[] = {};
static double ug7[] = {};
static double ug8[] = {};
static double ug9[] = {};
static double ug10[] = {};
static double ug11[] = {};
static double ug12[] = {};
static double ug13[] = {};
static double ug14[] = {};
static double ug15[] = {};
static double ug16[] = {};
static double ug17[] = {};
static double ug18[] = {};
static double ug19[] = {};
static double ug20[] = {};
static double *uug[] = {ug0, ug1, ug2, ug3, ug4, ug5, ug6, ug7, ug8, ug9, ug10, ug11, ug12, ug13, ug14, ug15, ug16, ug17, ug18, ug19, ug20, };
double **hug = uug;
/* Zl */
double **hZl;
/* Zu */
double **hZu;
/* zl */
double **hzl;
/* zu */
double **hzu;
/* idxs_rev */
int **hidxs_rev;
/* idxs */
int **hidxs;
/* lls */
double **hlls;
/* lus */
double **hlus;
/***************
* arg
***************/
/* mode */
int mode = 1;
/* iter_max */
int iter_max = 20;
/* alpha_min */
double alpha_min = 1.000000000000000e-12;
/* mu0 */
double mu0 = 1.000000000000000e+04;
/* tol_stat */
double tol_stat = 1.000000000000000e-04;
/* tol_eq */
double tol_eq = 1.000000000000000e-05;
/* tol_ineq */
double tol_ineq = 1.000000000000000e-05;
/* tol_comp */
double tol_comp = 1.000000000000000e-05;
/* reg_prim */
double reg_prim = 1.000000000000000e-12;
/* warm_start */
int warm_start = 0;
/* pred_corr */
int pred_corr = 1;
/* ric_alg */
int ric_alg = 1;