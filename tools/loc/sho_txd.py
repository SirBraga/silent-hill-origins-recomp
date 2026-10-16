#!/usr/bin/env python3
"""Main menu button images of Silent Hill Origins (RenderWare PS2 texture dictionaries, SH.ARC 495-500, one per
language): 8-bit indexed, pixels swizzled the PS2 way, 256-colour palette in CSM1 order with alpha 0..128."""
import re
import struct


def unswizzle8(buf, w, h):
    out = bytearray(w * h)
    for y in range(h):
        for x in range(w):
            out[y * w + x] = buf[offset8(x, y, w)]
    return bytes(out)


def swizzle8(pixels, w, h):
    out = bytearray(w * h)
    for y in range(h):
        for x in range(w):
            out[offset8(x, y, w)] = pixels[y * w + x]
    return bytes(out)


def offset8(x, y, w):
    block = (y & ~0xF) * w + (x & ~0xF) * 2
    swap = (((y + 2) >> 2) & 1) * 4
    pos_y = (((y & ~3) >> 1) + (y & 1)) & 7
    column = pos_y * w * 2 + ((x + swap) & 7) * 4
    return block + column + ((y >> 1) & 1) + ((x >> 2) & 2)


def csm1(v):
    return (v & 0xE7) | ((v & 8) << 1) | ((v & 16) >> 1)


def textures(data):
    """name -> (width, height, offset of the swizzled pixels, offset of the palette)"""
    out = {}
    for m in re.finditer(rb'(main_menu_but_\d)\x00', data):
        h = data.find(b'\x01\x00\x00\x00\x40\x00\x00\x00', m.start()) + 12
        w, hh = struct.unpack_from('<2I', data, h)
        px = h + 64 + 12 + 80
        out[m.group(1).decode()] = (w, hh, px, px + w * hh + 80)
    return out


def image(data, name):
    """(width, height, linear indices, palette as (r, g, b, a) in index order)"""
    w, h, px, pal = textures(data)[name]
    idx = unswizzle8(data[px:px + w * h], w, h)
    raw = data[pal:pal + 1024]
    palette = [None] * 256
    for i in range(256):
        palette[csm1(i)] = tuple(raw[4 * i:4 * i + 4])
    return w, h, idx, palette
