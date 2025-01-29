#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo41_device(int *, int *, int);

__device__ void foo41_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo41_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel1 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel2 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel3 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel4 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel5 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel6 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel7 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel8 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel9 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel10 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel11 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel12 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel13 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel14 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel15 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel16 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel17 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel18 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel19 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel20 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel21 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel22 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel23 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel24 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel25 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel26 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel27 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel28 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel29 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel30 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel31 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel32 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel33 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel34 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel35 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel36 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel37 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel38 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel39 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel40 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel41 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel42 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel43 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel44 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel45 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel46 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel47 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel48 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo41_kernel49 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo41_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
