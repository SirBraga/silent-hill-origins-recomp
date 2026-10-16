#!/usr/bin/env python3
"""Silent Hill Origins' European font (SH.ARC entry 336, 'Font_EUR'): adds the Portuguese ã õ Ã Õ.

The KFONT section holds one 16-byte record per character (code, advance, x/y offset, width, height, data offset,
data size, flags), sorted by code, then the glyph bitmaps: 4 bits per pixel, low nibble first, rows of
ceil(width/2) bytes, packed with a PackBits-style scheme (n >= 0: n literal bytes follow; n < 0: next byte -n times).
"""
import struct
import sys

SECTION = 0x4D20  # type 1, version 4, then u16 1, u32 size, u16 count, u16 line height, u16 ascent, u16 0


def unpack(data, size):
    out = bytearray()
    i = 0
    while len(out) < size:
        c = struct.unpack_from('b', data, i)[0]
        i += 1
        if c < 0:
            out += bytes([data[i]]) * (-c)
            i += 1
        else:
            out += data[i:i + c]
            i += c
    return bytes(out[:size])


def pack(raw):
    out = bytearray()
    i = 0
    literal = bytearray()
    while i < len(raw):
        run = 1
        while i + run < len(raw) and raw[i + run] == raw[i] and run < 128:
            run += 1
        if run >= 3:
            while literal:
                out += bytes([min(len(literal), 127)]) + literal[:127]
                literal = literal[127:]
            out += struct.pack('b', -run) + bytes([raw[i]])
            i += run
        else:
            literal += raw[i:i + 1]
            i += 1
    while literal:
        out += bytes([min(len(literal), 127)]) + literal[:127]
        literal = literal[127:]
    return bytes(out)


class Font:
    def __init__(self, data):
        self.data = bytearray(data)
        t, v, one, size, count = struct.unpack_from('<HHHIH', data, SECTION)
        assert (t, v, one) == (1, 4, 1), (t, v, one)
        self.size, self.count = size, count
        self.records = []
        base = SECTION + 18
        self.data_start = base + 16 * count
        for k in range(count):
            r = list(struct.unpack_from('<HHbbBBIHH', data, base + 16 * k))
            self.records.append(r)

    def pixels(self, code):
        r = next(x for x in self.records if x[0] == code)
        w, h = r[4], r[5]
        stride = (w + 1) // 2
        raw = unpack(self.data[self.data_start + r[6]:], stride * h)
        rows = []
        for y in range(h):
            row = []
            for x in range(w):
                b = raw[y * stride + x // 2]
                row.append(b & 15 if x % 2 == 0 else b >> 4)
            rows.append(row)
        return r, rows


def bitmap(rows, w):
    stride = (w + 1) // 2
    out = bytearray()
    for row in rows:
        line = bytearray(stride)
        for x, p in enumerate(row):
            line[x // 2] |= p << (4 * (x % 2))
        out += line
    return bytes(out)


def show(rows):
    return '\n'.join(''.join(' .:-=+*#%@@@@@@@'[p] for p in row) for row in rows)


def compose(font, base, tilde_src, body_rows):
    """Takes the tilde (rows above body_rows) of tilde_src and puts it over base, centred."""
    rb, b = font.pixels(ord(base))
    rt, t = font.pixels(ord(tilde_src))
    top = len(t) - body_rows
    w = rb[4]
    shift = (rt[4] - w) // 2
    tilde = [[row[x + shift] if 0 <= x + shift < len(row) else 0 for x in range(w)] for row in t[:top]]
    rows = tilde + b
    record = [0, rb[1], rb[2], rb[3] - top, w, len(rows), 0, 0, rb[8]]
    return record, rows


def patched(data, drop=''):
    font = Font(data)
    added = []
    for code, base, src, body in ((0xE3, 'a', 'ñ', 10), (0xF5, 'o', 'ñ', 10), (0xC3, 'A', 'Ñ', 13), (0xD5, 'O', 'Ñ', 13)):
        if any(r[0] == code for r in font.records):
            continue
        rec, rows = compose(font, base, src, body)
        rec[0] = code
        added.append((rec, pack(bitmap(rows, rec[4])), rows))
    # The size covers the records and the bitmaps (not the header or the count).
    old_end = SECTION + 18 + font.size
    # Glyphs Portuguese never uses make room: the font must fit, compressed, in its own place in SH.ARC (the game
    # hangs at boot when the font comes from anywhere else).
    blob = bytearray()
    records = []
    for r in font.records:
        r = r[:]
        if chr(r[0]) in drop:
            continue
        if r[6] + r[7] <= old_end - font.data_start:
            piece = bytes(font.data[font.data_start + r[6]:font.data_start + r[6] + r[7]])
            r[6] = len(blob)
            blob += piece
        records.append(r)
    for rec, packed, rows in added:
        rec[6], rec[7] = len(blob), len(packed)
        blob += packed
        records.append(rec)
    records.sort(key=lambda r: r[0])
    count = len(records)
    body = struct.pack('<HHH', 0x16, 0x11, 0) + b''.join(struct.pack('<HHbbBBIHH', *r) for r in records) + bytes(blob)
    head = struct.pack('<HHHIH', 1, 4, 1, 16 * count + len(blob), count)
    out = bytes(font.data[:SECTION]) + head + body + bytes(font.data[old_end:])
    delta = len(out) - len(data)
    out = bytearray(out)
    # Enclosing sizes: the KFONT container chunk and the three sizes of its inner header.
    for at in (0x466C + 4, 0x4764, 0x476C):
        struct.pack_into('<I', out, at, struct.unpack_from('<I', out, at)[0] + delta)
    return bytes(out), added


if __name__ == '__main__':
    data = open(sys.argv[1], 'rb').read()
    out, added = patched(data)
    for rec, packed, rows in added:
        print(chr(rec[0]), rec)
        print(show(rows))
    check = Font(out)
    for rec, _, rows in added:
        assert check.pixels(rec[0])[1] == rows
    if len(sys.argv) > 2:
        open(sys.argv[2], 'wb').write(out)
