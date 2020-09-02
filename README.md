# libasm_42

nasm -f macho64 ft_strlen.s
ld -no_pie -macosx_version_min 10.7.0 -lSystem -o a.out ft_strlen.o
