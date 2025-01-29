#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo402_device(int *, int *, int);

__device__ void foo402_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo402_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo402_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
