#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo84_device(int *, int *, int);

__device__ void foo84_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo84_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel1 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel2 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel3 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel4 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel5 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel6 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel7 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel8 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel9 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel10 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel11 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel12 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel13 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel14 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel15 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel16 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel17 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel18 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel19 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel20 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel21 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel22 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel23 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel24 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel25 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel26 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel27 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel28 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel29 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel30 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel31 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel32 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel33 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel34 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel35 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel36 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel37 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel38 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel39 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel40 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel41 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel42 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel43 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel44 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel45 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel46 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel47 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel48 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo84_kernel49 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo84_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
