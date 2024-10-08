#!/bin/bash

# Comprobar si el comando c_formatter_42 está disponible
if ! command -v c_formatter_42 &> /dev/null; then
    echo "c_formatter_42 no está instalado o no se encuentra en el PATH."
    exit 1
fi

# Recorrer todos los archivos .c en el directorio actual y subdirectorios
find . -name "*.c" | while read -r file; do
    echo "Formateando $file..."
    c_formatter_42 < "$file" > temp.c && mv temp.c "$file"
done

echo "Todos los archivos .c han sido formateados."

