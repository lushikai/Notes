# Table of Contents:
1. [conda](#conda)  
2. [WSL](#wsl)
3. [Ubuntu](#ubuntu)

## conda <a name="conda"></a>
### Install miniconda on linux
```
mkdir -p ~/miniconda3
wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O ~/miniconda3/miniconda.sh
bash ~/miniconda3/miniconda.sh -b -u -p ~/miniconda3
rm -rf ~/miniconda3/miniconda.sh
~/miniconda3/bin/conda init bash
~/miniconda3/bin/conda init zsh
```

### Set PYTHONPATH
```
vim ~/.bashrc
export PYTHONPATH=${PYTHONPATH}:/home/user/xxx
:wq
source ~/.bashrc
```

### Change the pip source
```
pip install xxx -i https://pypi.tuna.tsinghua.edu.cn/simple
```

### PowerShell adds Anaconda prompt
```
conda init powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```

## WSL <a name="wsl"></a>
### Install wsl and Export the disk
```
wsl --install
wsl --export Ubuntu D:\wsl\ubuntu.tar
wsl --unregister Ubuntu
wsl --import Ubuntu D:\wsl\ D:\wsl\ubuntu.tar --version 2
wsl --shutdown
Ubuntu.exe config --default-user xxx
```

## Ubuntu <a name="ubuntu"></a>
### Change the Ubuntu source
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
