# Install wsl2 and Export the disk
```
wsl.exe --update
wsl --set-default-version 2
wsl --install -d Ubuntu
wsl --export Ubuntu D:\wsl2\ubuntu.tar
wsl --unregister Ubuntu
wsl --import Ubuntu D:\wsl2\ D:\wsl2\ubuntu.tar --version 2
wsl --shutdown
wsl -l -v
Ubuntu.exe config --default-user xxx
```

# Change the Ubuntu source
```
sudo vim /etc/apt/sources.list
```
```
# 默认注释了源码镜像以提高 apt update 速度，如有需要可自行取消注释
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-updates main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-updates main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-backports main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-backports main restricted universe multiverse

deb http://security.ubuntu.com/ubuntu/ jammy-security main restricted universe multiverse
# deb-src http://security.ubuntu.com/ubuntu/ jammy-security main restricted universe multiverse

# 预发布软件源，不建议启用
# deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-proposed main restricted universe multiverse
# # deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ jammy-proposed main restricted universe multiverse
```
```
sudo apt-get update
```

# Shrink disk space
```
wsl --shutdown
win+r diskpart
select vdisk file="D:\wsl2\ext4.vhdx"
attach vdisk readonly
compact vdisk
detach vdisk
exit
```

# .wslconfig
```
[wsl2]
swap=8GB
swapfile="D:\\wsl2\\swap.vhdx"
```
