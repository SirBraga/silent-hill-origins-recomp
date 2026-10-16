#!/usr/bin/env python3
"""Expose function starts that the analyzer merged into the preceding function.

find_code_pointers.py only keeps starts that a static pointer refers to. Targets
that are reached only through pointers built at runtime (tables loaded from the
disc, registered callbacks) stay hidden and fail as "missing-target" on JALR.

This scans all of .text for the unambiguous case: an instruction that directly
follows `jr ra` + delay slot (plus alignment nops) and opens a stack frame with
`addiu sp,sp,-N`. Nothing falls through a `jr ra`, and a frame is only opened at
a function entry, so every hit is a callable entry point.

Usage: find_function_starts.py <elf> [--toml <config.toml>]
"""
from __future__ import annotations

import re
import struct
import sys
from pathlib import Path

JR_RA = 0x03E00008
NOP = 0x00000000


def text_section(elf: bytes) -> tuple[int, int, int]:
    if elf[:4] != b"\x7fELF" or elf[4] != 1 or elf[5] != 1:
        raise SystemExit("esperado ELF32 little-endian")
    shoff, = struct.unpack_from("<I", elf, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", elf, 0x2E)
    raw = [struct.unpack_from("<IIIIIIIIII", elf, shoff + i * shentsize) for i in range(shnum)]
    strtab_off = raw[shstrndx][4]
    for name_off, _type, _flags, addr, off, size, *_ in raw:
        end = elf.index(b"\0", strtab_off + name_off)
        if elf[strtab_off + name_off:end] == b".text":
            return addr, off, size
    raise SystemExit(".text nao encontrada")


def main() -> int:
    if len(sys.argv) < 2:
        print(__doc__)
        return 2
    elf = Path(sys.argv[1]).read_bytes()
    t_addr, t_off, t_size = text_section(elf)
    words = struct.unpack_from(f"<{t_size // 4}I", elf, t_off)

    starts: list[int] = []
    for i in range(2, len(words)):
        if (words[i] & 0xFFFF8000) != 0x27BD8000:  # addiu sp,sp,-N
            continue
        p = i - 1
        while p > 1 and words[p] == NOP and i - p <= 4:
            p -= 1
        # After skipping nops, p is either the delay slot or (when the delay slot was
        # itself a nop) the jr ra.
        if words[p] == JR_RA or words[p - 1] == JR_RA:
            starts.append(t_addr + i * 4)

    starts = sorted(set(starts))
    hints = [f"sub_{v:08X}@0x{v:08X}" for v in starts]
    print(f"[find_function_starts] {len(hints)} inicios (jr ra + addiu sp) em .text", file=sys.stderr)

    if len(sys.argv) >= 4 and sys.argv[2] == "--toml":
        cfg = Path(sys.argv[3])
        body = cfg.read_text()
        m = re.search(r"(?ms)^entry_points = \[(.*?)^\]\n", body)
        if not m:
            raise SystemExit("entry_points nao encontrado no toml")
        existing = re.findall(r'"([^"]+)"', m.group(1))
        known = {int(e.rsplit("@", 1)[-1], 16) for e in existing}
        added = [h for h, v in zip(hints, starts) if v not in known]
        block = "entry_points = [\n" + "".join(f'  "{h}",\n' for h in existing + added) + "]\n"
        cfg.write_text(body[:m.start()] + block + body[m.end():])
        print(f"[find_function_starts] {len(existing)} existentes + {len(added)} novas em {cfg}", file=sys.stderr)
    else:
        print("\n".join(hints))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
