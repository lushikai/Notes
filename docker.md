# Change the Docker source
```
  "registry-mirrors": [
    "https://docker.m.daocloud.io",
    "https://dockerhub.icu",
    "https://registry.aliyuncs.com",
    "https://docker.nju.edu.cn"
  ]
```

# On-premise overleaf
```
git clone https://github.com/overleaf/toolkit.git ./overleaf-toolkit
cd ./overleaf-toolkit
bin/init
bin/up
bin/start
bin/stop
http://localhost/launchpad
```

# Install full texlive
```
docker exec -it sharelatex bash
cd /usr/local/texlive
wget http://mirror.ctan.org/systems/texlive/tlnet/update-tlmgr-latest.sh
sh update-tlmgr-latest.sh -- --upgrade
tlmgr option repository https://mirrors.tuna.tsinghua.edu.cn/CTAN/systems/texlive/tlnet
tlmgr update --all
tlmgr install scheme-full
```
