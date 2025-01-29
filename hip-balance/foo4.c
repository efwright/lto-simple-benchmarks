#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo4_device(int *, int *, int);

__device__ void foo4_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo4_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel1 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel2 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel3 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel4 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel5 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel6 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel7 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel8 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel9 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel10 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel11 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel12 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel13 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel14 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel15 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel16 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel17 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel18 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel19 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel20 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel21 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel22 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel23 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel24 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel25 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel26 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel27 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel28 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel29 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel30 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel31 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel32 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel33 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel34 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel35 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel36 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel37 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel38 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel39 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel40 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel41 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel42 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel43 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel44 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel45 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel46 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel47 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel48 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo4_kernel49 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo4_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
