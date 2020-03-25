# BenchUtil
CPU Benchmarking Tool by calculating IOPS and FLOPS.

## Build Binaries
```fish
  $ make
```

## Cleaning Old Build
```fish
  $ make clean
```

## Install Binaries
```fish
  $ sudo make install
```

## Uninstall Binaries
```fish
  $ sudo make uninstall
```

## Usage
```sh
  $ iops32 $(nproc)
  $ iops64 $(nproc)
  $ flops32 $(nproc)
  $ flops64 $(nproc)
```
