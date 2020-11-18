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

## Benchmark Results!!
Hey, if you used this tool to benchmark your processor's raw IOPS and FLOPS you can add it here by a Pull Request!
You PR your test results for different devices, diversity is great! 

---
### user: [shaswata56](https://github.com/shaswata56)

### CPU: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz

```
./iops64 8
Benchmarking for 64 Bit Integer operations per second
1| Tr 1: 1124851040 Tr 2: 793884201 Tr 3: 771428733 Tr 4: 1005115326 Tr 5: 734654499 Tr 6: 876540800 Tr 7: 1652518115 Tr 8: 1639176159 IOPS = 8598168873
Maximum CPU Throughput: 8.598168 Gigaiops.
Maximum Single Core Throughput: 1.652518 Gigaiops.

./flops64 8
Benchmarking for 64 Bit Floating point operations per second
1| Tr 1: 1224104106 Tr 2: 1490004774 Tr 3: 632462621 Tr 4: 994263362 Tr 5: 632271057 Tr 6: 1349505497 Tr 7: 994876034 Tr 8: 637448332 FLOPS = 7954935783
Maximum CPU Throughput: 7.954936 Gigaflops.
Maximum Single Core Throughput: 1.490005 Gigaflops.
```
