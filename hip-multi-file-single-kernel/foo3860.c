#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo3860_device(int *, int *, int);

__device__ void foo3860_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo3860_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo3860_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
