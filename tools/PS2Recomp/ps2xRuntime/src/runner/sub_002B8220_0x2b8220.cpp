#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8220
// Address: 0x2b8220 - 0x2b86d0
void sub_002B8220_0x2b8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8220_0x2b8220");
#endif

    switch (ctx->pc) {
        case 0x2b8280u: goto label_2b8280;
        default: break;
    }

    ctx->pc = 0x2b8220u;

    // 0x2b8220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b8224: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b8224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8228: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x2b8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x2b822c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2b822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2b8230: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2b8230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b8234: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2b8234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b8238: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b823c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2b823cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8240: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2b8240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8244: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2b8244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2b8248: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x2b8248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2b824c: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x2b824cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2b8250: 0x8ced0008  lw          $t5, 0x8($a3)
    ctx->pc = 0x2b8250u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b8254: 0xb3ac0037  sdl         $t4, 0x37($sp)
    ctx->pc = 0x2b8254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8258: 0xb7ac0030  sdr         $t4, 0x30($sp)
    ctx->pc = 0x2b8258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b825c: 0xafad0038  sw          $t5, 0x38($sp)
    ctx->pc = 0x2b825cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 13));
    // 0x2b8260: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b8260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b8264: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b8268: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2B8268u;
    {
        const bool branch_taken_0x2b8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8268u;
        // 0x2b826c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8268) {
            ctx->pc = 0x2B86C8u;
            goto label_2b86c8;
        }
    }
    ctx->pc = 0x2B8270u;
    // 0x2b8270: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8278: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2b8278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b827c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b827cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8280:
    // 0x2b8280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b8280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8284: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2b8288: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b8288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b828c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2b8290: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2b8290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8294: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b8294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8298: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b8298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b829c: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x2b829cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2b82a0: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x2b82a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2b82a4: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x2b82a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2b82a8: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x2b82a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2b82ac: 0x686e0017  ldl         $t6, 0x17($v1)
    ctx->pc = 0x2b82acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2b82b0: 0x6c6e0010  ldr         $t6, 0x10($v1)
    ctx->pc = 0x2b82b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2b82b4: 0x6862001f  ldl         $v0, 0x1F($v1)
    ctx->pc = 0x2b82b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b82b8: 0x6c620018  ldr         $v0, 0x18($v1)
    ctx->pc = 0x2b82b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b82bc: 0xb3ac0077  sdl         $t4, 0x77($sp)
    ctx->pc = 0x2b82bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82c0: 0xb7ac0070  sdr         $t4, 0x70($sp)
    ctx->pc = 0x2b82c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82c4: 0xb3ad007f  sdl         $t5, 0x7F($sp)
    ctx->pc = 0x2b82c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82c8: 0xb7ad0078  sdr         $t5, 0x78($sp)
    ctx->pc = 0x2b82c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82cc: 0xb3ae0087  sdl         $t6, 0x87($sp)
    ctx->pc = 0x2b82ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82d0: 0xb7ae0080  sdr         $t6, 0x80($sp)
    ctx->pc = 0x2b82d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82d4: 0xb3a2008f  sdl         $v0, 0x8F($sp)
    ctx->pc = 0x2b82d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82d8: 0xb7a20088  sdr         $v0, 0x88($sp)
    ctx->pc = 0x2b82d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b82dc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2b82dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2b82e0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b82e4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2b82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b82e8: 0x1641021  addu        $v0, $t3, $a0
    ctx->pc = 0x2b82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2b82ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b82f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b82f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b82f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b82f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b82f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b82fc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2b82fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b8300: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b8300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2b8304: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2b8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8308: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b8308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b830c: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b830cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b8310: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8314: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2b8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8318: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b831c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b831cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8320: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8324: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8328: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b8328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b832c: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b832cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b8330: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8334: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b8334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8338: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b833c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b833cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8340: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b8340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b8344: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8348: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2b8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b834c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b834cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8350: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8350u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8354: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b8354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8358: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b835c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2b835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8364: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8364u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8368: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b8368u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b836c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8370: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b8370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8374: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8378: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8378u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b837c: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b837cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b8380: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8384: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b838c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b838cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8390: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b8390u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8394: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8398: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b839c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b839cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b83a0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b83a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b83a4: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b83a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b83a8: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x2b83a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b83ac: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x2b83acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b83b0: 0x8fac0098  lw          $t4, 0x98($sp)
    ctx->pc = 0x2b83b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2b83b4: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2b83b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b83b8: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2b83b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b83bc: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x2b83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x2b83c0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b83c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b83c4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2b83c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b83c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b83c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b83cc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b83ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b83d0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b83d4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2b83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b83d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b83d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b83dc: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b83dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b83e0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b83e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b83e4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b83e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b83e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b83e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b83ec: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b83ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b83f0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2b83f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b83f4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b83f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b83f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b83fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b83fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8400: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b8400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b8404: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2b8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8408: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b8408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b840c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b840cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8410: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b8410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8414: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2b8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8418: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2b8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b841c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b841cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8420: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8420u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8424: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b8424u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b8428: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2b8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b842c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8434: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8438: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b8438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b843c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2b843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8440: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8444: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8448: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8448u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b844c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b844cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8450: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2b8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8454: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b8454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8458: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b845c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b845cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8460: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b8460u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b8464: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x2b8464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b8468: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x2b8468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b846c: 0x8fac0098  lw          $t4, 0x98($sp)
    ctx->pc = 0x2b846cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2b8470: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x2b8470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8474: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x2b8474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8478: 0xafac0058  sw          $t4, 0x58($sp)
    ctx->pc = 0x2b8478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 12));
    // 0x2b847c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8480: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2b8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8484: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b8484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8488: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b8488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b848c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8490: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2b8490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8494: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8494u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8498: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b8498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b849c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b84a0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b84a4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b84a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b84a8: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b84a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b84ac: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2b84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b84b0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b84b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b84b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b84b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b84b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b84b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b84bc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b84bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b84c0: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2b84c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b84c4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2b84c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b84c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b84c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b84cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b84ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b84d0: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b84d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b84d4: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2b84d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b84d8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2b84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b84dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b84dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b84e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b84e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b84e4: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b84e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b84e8: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2b84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b84ec: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b84ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b84f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b84f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b84f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b84f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b84f8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2b84f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b84fc: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2b84fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8500: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b8500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8504: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8508: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8508u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b850c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2b850cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b8510: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8514: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2b8514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2b8518: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b8518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b851c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b851cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8520: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2b8520u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b8524: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x2b8524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b8528: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x2b8528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b852c: 0x8fac0098  lw          $t4, 0x98($sp)
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2b8530: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x2b8530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8534: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x2b8534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8538: 0xafac0068  sw          $t4, 0x68($sp)
    ctx->pc = 0x2b8538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 12));
    // 0x2b853c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8540: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2b8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8548: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b8548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b854c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8550: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8554: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8558: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2b8558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2b855c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8560: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2b8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8568: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2b8568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2b856c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2b856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8570: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b8570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8574: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2b8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8578: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x2b8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b857c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b857cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8580: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x2b8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8584: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b8584u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b8588: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b858c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b858cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8590: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b8590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b8594: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8598: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x2b8598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2b859c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2b859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b85a0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b85a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85a4: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2b85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b85a8: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x2b85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b85ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b85acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b85b0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2b85b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b85b4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b85b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b85b8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2b85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b85bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b85c0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2b85c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2b85c4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b85c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b85c8: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x2b85c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2b85cc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2b85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b85d0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b85d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85d4: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2b85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b85d8: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x2b85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b85dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b85dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b85e0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x2b85e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b85e4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b85e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b85e8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2b85e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b85ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b85f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b85f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b85f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b85f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b85f8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x2b85f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2b85fc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2b85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8600: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2b8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8608: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b860c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8610: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2b8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8618: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b8618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b861c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2b861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8620: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2b8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8628: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b862c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8630: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x2b8630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8634: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2b8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8638: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2b8638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b863c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b863cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8640: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2b8640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8644: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b8644u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b8648: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b864c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b864cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8650: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b8650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b8654: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8658: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x2b8658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2b865c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8660: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x2b8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8664: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x2b8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8668: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2b8668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b866c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b866cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8670: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2b8670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8674: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b8674u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b8678: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2b8678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b867c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b867cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8680: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2b8680u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2b8684: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b8684u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b8688: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x2b8688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2b868c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2b868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8690: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2b8690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8694: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2b8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8698: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x2b8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b869c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b869cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b86a0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2b86a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b86a4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b86a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b86a8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b86a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b86ac: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b86acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b86b0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b86b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b86b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b86b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b86b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b86bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b86bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b86c0: 0x1542feef  bne         $t2, $v0, . + 4 + (-0x111 << 2)
    ctx->pc = 0x2B86C0u;
    {
        const bool branch_taken_0x2b86c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86C0u;
        // 0x2b86c4: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86c0) {
            ctx->pc = 0x2B8280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8280;
        }
    }
    ctx->pc = 0x2B86C8u;
label_2b86c8:
    // 0x2b86c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86C8u;
        // 0x2b86cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86D0u;
}
