#!/bin/bash

# Línea a agregar
comment="/*   By: amoyo-ar < amoyo-ar@student.42madrid.com   +#+  +:+       +#+        */"

# Iterar sobre todos los archivos .c en el directorio actual
for file in *.c; do
    # Verificar si el archivo existe
    if [[ -f "$file" ]]; then
        # Usar sed para reemplazar la línea 6 con la nueva línea
        sed -i '' "6s|.*|$comment|" "$file"
    fi
done

echo "Línea 6 sustituida en todos los archivos .c."

