#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo72_device(int *, int *, int);

__device__ void foo72_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo72_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel1 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel2 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel3 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel4 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel5 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel6 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel7 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel8 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel9 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel10 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel11 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel12 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel13 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel14 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel15 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel16 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel17 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel18 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel19 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel20 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel21 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel22 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel23 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel24 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel25 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel26 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel27 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel28 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel29 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel30 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel31 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel32 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel33 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel34 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel35 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel36 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel37 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel38 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel39 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel40 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel41 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel42 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel43 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel44 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel45 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel46 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel47 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel48 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo72_kernel49 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo72_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
