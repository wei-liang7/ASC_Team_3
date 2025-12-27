## 单进程运行命令

mpirun -np 1 ./xhpcg --nx=1 --ny=1 --nz=1

## 输出结果

```text
=====================================================================================================================================================================
HPCG-Benchmark
version=3.1
Release date=March 28, 2019
Machine Summary=
Machine Summary::Distributed Processes=1
Machine Summary::Threads per processes=2
Global Problem Dimensions=
Global Problem Dimensions::Global nx=16
Global Problem Dimensions::Global ny=16
Global Problem Dimensions::Global nz=16
Processor Dimensions=
Processor Dimensions::npx=1
Processor Dimensions::npy=1
Processor Dimensions::npz=1
Local Domain Dimensions=
Local Domain Dimensions::nx=16
Local Domain Dimensions::ny=16
Local Domain Dimensions::Lower ipz=0
Local Domain Dimensions::Upper ipz=0
Local Domain Dimensions::nz=16
########## Problem Summary  ##########=
Setup Information=
Setup Information::Setup Time=0.00734872
Linear System Information=
Linear System Information::Number of Equations=4096
Linear System Information::Number of Nonzero Terms=97336
Multigrid Information=
Multigrid Information::Number of coarse grid levels=3
Multigrid Information::Coarse Grids=
Multigrid Information::Coarse Grids::Grid Level=1
Multigrid Information::Coarse Grids::Number of Equations=512
Multigrid Information::Coarse Grids::Number of Nonzero Terms=10648
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
Multigrid Information::Coarse Grids::Grid Level=2
Multigrid Information::Coarse Grids::Number of Equations=64
Multigrid Information::Coarse Grids::Number of Nonzero Terms=1000
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
Multigrid Information::Coarse Grids::Grid Level=3
Multigrid Information::Coarse Grids::Number of Equations=8
Multigrid Information::Coarse Grids::Number of Nonzero Terms=64
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
########## Memory Use Summary  ##########=
Memory Use Information=
Memory Use Information::Total memory used for data (Gbytes)=0.00292902
Memory Use Information::Memory used for OptimizeProblem data (Gbytes)=0
Memory Use Information::Bytes per equation (Total memory / Number of Equations)=715.092
Memory Use Information::Memory used for linear system and CG (Gbytes)=0.00257652
Memory Use Information::Coarse Grids=
Memory Use Information::Coarse Grids::Grid Level=1
Memory Use Information::Coarse Grids::Memory used=0.000308216
Memory Use Information::Coarse Grids::Grid Level=2
Memory Use Information::Coarse Grids::Memory used=3.8968e-05
Memory Use Information::Coarse Grids::Grid Level=3
Memory Use Information::Coarse Grids::Memory used=5.312e-06
########## V&V Testing Summary  ##########=
Spectral Convergence Tests=
Spectral Convergence Tests::Result=PASSED
Spectral Convergence Tests::Unpreconditioned=
Spectral Convergence Tests::Unpreconditioned::Maximum iteration count=11
Spectral Convergence Tests::Unpreconditioned::Expected iteration count=12
Spectral Convergence Tests::Preconditioned=
Spectral Convergence Tests::Preconditioned::Maximum iteration count=1
Spectral Convergence Tests::Preconditioned::Expected iteration count=2
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon=
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Result=PASSED
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Departure for SpMV=5.24693e-06
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Departure for MG=6.55866e-07
########## Iterations Summary  ##########=
Iteration Count Information=
Iteration Count Information::Result=PASSED
Iteration Count Information::Reference CG iterations per set=50
Iteration Count Information::Optimized CG iterations per set=50
Iteration Count Information::Total number of reference iterations=50
Iteration Count Information::Total number of optimized iterations=50
########## Reproducibility Summary  ##########=
Reproducibility Information=
Reproducibility Information::Result=PASSED
Reproducibility Information::Scaled residual mean=1.65641e-41
Reproducibility Information::Scaled residual variance=0
########## Performance Summary (times in sec) ##########=
Benchmark Time Summary=
Benchmark Time Summary::Optimization phase=2.6e-08
Benchmark Time Summary::DDOT=0.00018907
Benchmark Time Summary::WAXPBY=0.000182808
Benchmark Time Summary::SpMV=0.00185695
Benchmark Time Summary::MG=0.018015
Benchmark Time Summary::Total=0.0202554
Floating Point Operations Summary=
Floating Point Operations Summary::Raw DDOT=1.23699e+06
Floating Point Operations Summary::Raw WAXPBY=1.23699e+06
Floating Point Operations Summary::Raw SpMV=9.92827e+06
Floating Point Operations Summary::Raw MG=5.45048e+07
Floating Point Operations Summary::Total=6.69071e+07
Floating Point Operations Summary::Total with convergence overhead=6.69071e+07
GB/s Summary=
GB/s Summary::Raw Read B/W=20.4228
GB/s Summary::Raw Write B/W=4.72366
GB/s Summary::Raw Total B/W=25.1465
GB/s Summary::Total with convergence and optimization phase overhead=24.2661
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=6.54251
GFLOP/s Summary::Raw WAXPBY=6.76662
GFLOP/s Summary::Raw SpMV=5.34655
GFLOP/s Summary::Raw MG=3.02552
GFLOP/s Summary::Raw Total=3.30318
GFLOP/s Summary::Total with convergence overhead=3.30318
GFLOP/s Summary::Total with convergence and optimization phase overhead=3.18753
User Optimization Overheads=
User Optimization Overheads::Optimization phase time (sec)=2.6e-08
User Optimization Overheads::Optimization phase time vs reference SpMV+MG time=6.21574e-05
DDOT Timing Variations=
DDOT Timing Variations::Min DDOT MPI_Allreduce time=1.2273e-05
DDOT Timing Variations::Max DDOT MPI_Allreduce time=1.2273e-05
DDOT Timing Variations::Avg DDOT MPI_Allreduce time=1.2273e-05
Final Summary=
Final Summary::HPCG result is VALID with a GFLOP/s rating of=3.18753
Final Summary::HPCG 2.4 rating for historical reasons is=3.30318
Final Summary::Reference version of ComputeDotProduct used=Performance results are most likely suboptimal
Final Summary::Reference version of ComputeSPMV used=Performance results are most likely suboptimal
Final Summary::Reference version of ComputeMG used and number of threads greater than 1=Performance results are severely suboptimal
Final Summary::Reference version of ComputeWAXPBY used=Performance results are most likely suboptimal
Final Summary::Results are valid but execution time (sec) is=0.0202554
Final Summary::You have selected the QuickPath option=Results are official for legacy installed systems with confirmation from the HPCG Benchmark leaders.
Final Summary::After confirmation please upload results from the YAML file contents to=http://hpcg-benchmark.org
========================================================================================================================================================================================


## 多进程运行脚本

```text
=========================================================================================================================================================================================

echo "=== HPCG 基准测试 ==="

SIZE=176
TARGET_TIME=120
THREADS=4

echo "系统内存：~14GB"
echo "问题规模：${SIZE}*${SIZE}*${SIZE}"
echo "目标运行时间：${TARGET_TIME}秒"
echo "OpenMP线程数：${THREADS}"

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

echo -e "\n配置文件内容："
cat hpcg.dat

echo -e "\n=== 开始运行HPCG基准测试 ==="
export OMP_NUM_THREADS=$THREADS
echo "开始时间：${date}"

./bin/xhpcg

echo "结束时间：$(date)"

echo -e "\n=== 测试结果 ==="
for file in HPCG-*.TXT HPCG-*.yaml; do
if [ -f "$file" ]; then
echo "结果文件：$file"
echo "最后20行内容："
tail -20 "$file"
fi
done
=========================================================================================================================================================================================



