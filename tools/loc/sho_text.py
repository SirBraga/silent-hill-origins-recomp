#!/usr/bin/env python3
"""Silent Hill Origins string tables (SH.ARC entries 1150-1155: EN FR DE IT JA ES).

Layout: u32 version (2), u32 count, count x (u32 hash, u32 offset in UTF-16 units from the start of the text),
then NUL-terminated UTF-16LE strings. Strings start with formatting codes below 0x20 (\x01\x01 is the usual one).
"""
import json
import struct
import sys


def read_table(data):
    version, count = struct.unpack_from('<II', data, 0)
    assert version == 2
    entries = [struct.unpack_from('<II', data, 8 + 8 * i) for i in range(count)]
    text = data[8 + 8 * count:].decode('utf-16le')
    out = []
    for h, off in entries:
        end = text.index('\0', off)
        out.append((h, text[off:end]))
    return out


def write_table(rows):
    pool = []
    offsets = {}
    pos = 0
    index = []
    for h, s in rows:
        if s not in offsets:
            offsets[s] = pos
            pool.append(s + '\0')
            pos += len(s) + 1
        index.append((h, offsets[s]))
    head = struct.pack('<II', 2, len(rows)) + b''.join(struct.pack('<II', h, o) for h, o in index)
    return head + ''.join(pool).encode('utf-16le')


if __name__ == '__main__':
    if sys.argv[1] == 'dump':  # dump EN.bin ES.bin out.json
        en = read_table(open(sys.argv[2], 'rb').read())
        es = read_table(open(sys.argv[3], 'rb').read())
        rows = [{'hash': '%08x' % h, 'en': e, 'es': s} for (h, e), (h2, s) in zip(en, es)]
        json.dump(rows, open(sys.argv[4], 'w', encoding='utf-8'), ensure_ascii=False, indent=0)
