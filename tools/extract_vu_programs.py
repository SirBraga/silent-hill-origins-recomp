#!/usr/bin/env python3
"""Extract the VU microprograms embedded in the ELF's .vutext section.

The game keeps its microcode as VIF packets: MPG commands (0x4A) carrying a load
address and up to 256 instruction pairs each. Consecutive MPG blocks whose load
addresses continue each other form one program, starting at address 0.

Each program is written as a zero-padded code-memory image named
  vu<unit>-static-<elf address>-len<pairs>.bin
(16 KiB for VU1, 4 KiB for VU0) for ps2x_vu1_recompile, which matches static
images by the hash of the first <pairs> pairs only, so whatever an earlier,
longer program left behind in code memory does not matter. A program that fits
VU0 is written for both units, because the unit it is sent to is only known at
run time.

Usage: extract_vu_programs.py <elf> <output dir>
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path


def section(elf: bytes, wanted: bytes) -> tuple[int, int, int]:
    shoff, = struct.unpack_from("<I", elf, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", elf, 0x2E)
    raw = [struct.unpack_from("<IIIIIIIIII", elf, shoff + i * shentsize) for i in range(shnum)]
    strtab = raw[shstrndx][4]
    for name_off, _type, _flags, addr, off, size, *_ in raw:
        end = elf.index(b"\0", strtab + name_off)
        if elf[strtab + name_off:end] == wanted:
            return addr, off, size
    raise SystemExit(f"{wanted.decode()} nao encontrada")


def main() -> int:
    if len(sys.argv) != 3:
        print(__doc__)
        return 2
    elf = Path(sys.argv[1]).read_bytes()
    out = Path(sys.argv[2])
    out.mkdir(parents=True, exist_ok=True)
    addr, off, size = section(elf, b".vutext")
    words = struct.unpack_from(f"<{size // 4}I", elf, off)

    programs: list[tuple[int, bytearray]] = []  # (elf address of first MPG, code bytes)
    i = 0
    while i < len(words):
        w = words[i]
        if (w >> 24) & 0x7F == 0x4A:
            pairs = (w >> 16) & 0xFF or 256
            load = (w & 0xFFFF) * 8
            if i + 1 + pairs * 2 <= len(words):
                code = struct.pack(f"<{pairs * 2}I", *words[i + 1:i + 1 + pairs * 2])
                if load == 0 or not programs or load != len(programs[-1][1]):
                    if load != 0:
                        raise SystemExit(f"MPG em 0x{addr + i * 4:x} carrega em 0x{load:x} sem programa anterior contiguo")
                    programs.append((addr + i * 4, bytearray()))
                programs[-1][1].extend(code)
                i += 1 + pairs * 2
                continue
        i += 1

    for old in out.glob("vu[01]-static-*.bin"):
        old.unlink()
    for start, code in programs:
        pairs = len(code) // 8
        for unit, image_size in ((1, 0x4000), (0, 0x1000)):
            if len(code) > image_size:
                continue
            path = out / f"vu{unit}-static-{start:06x}-len{pairs}.bin"
            path.write_bytes(bytes(code) + bytes(image_size - len(code)))
        print(f"programa 0x{start:06x}: {pairs} pares" + (" (VU0 e VU1)" if len(code) <= 0x1000 else " (VU1)"))
    print(f"{len(programs)} programas em {out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
