## train
```
!pip install ultralytics
import ultralytics
ultralytics.checks()
```
``````
!yolo detect train data=/kaggle/input/dataset/xxx.yaml model=/kaggle/input/dataset/yolov8s.pt epochs=300 batch=32
``````
