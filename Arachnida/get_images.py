import requests
# from pathlib import Path
import re
import sys

recursive = False
limite = 5

args = sys.argv

if "-r" in args:
    recursive = True
    if "-l" in args:
        for i in range(0, len(args)):
            if args[i].isdigit():
                limite = int(args[i])
                break

if "-p" in args:
    for i in range(0, len(args)):
        if re.findall(r'/', args[i]):
            path = args[i]
            break

profundidad = 0

# Falta que busque los links de forma recursiva
# y configurar para que los argumentos tengan utilidad



while profundidad < limite:
    base = "https://www.youtube.com"
    photo_names = requests.get(base)

    html_content = photo_names.text
    image_files = re.findall(r'([^\s"\'\(\)\[\]]+\.(?:png|jpg|jpeg|gif|bmp))', html_content)
    print(image_files)


    for i in range(0, len(image_files)):
        
        bool = re.findall(r'://', image_files[i])
        if bool:
            imagen = requests.get(image_files[i])
            with open(f"image{i}.jpg", "wb") as file:
                file.write(imagen.content)
        else:
            imagen = base + image_files[i]
            imagen = requests.get(imagen)
            with open(f"image{i}.jpg", "wb") as file:
                file.write(imagen.content)
    













    profundidad = profundidad + 1