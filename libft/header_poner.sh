#!/bin/bash

# Archivo que contiene el encabezado (modifica este nombre según tu archivo de encabezado)
header_file="header"

# Verifica si el archivo de encabezado existe
if [[ ! -f "$header_file" ]]; then
  echo "El archivo de encabezado '$header_file' no existe."
  exit 1
fi

# Recorre todos los archivos .c en el directorio actual
for file in *.c; do
  # Verifica si el archivo existe (en caso de que no haya archivos .c)
  if [[ ! -f "$file" ]]; then
    echo "No se encontraron archivos .c."
    exit 1
  fi

  # Crea un archivo temporal que contenga el contenido del encabezado seguido por el contenido del archivo actual
  temp_file=$(mktemp)
  cat "$header_file" "$file" > "$temp_file"

  # Reemplaza el archivo original con el archivo temporal
  mv "$temp_file" "$file"

  echo "Encabezado añadido a '$file'."
done

echo "Encabezado añadido a todos los archivos .c."

