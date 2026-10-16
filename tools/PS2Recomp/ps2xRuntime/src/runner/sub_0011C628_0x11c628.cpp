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

// Function: sub_0011C628
// Address: 0x11c628 - 0x11c7d8
void sub_0011C628_0x11c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C628_0x11c628");
#endif

    switch (ctx->pc) {
        case 0x11c678u: goto label_11c678;
        case 0x11c688u: goto label_11c688;
        case 0x11c6b8u: goto label_11c6b8;
        case 0x11c6c8u: goto label_11c6c8;
        case 0x11c760u: goto label_11c760;
        case 0x11c794u: goto label_11c794;
        case 0x11c7c0u: goto label_11c7c0;
        default: break;
    }

    ctx->pc = 0x11c628u;

    // 0x11c628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c62c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c630: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c63c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11c63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c640: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c644: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11c648: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C648u;
    {
        const bool branch_taken_0x11c648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C648u;
        // 0x11c64c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c648) {
            ctx->pc = 0x11C660u;
            goto label_11c660;
        }
    }
    ctx->pc = 0x11C650u;
    // 0x11c650: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x11c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x11c654: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C654u;
    {
        const bool branch_taken_0x11c654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C654u;
        // 0x11c658: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c654) {
            ctx->pc = 0x11C68Cu;
            goto label_11c68c;
        }
    }
    ctx->pc = 0x11C65Cu;
    // 0x11c65c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_11c660:
    // 0x11c660: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x11c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x11c664: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x11c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x11c668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c670: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x11C670u;
    SET_GPR_U32(ctx, 31, 0x11C678u);
    ctx->pc = 0x11C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C670u;
    // 0x11c674: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x11C670u, 0x11C678u)) {
        return;
    }
    ctx->pc = 0x11C678u;
label_11c678:
    // 0x11c678: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11c67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c680: 0xc044eea  jal         func_113BA8
    ctx->pc = 0x11C680u;
    SET_GPR_U32(ctx, 31, 0x11C688u);
    ctx->pc = 0x11C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C680u;
    // 0x11c684: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113BA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113BA8u, 0x11C680u, 0x11C688u)) {
        return;
    }
    ctx->pc = 0x11C688u;
label_11c688:
    // 0x11c688: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11c68c:
    // 0x11c68c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c690: 0x8c438908  lw          $v1, -0x76F8($v0)
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936840)));
    // 0x11c694: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x11C694u;
    {
        const bool branch_taken_0x11c694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C694u;
        // 0x11c698: 0x24518908  addiu       $s1, $v0, -0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c694) {
            ctx->pc = 0x11C7C4u;
            goto label_11c7c4;
        }
    }
    ctx->pc = 0x11C69Cu;
    // 0x11c69c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x11c6a0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x11C6A0u;
    {
        const bool branch_taken_0x11c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6A0u;
        // 0x11c6a4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6a0) {
            ctx->pc = 0x11C7C4u;
            goto label_11c7c4;
        }
    }
    ctx->pc = 0x11C6A8u;
    // 0x11c6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6ac: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x11c6b0: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x11C6B0u;
    SET_GPR_U32(ctx, 31, 0x11C6B8u);
    ctx->pc = 0x11C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6B0u;
    // 0x11c6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x11C6B0u, 0x11C6B8u)) {
        return;
    }
    ctx->pc = 0x11C6B8u;
label_11c6b8:
    // 0x11c6b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11c6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6c0: 0xc044f16  jal         func_113C58
    ctx->pc = 0x11C6C0u;
    SET_GPR_U32(ctx, 31, 0x11C6C8u);
    ctx->pc = 0x11C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6C0u;
    // 0x11c6c4: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113C58u, 0x11C6C0u, 0x11C6C8u)) {
        return;
    }
    ctx->pc = 0x11C6C8u;
label_11c6c8:
    // 0x11c6c8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x11c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c6cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6d0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x11c6d4: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x11c6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c6d8: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x11c6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c6dc: 0x6a06009f  ldl         $a2, 0x9F($s0)
    ctx->pc = 0x11c6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c6e0: 0x6e060098  ldr         $a2, 0x98($s0)
    ctx->pc = 0x11c6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c6e4: 0x6a0700a7  ldl         $a3, 0xA7($s0)
    ctx->pc = 0x11c6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11c6e8: 0x6e0700a0  ldr         $a3, 0xA0($s0)
    ctx->pc = 0x11c6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11c6ec: 0x6a0800af  ldl         $t0, 0xAF($s0)
    ctx->pc = 0x11c6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11c6f0: 0x6e0800a8  ldr         $t0, 0xA8($s0)
    ctx->pc = 0x11c6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11c6f4: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x11c6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6f8: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x11c6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6fc: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x11c6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c700: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x11c700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c704: 0xb0470027  sdl         $a3, 0x27($v0)
    ctx->pc = 0x11c704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c708: 0xb4470020  sdr         $a3, 0x20($v0)
    ctx->pc = 0x11c708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c70c: 0xb048002f  sdl         $t0, 0x2F($v0)
    ctx->pc = 0x11c70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c710: 0xb4480028  sdr         $t0, 0x28($v0)
    ctx->pc = 0x11c710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c714: 0x6a0300b7  ldl         $v1, 0xB7($s0)
    ctx->pc = 0x11c714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c718: 0x6e0300b0  ldr         $v1, 0xB0($s0)
    ctx->pc = 0x11c718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c71c: 0x6a0600bf  ldl         $a2, 0xBF($s0)
    ctx->pc = 0x11c71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c720: 0x6e0600b8  ldr         $a2, 0xB8($s0)
    ctx->pc = 0x11c720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c724: 0x6a0700c7  ldl         $a3, 0xC7($s0)
    ctx->pc = 0x11c724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11c728: 0x6e0700c0  ldr         $a3, 0xC0($s0)
    ctx->pc = 0x11c728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11c72c: 0x6a0800cf  ldl         $t0, 0xCF($s0)
    ctx->pc = 0x11c72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11c730: 0x6e0800c8  ldr         $t0, 0xC8($s0)
    ctx->pc = 0x11c730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11c734: 0xb0430037  sdl         $v1, 0x37($v0)
    ctx->pc = 0x11c734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c738: 0xb4430030  sdr         $v1, 0x30($v0)
    ctx->pc = 0x11c738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c73c: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x11c73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c740: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x11c740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c744: 0xb0470047  sdl         $a3, 0x47($v0)
    ctx->pc = 0x11c744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c748: 0xb4470040  sdr         $a3, 0x40($v0)
    ctx->pc = 0x11c748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c74c: 0xb048004f  sdl         $t0, 0x4F($v0)
    ctx->pc = 0x11c74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c750: 0xb4480048  sdr         $t0, 0x48($v0)
    ctx->pc = 0x11c750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c754: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x11c754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x11c758: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11C758u;
    SET_GPR_U32(ctx, 31, 0x11C760u);
    ctx->pc = 0x11C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C758u;
    // 0x11c75c: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11C758u, 0x11C760u)) {
        return;
    }
    ctx->pc = 0x11C760u;
label_11c760:
    // 0x11c760: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x11c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x11c764: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x11c768: 0x8c44bcd8  lw          $a0, -0x4328($v0)
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBCD8u));
    // 0x11c76c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x11c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x11c770: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C770u;
    {
        const bool branch_taken_0x11c770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C770u;
        // 0x11c774: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c770) {
            ctx->pc = 0x11C794u;
            goto label_11c794;
        }
    }
    ctx->pc = 0x11C778u;
    // 0x11c778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C77Cu;
    {
        const bool branch_taken_0x11c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C77Cu;
        // 0x11c780: 0x8e221a70  lw          $v0, 0x1A70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c77c) {
            ctx->pc = 0x11C798u;
            goto label_11c798;
        }
    }
    ctx->pc = 0x11C784u;
    // 0x11c784: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11c784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11c788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c78c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11C78Cu;
    SET_GPR_U32(ctx, 31, 0x11C794u);
    ctx->pc = 0x11C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C78Cu;
    // 0x11c790: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11C78Cu, 0x11C794u)) {
        return;
    }
    ctx->pc = 0x11C794u;
label_11c794:
    // 0x11c794: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
label_11c798:
    // 0x11c798: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x11c798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x11c79c: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C79Cu;
    {
        const bool branch_taken_0x11c79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11c79c) {
            ctx->pc = 0x11C7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C79Cu;
            // 0x11c7a0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C7C4u;
            goto label_11c7c4;
        }
    }
    ctx->pc = 0x11C7A4u;
    // 0x11c7a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c7a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C7A8u;
    {
        const bool branch_taken_0x11c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7a8) {
            ctx->pc = 0x11C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C7A8u;
            // 0x11c7ac: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C7C4u;
            goto label_11c7c4;
        }
    }
    ctx->pc = 0x11C7B0u;
    // 0x11c7b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11c7b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7b8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11C7B8u;
    SET_GPR_U32(ctx, 31, 0x11C7C0u);
    ctx->pc = 0x11C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7B8u;
    // 0x11c7bc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11C7B8u, 0x11C7C0u)) {
        return;
    }
    ctx->pc = 0x11C7C0u;
label_11c7c0:
    // 0x11c7c0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x11c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_11c7c4:
    // 0x11c7c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c7c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D0u;
        // 0x11c7d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C7D8u;
}
