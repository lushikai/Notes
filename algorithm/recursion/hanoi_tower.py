# Author: Shikai Lu

def move_tower(height, start_pillar, mid_pillar, target_pillar):
    if height >= 1:
        move_tower(height - 1, start_pillar, target_pillar, mid_pillar)
        move_disk(height, start_pillar,target_pillar)
        move_tower(height - 1, mid_pillar, start_pillar, target_pillar)

def move_disk(disk, start_pillar, target_pillar):
    print(f"move disk[{disk}] from pillar[{start_pillar}] to pillar[{target_pillar}]")

move_tower(3, "1" ,"2", "3")
