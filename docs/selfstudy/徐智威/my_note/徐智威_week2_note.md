# 本周学习任务
## HPL
### HPL安装过程
1.进一步熟悉编译下载的流程，下载可以熟练地完成从0到HPL下载的过程
2.试错过程中，深刻体会到老师第一周说的避免在root账户下执行操作，下载过程中各种的权限操作让人头痛  
3.过程中慢慢的从过度依赖ai查报错到，可以先独立地看报错并尝试分析
### HPL运用过程
1.安装花费时间较多，还未开始进行运行分析
## HPCG
### HPCG安装过程
1.安装过程中发现先前的MPICH没有安装完整，原因是之前按照CSDN的教程输入命令没有注意，其中的./configure --disable-cxx --prefix=/home/mpich-install 2>&1 | tee c.txt”,其中的--disable-cxx显式禁用 MPICH 的 C++ 支持的编译配置参数，导致/home/mpich-install/bin 中没有mpicxx等c++相关文件。这让我意识到在进行学习的时候，不能盲目地抄袭别人的代码（或命令），应该以自己的思考为主。  
### HPCG运用过程
1.了解到hpcg相关的各种命令选项用法  
2.了解了指定较长时间后，hpcg如何处理：会先估算单轮 CG迭代的耗时，结合--rt计算 “能完成的最大迭代次数”。所以虽然其他参数都相同，但是指定较长时间过后，execution time也会增加  

# 本周的困惑（或不足）
1.安装花费时间有点多，且有点依赖教程，缺少了一点独立思考能力  
2.HPCG安装过程疑惑点：git clone  https://github.com/hpcg-benchmark/hpcg.git 和 wget  https://github.com/hpcg-benchmark/hpcg/archive/master.zip 都无法正常获取安装包why？？？  
3.hpl和hpcg的各种计算内容，其GFLOP涉及的各种因素都不太熟悉，并对于各个部分之间怎么交叉影响没有概念  
