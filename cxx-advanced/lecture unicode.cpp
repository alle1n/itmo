unicode

число, отведенное символу - code point
диапазон: 0...17*2^16

32 бита на хранение  - UTF-32
16 бит               - UTF-16 (каждый символ - 1 или 2 символа)
8 бит (как в char`е) - UTF-8 (каждый символ - 1, 2, 3 или 4 символа)


utf-16 не умеет сравниваться тривиально, а utf-8 умеет.

как обращаться по индексу в utf-32, где вроде все понятно, если один символ может записаться одним code point'ом, а может двумя?
пример: А с кружочком сверху


