#!/usr/bin/env python3
"""Builds the Brazilian Portuguese overlay for Silent Hill Origins (PS2X_CD_OVERLAY).

The English string table (SH.ARC entry 1150) is replaced by the translation in pt/*.txt (lines missing there stay in
English), and the European font (entry 336) gains ã õ Ã Õ. Both go after the end of the disc image; the overlay
rewrites their two SH.ARC index entries and the size of SH.ARC in the root directory to reach them. The image itself
is never modified.

usage: build_ptbr.py <image.iso> <out.ovl> [<out_pc.ovl>]

The save messages speak of a save file on the PC instead of a memory card (pc_saves.json). <out_pc.ovl> carries them
alone for the other languages (EN FR DE IT ES tables, entries 1150-1155 without Japanese), with no other change.
"""
import json
import glob
import os
import re
import struct
import sys
import zlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sho_font  # noqa: E402
import sho_text  # noqa: E402
import sho_menu_ptbr  # noqa: E402

HERE = os.path.dirname(os.path.abspath(__file__))
FONT_ENTRY, TABLE_ENTRY, EN_ENTRY = 336, 1150, 1150
LANGUAGES = ('en', 'fr', 'de', 'it', 'ja', 'es')  # the string tables, from entry 1150 on
# Never shown on the PS2 (debug labels, placeholders, PSP messages): emptied so the translation fits in the English
# slot. Portuguese replaces English rather than Spanish because menus and logos are images, and English ones fit
# better with Portuguese text.
UNUSED = {53, 170, 172, 173, 174, 175, 176, 372, 406, 407, 422, 507, 1427, 1444, 1558, 1586, 1587}


def unescape(s):
    return re.sub(r'\{([0-9a-f]{2})\}', lambda m: chr(int(m.group(1), 16)), s)


def root_record(iso, name):
    iso.seek(16 * 2048)
    pvd = iso.read(2048)
    lba, length = struct.unpack_from('<I', pvd, 156 + 2)[0], struct.unpack_from('<I', pvd, 156 + 10)[0]
    iso.seek(lba * 2048)
    d = iso.read(length)
    o = 0
    while o < len(d):
        if d[o] == 0:
            o = (o // 2048 + 1) * 2048
            continue
        nl = d[o + 32]
        if d[o + 33:o + 33 + nl] == name:
            return lba * 2048 + o, struct.unpack_from('<I', d, o + 2)[0], struct.unpack_from('<I', d, o + 10)[0]
        o += d[o]
    raise SystemExit('not found: %r' % name)


def main():
    image, out_path = sys.argv[1], sys.argv[2]
    iso = open(image, 'rb')
    iso_size = os.path.getsize(image)
    record_at, lsn, arc_size = root_record(iso, b'SH.ARC;1')
    arc = lsn * 2048
    iso.seek(arc)
    head = iso.read(0x14 + 16 * 1486)
    count = struct.unpack_from('<I', head, 4)[0]

    def entry(i):
        return struct.unpack_from('<4I', head, 0x14 + 16 * i)

    def load(i):
        h, off, cs, us = entry(i)
        iso.seek(arc + off)
        d = iso.read(cs)
        return zlib.decompress(d) if cs != us else d

    # Translation, keyed like en_unique.txt (unique English strings in table order).
    en = sho_text.read_table(load(EN_ENTRY))
    unique = []
    seen = {}
    for _, s in en:
        if s not in seen:
            seen[s] = len(unique)
            unique.append(s)
    pt = {}
    for f in sorted(glob.glob(os.path.join(HERE, 'pt', '*.txt'))):
        for line in open(f, encoding='utf-8'):
            if line.strip():
                i, t = line.rstrip('\n').split('\t', 1)
                pt[int(i)] = unescape(t)
    for i in UNUSED:
        pt[i] = '\x01\x01-'
    pc = {int(k): v for k, v in json.load(open(os.path.join(HERE, 'pc_saves.json'), encoding='utf-8')).items() if not k.startswith('_')}
    for i, texts in pc.items():
        pt[i] = '\x01\x01' + texts['pt']
    rows = [(h, pt.get(seen[s], s)) for h, s in en]
    table = sho_text.write_table(rows)
    font, added = sho_font.patched(load(FONT_ENTRY), drop='ŒœßÄÖÜäöü')
    print('translated %d of %d strings; font +%s' % (len(pt), len(unique), ''.join(chr(r[0]) for r, _, _ in added)))

    # Every file stays where it is: the game hangs when one comes from anywhere else, so each has to fit,
    # compressed, in its own slot.
    def place(i, raw):
        h, off, cs, us = entry(i)
        following = min(e[1] for e in (entry(k) for k in range(count)) if e[1] > off)
        packed = zlib.compress(raw, 9)
        assert len(packed) <= following - off, 'entry %d does not fit: %d > %d' % (i, len(packed), following - off)
        return [(arc + 0x14 + 16 * i, struct.pack('<4I', h, off, len(packed), len(raw))), (arc + off, packed)]

    ranges = []
    menu = sho_menu_ptbr.build({e: load(e) for e in (sho_menu_ptbr.EN, sho_menu_ptbr.ES, sho_menu_ptbr.IT)})
    for i, raw in ((FONT_ENTRY, font), (TABLE_ENTRY, table), (sho_menu_ptbr.EN, menu)):
        ranges += place(i, raw)

    write_overlay(out_path, ranges)

    if len(sys.argv) > 3:
        # The other languages: the save messages only, by the hashes the English strings have.
        pc_ranges = []
        for k, lang in enumerate(LANGUAGES):
            if lang not in ('en', 'fr', 'de', 'it', 'es'):
                continue
            rows = sho_text.read_table(load(EN_ENTRY + k))
            known = set(''.join(t for _, t in rows))
            wanted = {}
            for i, texts in pc.items():
                for h, t in en:
                    if t == unique[i]:
                        wanted[h] = '\x01\x01' + texts[lang]
            missing = set(''.join(wanted.values())) - known - {'\n'}
            if missing:
                print('warning: %s text uses characters its table never does: %s' % (lang, ''.join(sorted(missing))))
            patched = [(h, wanted.get(h, t)) for h, t in rows]
            print('%s: %d save messages replaced' % (lang, sum(1 for h, _ in rows if h in wanted)))
            pc_ranges += place(EN_ENTRY + k, sho_text.write_table(patched))
        write_overlay(sys.argv[3], pc_ranges)


def write_overlay(out_path, ranges):
    header = b'PS2XOVL1' + struct.pack('<I', len(ranges))
    data_at = len(header) + 20 * len(ranges)
    index = b''
    payload = b''
    for at, data in ranges:
        index += struct.pack('<QIQ', at, len(data), data_at + len(payload))
        payload += data
    with open(out_path, 'wb') as out:
        out.write(header + index + payload)
    print('wrote %s (%d ranges, %d bytes)' % (out_path, len(ranges), os.path.getsize(out_path)))

if __name__ == '__main__':
    main()
