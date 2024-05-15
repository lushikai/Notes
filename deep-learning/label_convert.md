# X-AnyLabeling
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