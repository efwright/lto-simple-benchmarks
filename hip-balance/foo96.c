#include <hip/hip_runtime.h>

extern __device__ int gvar;

__device__ void foo96_device(int *, int *, int);

__device__ void foo96_device(int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];
}


__global__ void foo96_kernel0 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel1 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel2 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel3 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel4 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel5 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel6 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel7 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel8 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel9 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel10 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel11 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel12 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel13 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel14 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel15 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel16 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel17 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel18 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel19 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel20 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel21 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel22 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel23 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel24 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel25 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel26 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel27 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel28 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel29 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel30 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel31 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel32 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel33 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel34 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel35 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel36 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel37 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel38 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel39 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel40 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel41 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel42 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel43 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel44 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel45 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel46 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel47 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel48 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}

__global__ void foo96_kernel49 (int *a, int *b, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = gridDim.x * blockDim.x;

    for(int i=idx; i<n; i+=stride)
        a[i] = a[i] + b[i];

    foo96_device(a, b, n);

    if (idx == 0)
        atomicAdd(&gvar, 1);
}
