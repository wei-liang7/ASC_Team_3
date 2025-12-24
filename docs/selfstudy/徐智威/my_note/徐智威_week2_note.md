# 本周学习任务
## HPL
### HPL安装过程
1.进一步熟悉编译下载的流程，下载可以熟练地完成从0到HPL下载的过程（网址还是需要看一眼的 ᴖᗜᴖ）  
2.试错过程中，深刻体会到老师第一周说的避免在root账户下执行操作，下载过程中各种的权限操作让人头痛  
3.过程中慢慢的从过度依赖ai查报错到，可以先独立地看报错并尝试分析
### HPL运用过程
1.安装花费时间较多，还未开始进行运行分析
## HPCG
### HPCG安装过程
1.安装过程中发现先前的MPICH没有安装完整，原因是之前按照CSDN的教程输入命令没有注意，其中的./configure --disable-cxx --prefix=/home/mpich-install 2>&1 | tee c.txt”,其中的--disable-cxx显式禁用 MPICH 的 C++ 支持的编译配置参数，导致/home/mpich-install/bin 中没有mpicxx等c++相关文件。这让我意识到在进行学习的时候，不能盲目地抄袭别人的代码（或命令），应该以自己的思考为主。  
### HPCG运用过程
## Linux
1.学习防火墙配置：firewall-cmd（如 firewall-cmd --add-port=80/tcp 开放 80 端口）、iptables（如 iptables -A INPUT -p tcp --dport 22 -j ACCEPT 允许 SSH 连接），配置防火墙规则并测试生效。  
2.掌握 CPU 绑定（taskset，如 taskset -c 0-1 ./program 绑定 CPU 核心）和实时优先级调整（chrt，如 chrt -f 99 ./program 设置最高优先级），实操绑定进程到指定 CPU 核心。  
3.学习了循环结构（for、while），编写了一个批量创建用户的脚本。  
# 本周的困惑（或不足）
1.安装花费时间有点多，且有点依赖教程，缺少了一点独立思考能力  
2.在刚下载好HPL后，执行测试命令mpirun -np 4 ./xhpl > HPL-Benchmark.txt，系统会卡在那里，因为虚拟机创建Linux系统的时候，配置的性能太少了？（目前未解决）  
3.我配置的Linux系统是最贱的单核处理器，后续怎么成为测试多进程/多核？（目前未解决）  
4.HPCG安装过程疑惑点：git clone  https://github.com/hpcg-benchmark/hpcg.git 和 wget  https://github.com/hpcg-benchmark/hpcg/archive/master.zip 都无法正常获取安装包why？？？


