/**
 * M行N列的二维数组b[M][N]中，
 * 若按行优先存储，则b[i][j]的存储地址 = LOC + (i*N+j) * sizeof(ElemType)
 * 若按列优先存储，则b[i][j]的存储地址 = LOC + (j*M+i) * sizeof(ElemType)
*/