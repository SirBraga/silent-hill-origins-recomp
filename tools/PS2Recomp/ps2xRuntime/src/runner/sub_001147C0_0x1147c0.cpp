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

// Function: sub_001147C0
// Address: 0x1147c0 - 0x1149f0
void sub_001147C0_0x1147c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001147C0_0x1147c0");
#endif

    switch (ctx->pc) {
        case 0x1147e4u: goto label_1147e4;
        case 0x1147f8u: goto label_1147f8;
        case 0x114818u: goto label_114818;
        case 0x1148c0u: goto label_1148c0;
        case 0x1148e4u: goto label_1148e4;
        case 0x114900u: goto label_114900;
        case 0x114950u: goto label_114950;
        case 0x1149c0u: goto label_1149c0;
        default: break;
    }

    ctx->pc = 0x1147c0u;

    // 0x1147c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1147c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1147c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1147c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1147c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1147c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1147cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1147ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1147d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1147d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1147d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1147d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1147d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1147dc: 0xc04459c  jal         func_111670
    ctx->pc = 0x1147DCu;
    SET_GPR_U32(ctx, 31, 0x1147E4u);
    ctx->pc = 0x1147E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147DCu;
    // 0x1147e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x1147DCu, 0x1147E4u)) {
        return;
    }
    ctx->pc = 0x1147E4u;
label_1147e4:
    // 0x1147e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1147e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1147e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1147e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147ec: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1147ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1147f0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1147F0u;
    SET_GPR_U32(ctx, 31, 0x1147F8u);
    ctx->pc = 0x1147F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147F0u;
    // 0x1147f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1147F0u, 0x1147F8u)) {
        return;
    }
    ctx->pc = 0x1147F8u;
label_1147f8:
    // 0x1147f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1147f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1147fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1147fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114800: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x114800u;
    {
        const bool branch_taken_0x114800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114800u;
        // 0x114804: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114800) {
            ctx->pc = 0x1148D0u;
            goto label_1148d0;
        }
    }
    ctx->pc = 0x114808u;
    // 0x114808: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x114808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11480c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x114810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x114814: 0x0  nop
    ctx->pc = 0x114814u;
    // NOP
label_114818:
    // 0x114818: 0x14720023  bne         $v1, $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x114818u;
    {
        const bool branch_taken_0x114818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x11481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114818u;
        // 0x11481c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114818) {
            ctx->pc = 0x1148A8u;
            goto label_1148a8;
        }
    }
    ctx->pc = 0x114820u;
    // 0x114820: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x114824: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x114824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114828: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x114828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11482c: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x11482cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x114830: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x114830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x114834: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x114834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x114838: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x114838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11483c: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x11483cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x114840: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x114840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x114844: 0xb2030097  sdl         $v1, 0x97($s0)
    ctx->pc = 0x114844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114848: 0xb6030090  sdr         $v1, 0x90($s0)
    ctx->pc = 0x114848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11484c: 0xb204009f  sdl         $a0, 0x9F($s0)
    ctx->pc = 0x11484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114850: 0xb6040098  sdr         $a0, 0x98($s0)
    ctx->pc = 0x114850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114854: 0xb20500a7  sdl         $a1, 0xA7($s0)
    ctx->pc = 0x114854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114858: 0xb60500a0  sdr         $a1, 0xA0($s0)
    ctx->pc = 0x114858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11485c: 0xb20600af  sdl         $a2, 0xAF($s0)
    ctx->pc = 0x11485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114860: 0xb60600a8  sdr         $a2, 0xA8($s0)
    ctx->pc = 0x114860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114864: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x114864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114868: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x114868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11486c: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x11486cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x114870: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x114870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x114874: 0x68450047  ldl         $a1, 0x47($v0)
    ctx->pc = 0x114874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x114878: 0x6c450040  ldr         $a1, 0x40($v0)
    ctx->pc = 0x114878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11487c: 0x6846004f  ldl         $a2, 0x4F($v0)
    ctx->pc = 0x11487cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x114880: 0x6c460048  ldr         $a2, 0x48($v0)
    ctx->pc = 0x114880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x114884: 0xb20300b7  sdl         $v1, 0xB7($s0)
    ctx->pc = 0x114884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114888: 0xb60300b0  sdr         $v1, 0xB0($s0)
    ctx->pc = 0x114888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11488c: 0xb20400bf  sdl         $a0, 0xBF($s0)
    ctx->pc = 0x11488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114890: 0xb60400b8  sdr         $a0, 0xB8($s0)
    ctx->pc = 0x114890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114894: 0xb20500c7  sdl         $a1, 0xC7($s0)
    ctx->pc = 0x114894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114898: 0xb60500c0  sdr         $a1, 0xC0($s0)
    ctx->pc = 0x114898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11489c: 0xb20600cf  sdl         $a2, 0xCF($s0)
    ctx->pc = 0x11489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1148a0: 0xb60600c8  sdr         $a2, 0xC8($s0)
    ctx->pc = 0x1148a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1148a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1148a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1148a8:
    // 0x1148a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1148a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1148acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1148b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1148b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1148b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1148b8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1148B8u;
    SET_GPR_U32(ctx, 31, 0x1148C0u);
    ctx->pc = 0x1148BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148B8u;
    // 0x1148bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1148B8u, 0x1148C0u)) {
        return;
    }
    ctx->pc = 0x1148C0u;
label_1148c0:
    // 0x1148c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1148c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1148c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1148c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1148c8: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1148C8u;
    {
        const bool branch_taken_0x1148c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148c8) {
            ctx->pc = 0x1148CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148C8u;
            // 0x1148cc: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114818;
        }
    }
    ctx->pc = 0x1148D0u;
label_1148d0:
    // 0x1148d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1148d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1148d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1148d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148d8: 0x8c464518  lw          $a2, 0x4518($v0)
    ctx->pc = 0x1148d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4518u));
    // 0x1148dc: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1148DCu;
    SET_GPR_U32(ctx, 31, 0x1148E4u);
    ctx->pc = 0x1148E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148DCu;
    // 0x1148e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1148DCu, 0x1148E4u)) {
        return;
    }
    ctx->pc = 0x1148E4u;
label_1148e4:
    // 0x1148e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1148e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1148e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1148ec: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1148ECu;
    {
        const bool branch_taken_0x1148ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1148ec) {
            ctx->pc = 0x1148F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148ECu;
            // 0x1148f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1149D4u;
            goto label_1149d4;
        }
    }
    ctx->pc = 0x1148F4u;
    // 0x1148f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1148f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1148fc: 0x0  nop
    ctx->pc = 0x1148fcu;
    // NOP
label_114900:
    // 0x114900: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x114900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x114904: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x114904u;
    {
        const bool branch_taken_0x114904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114904u;
        // 0x114908: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114904) {
            ctx->pc = 0x1149A4u;
            goto label_1149a4;
        }
    }
    ctx->pc = 0x11490Cu;
    // 0x11490c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114910: 0x2442ab70  addiu       $v0, $v0, -0x5490
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
    // 0x114914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11491c: 0x800008  jr          $a0
    ctx->pc = 0x11491Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114924u: goto label_114924;
            case 0x114938u: goto label_114938;
            case 0x114958u: goto label_114958;
            case 0x114968u: goto label_114968;
            case 0x114988u: goto label_114988;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11491Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x114924u;
label_114924:
    // 0x114924: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x114924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114928: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x114928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11492c: 0x24c6ab60  addiu       $a2, $a2, -0x54A0
    ctx->pc = 0x11492cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945632));
    // 0x114930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x114930u;
    {
        const bool branch_taken_0x114930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114930u;
        // 0x114934: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114930) {
            ctx->pc = 0x114948u;
            goto label_114948;
        }
    }
    ctx->pc = 0x114938u;
label_114938:
    // 0x114938: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x114938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11493c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11493cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x114940: 0x24c6ab60  addiu       $a2, $a2, -0x54A0
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945632));
    // 0x114944: 0x260400d8  addiu       $a0, $s0, 0xD8
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_114948:
    // 0x114948: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x114948u;
    SET_GPR_U32(ctx, 31, 0x114950u);
    ctx->pc = 0x11494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114948u;
    // 0x11494c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x114948u, 0x114950u)) {
        return;
    }
    ctx->pc = 0x114950u;
label_114950:
    // 0x114950: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x114950u;
    {
        const bool branch_taken_0x114950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114950u;
        // 0x114954: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114950) {
            ctx->pc = 0x1149A8u;
            goto label_1149a8;
        }
    }
    ctx->pc = 0x114958u;
label_114958:
    // 0x114958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11495c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114960: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114960u;
    {
        const bool branch_taken_0x114960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114960u;
        // 0x114964: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114960) {
            ctx->pc = 0x1149A4u;
            goto label_1149a4;
        }
    }
    ctx->pc = 0x114968u;
label_114968:
    // 0x114968: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11496c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x114970: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114970u;
    {
        const bool branch_taken_0x114970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114970u;
        // 0x114974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114970) {
            ctx->pc = 0x114980u;
            goto label_114980;
        }
    }
    ctx->pc = 0x114978u;
    // 0x114978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x114978u;
    {
        const bool branch_taken_0x114978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114978u;
        // 0x11497c: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114978) {
            ctx->pc = 0x1149A4u;
            goto label_1149a4;
        }
    }
    ctx->pc = 0x114980u;
label_114980:
    // 0x114980: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x114980u;
    {
        const bool branch_taken_0x114980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114980u;
        // 0x114984: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114980) {
            ctx->pc = 0x1149A4u;
            goto label_1149a4;
        }
    }
    ctx->pc = 0x114988u;
label_114988:
    // 0x114988: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11498c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x114990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114990u;
    {
        const bool branch_taken_0x114990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114990u;
        // 0x114994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114990) {
            ctx->pc = 0x1149A0u;
            goto label_1149a0;
        }
    }
    ctx->pc = 0x114998u;
    // 0x114998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114998u;
    {
        const bool branch_taken_0x114998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114998u;
        // 0x11499c: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114998) {
            ctx->pc = 0x1149A4u;
            goto label_1149a4;
        }
    }
    ctx->pc = 0x1149A0u;
label_1149a0:
    // 0x1149a0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1149a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1149a4:
    // 0x1149a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1149a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1149a8:
    // 0x1149a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1149a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1149ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1149acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1149b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1149b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1149b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1149b8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1149B8u;
    SET_GPR_U32(ctx, 31, 0x1149C0u);
    ctx->pc = 0x1149BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149B8u;
    // 0x1149bc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1149B8u, 0x1149C0u)) {
        return;
    }
    ctx->pc = 0x1149C0u;
label_1149c0:
    // 0x1149c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1149c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1149c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1149c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1149c8: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1149C8u;
    {
        const bool branch_taken_0x1149c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1149c8) {
            ctx->pc = 0x1149CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1149C8u;
            // 0x1149cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114900;
        }
    }
    ctx->pc = 0x1149D0u;
    // 0x1149d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1149d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1149d4:
    // 0x1149d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1149d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1149d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1149d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1149dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1149dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1149e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1149e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1149e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1149E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149E4u;
        // 0x1149e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1149ECu;
    // 0x1149ec: 0x0  nop
    ctx->pc = 0x1149ecu;
    // NOP
    ctx->pc = 0x1149f0u;
}
