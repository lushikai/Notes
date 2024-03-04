# Table of Contents:
1. [conda](#conda)  
2. [WSL](#wsl)
3. [Ubuntu](#ubuntu)
4. [X-AnyLabeling](#anylabeling)

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

## X-AnyLabeling <a name="anylabeling"></a>
### Label Convert
```
#=============================================================================== Usage ================================================================================#
#
#---------------------------------------------------------------------------- custom2voc  -----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path custom_folder --dst_path voc_folder --mode custom2voc
#
#---------------------------------------------------------------------------- voc2custom  -----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path voc_folder --img_path img_folder --mode voc2custom
#
#---------------------------------------------------------------------------- custom2yolo  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path custom_folder --dst_path yolo_folder --classes xxx.txt --mode custom2yolo
# python tools/label_converter.py --task polygon --src_path custom_folder --dst_path yolo_folder --classes xxx.txt --mode custom2yolo
#
#---------------------------------------------------------------------------- yolo2custom  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path yolo_folder --img_path img_folder --classes xxx.txt --mode yolo2custom
# python tools/label_converter.py --task polygon --src_path yolo_folder --img_path img_folder --classes xxx.txt --mode yolo2custom
#
#---------------------------------------------------------------------------- custom2coco  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path custom_folder --dst_path coco_folder --classes xxx.txt --mode custom2coco
# python tools/label_converter.py --task polygon --src_path custom_folder --dst_path coco_folder --classes xxx.txt --mode custom2coco
#
#---------------------------------------------------------------------------- coco2custom  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rectangle --src_path coco.json --img_path img_folder --mode coco2custom
# python tools/label_converter.py --task polygon --src_path coco.json --img_path img_folder --mode coco2custom
#
#---------------------------------------------------------------------------- custom2dota  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rotation --src_path dota_image_folder --dst_path save_folder --mode custom2dota
#
#---------------------------------------------------------------------------- dota2custom  ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rotation --src_path dota_label_folder --img_path dota_image_folder --mode dota2custom
#
#---------------------------------------------------------------------------- dota2dcoco   ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rotation --src_path dota_label_folder --dst_path xxx.json --img_path dota_image_folder --classes xxx.txt --mode dota2dcoco
#
#---------------------------------------------------------------------------- dcoco2dota   ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rotation --src_path xxx.json --dst_path dota_folder --mode dcoco2dota
#
#---------------------------------------------------------------------------- dxml2dota   ----------------------------------------------------------------------------#
# python tools/label_converter.py --task rotation --src_path xml_folder --dst_path dota_folder --mode dxml2dota
#
#=============================================================================== Usage ================================================================================#
```
