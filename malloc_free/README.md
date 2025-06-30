# Malloc, Free - Dinamik Yaddaş Tapşırıqları

Bu repozitoriyada C dilində dinamik yaddaş ayırma, massiv yaratma və azad etmə funksiyalarını yazmaq tələb olunur. Tapşırıqlar Holberton School proqramına uyğundur.

---

## Tapşırıqlar

### 0. `create_array`
- Prototip: `char *create_array(unsigned int size, char c);`
- Təyinat: Verilmiş ölçüdə massiv yaradır və bütün elementləri `c` simvolu ilə doldurur.
- Əgər `size` 0-dırsa və ya yaddaş ayrılması alınmazsa, `NULL` qaytarır.

### 1. `_strdup`
- Prototip: `char *_strdup(char *str);`
- Təyinat: Verilmiş sətri dinamik yaddaşa surətini çıxarır.
- `str` `NULL` olduqda `NULL` qaytarır.
- Yaddaş ayrılması alınmazsa `NULL` qaytarır.

### 2. `str_concat`
- Prototip: `char *str_concat(char *s1, char *s2);`
- Təyinat: İki sətri birləşdirib yeni massivdə saxlayır.
- `NULL` daxil olduqda boş sətir kimi qəbul edir.
- Yaddaş ayrılması alınmazsa `NULL` qaytarır.

### 3. `alloc_grid`
- Prototip: `int **alloc_grid(int width, int height);`
- Təyinat: İkiölçülü `int` massivi yaradır, elementləri 0 ilə doldurur.
- `width` və `height` 0 və ya mənfi olduqda və ya yaddaş ayrılmadıqda `NULL` qaytarır.

### 4. `free_grid`
- Prototip: `void free_grid(int **grid, int height);`
- Təyinat: `alloc_grid` ilə ayrılmış ikiölçülü massivi yaddaşdan azad edir.

---

## Kompilyasiya

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable_name

