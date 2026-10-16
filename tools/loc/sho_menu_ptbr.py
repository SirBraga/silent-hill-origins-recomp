#!/usr/bin/env python3
"""Portuguese main-menu buttons, assembled from letters of the other languages' buttons (same handwriting and glow).

Returns the English texture dictionary (SH.ARC 495) with its four buttons redrawn:
continuar (the Spanish image as is), carregar jogo, novo jogo, dicas."""
import sho_txd

EN, ES, IT = 495, 500, 498
# (entry, button, x0, x1): one letter, columns x0..x1 inclusive of the 128x32 image.
L = {
    'c': (ES, 4, 0, 12), 'o': (ES, 4, 13, 26), 'n': (ES, 4, 27, 38), 's': (ES, 4, 38, 46), 'e': (ES, 4, 47, 60),
    'j': (ES, 4, 60, 68), 'a': (ES, 2, 13, 25), 'r': (ES, 2, 25, 33), 'g': (ES, 2, 34, 46), 'v': (IT, 3, 35, 44),
    'd': (EN, 2, 33, 46), 'i': (ES, 1, 47, 52),
}
WORDS = {2: 'carregar jogo', 3: 'novo jogo', 4: 'dicas'}


def alpha_image(entries, entry, button):
    w, h, idx, pal = sho_txd.image(entries[entry], 'main_menu_but_%d' % button)
    return w, h, [pal[v][3] for v in idx]


def compose(entries, word, width):
    cols = []
    for ch in word:
        if ch == ' ':
            cols += [[0] * 32] * 5
            continue
        e, b, x0, x1 = L[ch]
        w, h, a = alpha_image(entries, e, b)
        for x in range(x0, x1 + 1):
            cols.append([a[y * w + x] for y in range(h)])
    # Squeeze into the button's width when needed (nearest column, keeps the strokes crisp).
    if len(cols) > width - 2:
        n = width - 2
        cols = [cols[int(i * len(cols) / n)] for i in range(n)]
    out = [[0] * width for _ in range(32)]
    for x, col in enumerate(cols):
        for y in range(32):
            out[y][x + 1] = col[y]
    return out


def build(entries):
    data = bytearray(entries[EN])
    tex = sho_txd.textures(bytes(data))
    for button in (1, 2, 3, 4):
        w, h, px, pal_at = tex['main_menu_but_%d' % button]
        if button == 1:
            sw, sh, sidx, spal = sho_txd.image(entries[ES], 'main_menu_but_1')
            alpha = [[spal[sidx[y * sw + x]][3] for x in range(w)] for y in range(h)]
        else:
            alpha = compose(entries, WORDS[button], w)
        _, _, _, pal = sho_txd.image(bytes(data), 'main_menu_but_%d' % button)
        # The palette is white with an alpha ramp: each pixel takes the entry of the closest alpha.
        best = {}
        for a in range(129):
            best[a] = min(range(256), key=lambda i: (abs(pal[i][3] - a), -pal[i][0]))
        linear = bytes(best[min(128, alpha[y][x])] for y in range(h) for x in range(w))
        data[px:px + w * h] = sho_txd.swizzle8(linear, w, h)
    return bytes(data)
