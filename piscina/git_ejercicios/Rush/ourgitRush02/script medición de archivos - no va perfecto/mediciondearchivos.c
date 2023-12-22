/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediciondearchivos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaracha <bsaracha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:07:45 by bsaracha          #+#    #+#             */
/*   Updated: 2023/10/28 19:10:47 by bsaracha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

off_t fileSize(const char *filename) {
	int fd = open(filename, O_RDONLY);

	if (fd < 0) {
		return -1; // Indica un error al abrir el archivo
	}

	off_t size = lseek(fd, 0, SEEK_END);

	close(fd);

	return size;
}

int main() {
	const char *nombre_archivo = "test_archivo_a_medir.txt";
	off_t tamaño = fileSize(nombre_archivo);

	if (tamaño >= 0) {
		printf("El tamaño del archivo %s es %ld bytes.\n", nombre_archivo, tamaño);
	} else {
		printf("No se pudo obtener el tamaño del archivo.\n");
	}

	return 0;
}

//ESTAMOS SEGURXS DE QUE PODEMOS USAR OFF_T, LSEEK Y FILESIZE?