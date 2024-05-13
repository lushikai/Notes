# Install wsl2 and Export the disk
```
wsl.exe --update
wsl --set-default-version 2
wsl --install -d Ubuntu
wsl --export Ubuntu E:\wsl2\ubuntu.tar
wsl --unregister Ubuntu
wsl --import Ubuntu E:\wsl2\ E:\wsl2\ubuntu.tar --version 2
wsl --shutdown
wsl -l -v
Ubuntu.exe config --default-user xxx
```

# Shrink wsl2 space
```
wsl --shutdown
win+r diskpart
help select vdisk
select vdisk file="E:\wsl2\ext4.vhdx"
compact vdisk
```