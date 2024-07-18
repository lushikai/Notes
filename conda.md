# Install miniconda on linux
```
mkdir -p ~/miniconda3
wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O ~/miniconda3/miniconda.sh
bash ~/miniconda3/miniconda.sh -b -u -p ~/miniconda3
rm -rf ~/miniconda3/miniconda.sh
~/miniconda3/bin/conda init bash
~/miniconda3/bin/conda init zsh
```

# Set PYTHONPATH
```
vim ~/.bashrc
export PYTHONPATH=${PYTHONPATH}:/home/user/xxx
:wq
source ~/.bashrc
```

# Change the pip source
```
pip install xxx -i https://pypi.tuna.tsinghua.edu.cn/simple
```
