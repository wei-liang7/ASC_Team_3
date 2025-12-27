## 多进程运行脚本及输出结果

```text
==============================================================================================================
cat > run_optimized.sh << 'EOF'

echo "=== HPCG 优化配置（针对14GB内存）==="

SIZE=176
TARGET_TIME=120
THREADS=4

echo "系统内存: ~14GB"
echo "选择问题规模: ${SIZE}^3"
echo "目标运行时间: ${TARGET_TIME}秒"
echo "OpenMP线程数: ${THREADS}"

cat > hpcg.dat << CONFIGEOF
${SIZE} ${SIZE} ${SIZE}
${TARGET_TIME}
1 1 1
1
${THREADS}
1
1
1
1 1 1
CONFIGEOF

echo -e "\n配置文件内容:"
cat hpcg.dat

echo -e "\n=== 开始运行HPCG基准测试 ==="
export OMP_NUM_THREADS=$THREADS
echo "开始时间: $(date)"

/usr/bin/time -v ./bin/xhpcg 2>&1 | tail -20

echo "结束时间: $(date)"

echo -e "\n=== 测试结果 ==="
for file in HPCG-*.txt HPCG-*.yaml; do
    if [ -f "$file" ]; then
        echo "结果文件: $file“
        echo "性能分数 (GFLOP/s):"
        grep -i "gflop" "$file" || grep -i "score" "$file" || tail -10 "$file"
    fi
done
EOF

chmod +x run_optimized.sh
./run_optimized.sh

=============================================================================================================================





=============================================================================================================================
=== HPCG 优化配置（针对14GB内存）===
系统内存: ~14GB
选择问题规模: 176^3
目标运行时间: 120秒
OpenMP线程数: 4

配置文件内容:
176 176 176
120
1 1 1
1
4
1
1
1
1 1 1

=== 开始运行HPCG基准测试 ===
开始时间: Sat Dec 27 12:05:00 CST 2025
	Percent of CPU this job got: 289%
	Elapsed (wall clock) time (h:mm:ss or m:ss): 0:01.52
	Average shared text size (kbytes): 0
	Average unshared data size (kbytes): 0
	Average stack size (kbytes): 0
	Average total size (kbytes): 0
	Maximum resident set size (kbytes): 20504
	Average resident set size (kbytes): 0
	Major (requiring I/O) page faults: 0
	Minor (reclaiming a frame) page faults: 2080
	Voluntary context switches: 663
	Involuntary context switches: 37
	Swaps: 0
	File system inputs: 0
	File system outputs: 24
	Socket messages sent: 0
	Socket messages received: 0
	Signals delivered: 0
	Page size (bytes): 4096
	Exit status: 0
结束时间: Sat Dec 27 12:05:01 CST 2025

=== 测试结果 ===
结果文件: HPCG-Benchmark_3.1_2025-12-25_15-42-21.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.70901
GFLOP/s Summary::Raw WAXPBY=5.56813
GFLOP/s Summary::Raw SpMV=9.23822
GFLOP/s Summary::Raw MG=3.38642
GFLOP/s Summary::Raw Total=3.78738
GFLOP/s Summary::Total with convergence overhead=3.78738
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.6785
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.6785
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-26_23-28-16.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.77523
GFLOP/s Summary::Raw WAXPBY=5.71453
GFLOP/s Summary::Raw SpMV=7.50223
GFLOP/s Summary::Raw MG=3.31121
GFLOP/s Summary::Raw Total=3.66161
GFLOP/s Summary::Total with convergence overhead=3.52078
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.4269
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.4269
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-27_00-01-14.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.40796
GFLOP/s Summary::Raw WAXPBY=5.53592
GFLOP/s Summary::Raw SpMV=8.92497
GFLOP/s Summary::Raw MG=3.35449
GFLOP/s Summary::Raw Total=3.74274
GFLOP/s Summary::Total with convergence overhead=3.74274
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.61871
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.61871
结果文件: HPCG-Benchmark_3.1_2025-12-27_09-13-03.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.56704
GFLOP/s Summary::Raw WAXPBY=5.62657
GFLOP/s Summary::Raw SpMV=9.09189
GFLOP/s Summary::Raw MG=3.3731
GFLOP/s Summary::Raw Total=3.76875
GFLOP/s Summary::Total with convergence overhead=3.76875
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.66719
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.66719
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-27_09-29-06.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=3.86572
GFLOP/s Summary::Raw WAXPBY=5.56714
GFLOP/s Summary::Raw SpMV=9.16088
GFLOP/s Summary::Raw MG=3.42585
GFLOP/s Summary::Raw Total=3.81287
GFLOP/s Summary::Total with convergence overhead=3.7381
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.63165
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.63165
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-27_09-53-53.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=9.69582
GFLOP/s Summary::Raw WAXPBY=8.96136
GFLOP/s Summary::Raw SpMV=6.80306
GFLOP/s Summary::Raw MG=2.51713
GFLOP/s Summary::Raw Total=2.85683
GFLOP/s Summary::Total with convergence overhead=2.85683
GFLOP/s Summary::Total with convergence and optimization phase overhead=2.79883
Final Summary::HPCG result is VALID with a GFLOP/s rating of=2.79883
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-27_10-59-39.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.25791
GFLOP/s Summary::Raw WAXPBY=5.36779
GFLOP/s Summary::Raw SpMV=9.04203
GFLOP/s Summary::Raw MG=3.32282
GFLOP/s Summary::Raw Total=3.70962
GFLOP/s Summary::Total with convergence overhead=3.56694
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.47347
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.47347
------------------------------------------------------------------------------------
结果文件: HPCG-Benchmark_3.1_2025-12-27_12-05-01.txt
性能分数 (GFLOP/s):
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=4.53608
GFLOP/s Summary::Raw WAXPBY=5.74549
GFLOP/s Summary::Raw SpMV=9.30517
GFLOP/s Summary::Raw MG=3.39603
GFLOP/s Summary::Raw Total=3.79779
GFLOP/s Summary::Total with convergence overhead=3.72332
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.61819
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.61819
=============================================================================================================================
