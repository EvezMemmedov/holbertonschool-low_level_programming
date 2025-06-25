# Pointers, Arrays, and Strings - Holberton School Projects

Bu qovluq C proqramlaşdırma dilində pointerlər, massivlər və stringlər ilə işləmək üçün yazılmış funksiyaları ehtiva edir. Hər bir funksiyanın prototipi və iş prinsipi aşağıda göstərilmişdir.

---

## Funksiyalar

### 0. _memset
- **Prototip:** `char *_memset(char *s, char b, unsigned int n);`
- **İzah:** `s` yaddaş sahəsinin ilk `n` baytını `b` sabit baytı ilə doldurur.
- **Qaytarır:** `s` yaddaş sahəsinə göstərici.

### 1. _memcpy
- **Prototip:** `char *_memcpy(char *dest, char *src, unsigned int n);`
- **İzah:** `src` yaddaş sahəsindən `dest` yaddaş sahəsinə `n` bayt köçürür.
- **Qaytarır:** `dest` yaddaş sahəsinə göstərici.

### 2. _strchr
- **Prototip:** `char *_strchr(char *s, char c);`
- **İzah:** `s` stringində `c` xarakterinin ilk tapıldığı yerə göstərici qaytarır.
- **Qaytarır:** `c` tapılmazsa, `NULL`.

### 3. _strspn
- **Prototip:** `unsigned int _strspn(char *s, char *accept);`
- **İzah:** `s` stringində `accept` stringindəki simvollardan ibarət olan ilk kəsimin uzunluğunu qaytarır.

### 4. _strpbrk
- **Prototip:** `char *_strpbrk(char *s, char *accept);`
- **İzah:** `s` stringində `accept` stringindəki istənilən simvolun ilk tapıldığı yerə göstərici qaytarır.
- **Qaytarır:** Tapılmazsa, `NULL`.

### 5. _strstr
- **Prototip:** `char *_strstr(char *haystack, char *needle);`
- **İzah:** `haystack` stringində `needle` alt-stringinin ilk tapıldığı yerə göstərici qaytarır.
- **Qaytarır:** Tapılmazsa, `NULL`.

### 6. print_chessboard
- **Prototip:** `void print_chessboard(char (*a)[8]);`
- **İzah:** 8x8 ölçülü şahmat taxtasını ekrana çap edir.

### 7. print_diagsums
- **Prototip:** `void print_diagsums(int *a, int size);`
- **İzah:** Kvadrat matrisin iki diaqonalının cəmini çap edir.
- **Qeyd:** `a` 2D massiv kimi ötürülür, amma yaddaşda 1D kimi saxlanılır.

---

## İstifadə

- Hər bir funksiyanı müvafiq `.c` faylında tapmaq və `main.c` faylı ilə test etmək mümkündür.
- Funksiyalar `main.h` başlıq faylına daxil edilib.

---

## Kompilyasiya nümunəsi

```bash
