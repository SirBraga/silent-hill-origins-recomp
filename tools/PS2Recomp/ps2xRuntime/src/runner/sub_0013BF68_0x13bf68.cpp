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

// Function: sub_0013BF68
// Address: 0x13bf68 - 0x13c118
void sub_0013BF68_0x13bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BF68_0x13bf68");
#endif

    switch (ctx->pc) {
        case 0x13bf94u: goto label_13bf94;
        case 0x13bfb0u: goto label_13bfb0;
        case 0x13c04cu: goto label_13c04c;
        case 0x13c054u: goto label_13c054;
        case 0x13c070u: goto label_13c070;
        case 0x13c094u: goto label_13c094;
        case 0x13c0a8u: goto label_13c0a8;
        case 0x13c0c0u: goto label_13c0c0;
        case 0x13c0ccu: goto label_13c0cc;
        case 0x13c0ecu: goto label_13c0ec;
        default: break;
    }

    ctx->pc = 0x13bf68u;

    // 0x13bf68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13bf6c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13bf70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13bf74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13bf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13bf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf80: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x13bf84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bf88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13bf8c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13BF8Cu;
    SET_GPR_U32(ctx, 31, 0x13BF94u);
    ctx->pc = 0x13BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF8Cu;
    // 0x13bf90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13BF8Cu, 0x13BF94u)) {
        return;
    }
    ctx->pc = 0x13BF94u;
label_13bf94:
    // 0x13bf94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bf98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bf9c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x13BF9Cu;
    {
        const bool branch_taken_0x13bf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF9Cu;
        // 0x13bfa0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf9c) {
            ctx->pc = 0x13C084u;
            goto label_13c084;
        }
    }
    ctx->pc = 0x13BFA4u;
    // 0x13bfa4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13bfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bfa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bfac: 0x0  nop
    ctx->pc = 0x13bfacu;
    // NOP
label_13bfb0:
    // 0x13bfb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13bfb4: 0x14520029  bne         $v0, $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x13BFB4u;
    {
        const bool branch_taken_0x13bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x13BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFB4u;
        // 0x13bfb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfb4) {
            ctx->pc = 0x13C05Cu;
            goto label_13c05c;
        }
    }
    ctx->pc = 0x13BFBCu;
    // 0x13bfbc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13bfc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfc4: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x13bfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13bfc8: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x13bfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13bfcc: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x13bfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13bfd0: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x13bfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13bfd4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x13bfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13bfd8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x13bfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13bfdc: 0x68690027  ldl         $t1, 0x27($v1)
    ctx->pc = 0x13bfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x13bfe0: 0x6c690020  ldr         $t1, 0x20($v1)
    ctx->pc = 0x13bfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x13bfe4: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x13bfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bfe8: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x13bfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bfec: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x13bfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bff0: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x13bff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bff4: 0xb0480027  sdl         $t0, 0x27($v0)
    ctx->pc = 0x13bff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bff8: 0xb4480020  sdr         $t0, 0x20($v0)
    ctx->pc = 0x13bff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bffc: 0xb049002f  sdl         $t1, 0x2F($v0)
    ctx->pc = 0x13bffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c000: 0xb4490028  sdr         $t1, 0x28($v0)
    ctx->pc = 0x13c000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c004: 0x6866002f  ldl         $a2, 0x2F($v1)
    ctx->pc = 0x13c004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c008: 0x6c660028  ldr         $a2, 0x28($v1)
    ctx->pc = 0x13c008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c00c: 0x68670037  ldl         $a3, 0x37($v1)
    ctx->pc = 0x13c00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c010: 0x6c670030  ldr         $a3, 0x30($v1)
    ctx->pc = 0x13c010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c014: 0x6868003f  ldl         $t0, 0x3F($v1)
    ctx->pc = 0x13c014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13c018: 0x6c680038  ldr         $t0, 0x38($v1)
    ctx->pc = 0x13c018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13c01c: 0x68690047  ldl         $t1, 0x47($v1)
    ctx->pc = 0x13c01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x13c020: 0x6c690040  ldr         $t1, 0x40($v1)
    ctx->pc = 0x13c020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x13c024: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x13c024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c028: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x13c028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c02c: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x13c02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c030: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x13c030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c034: 0xb0480047  sdl         $t0, 0x47($v0)
    ctx->pc = 0x13c034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c038: 0xb4480040  sdr         $t0, 0x40($v0)
    ctx->pc = 0x13c038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c03c: 0xb049004f  sdl         $t1, 0x4F($v0)
    ctx->pc = 0x13c03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c040: 0xb4490048  sdr         $t1, 0x48($v0)
    ctx->pc = 0x13c040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c044: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x13C044u;
    SET_GPR_U32(ctx, 31, 0x13C04Cu);
    ctx->pc = 0x13C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C044u;
    // 0x13c048: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x13C044u, 0x13C04Cu)) {
        return;
    }
    ctx->pc = 0x13C04Cu;
label_13c04c:
    // 0x13c04c: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x13C04Cu;
    SET_GPR_U32(ctx, 31, 0x13C054u);
    ctx->pc = 0x13C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C04Cu;
    // 0x13c050: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x13C04Cu, 0x13C054u)) {
        return;
    }
    ctx->pc = 0x13C054u;
label_13c054:
    // 0x13c054: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c05c:
    // 0x13c05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c068: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13C068u;
    SET_GPR_U32(ctx, 31, 0x13C070u);
    ctx->pc = 0x13C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C068u;
    // 0x13c06c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13C068u, 0x13C070u)) {
        return;
    }
    ctx->pc = 0x13C070u;
label_13c070:
    // 0x13c070: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c078: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x13C078u;
    {
        const bool branch_taken_0x13c078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C078u;
        // 0x13c07c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c078) {
            ctx->pc = 0x13BFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bfb0;
        }
    }
    ctx->pc = 0x13C080u;
    // 0x13c080: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13c084:
    // 0x13c084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c088: 0x8c4647bc  lw          $a2, 0x47BC($v0)
    ctx->pc = 0x13c088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18364)));
    // 0x13c08c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13C08Cu;
    SET_GPR_U32(ctx, 31, 0x13C094u);
    ctx->pc = 0x13C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C08Cu;
    // 0x13c090: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13C08Cu, 0x13C094u)) {
        return;
    }
    ctx->pc = 0x13C094u;
label_13c094:
    // 0x13c094: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c09c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C09Cu;
    {
        const bool branch_taken_0x13c09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C09Cu;
        // 0x13c0a0: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c09c) {
            ctx->pc = 0x13C0FCu;
            goto label_13c0fc;
        }
    }
    ctx->pc = 0x13C0A4u;
    // 0x13c0a4: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x13c0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13c0a8:
    // 0x13c0a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13c0ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C0ACu;
    {
        const bool branch_taken_0x13c0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0ACu;
        // 0x13c0b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0ac) {
            ctx->pc = 0x13C0D4u;
            goto label_13c0d4;
        }
    }
    ctx->pc = 0x13C0B4u;
    // 0x13c0b4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x13c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13c0b8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x13C0B8u;
    SET_GPR_U32(ctx, 31, 0x13C0C0u);
    ctx->pc = 0x13C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0B8u;
    // 0x13c0bc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x13C0B8u, 0x13C0C0u)) {
        return;
    }
    ctx->pc = 0x13C0C0u;
label_13c0c0:
    // 0x13c0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0c4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x13C0C4u;
    SET_GPR_U32(ctx, 31, 0x13C0CCu);
    ctx->pc = 0x13C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0C4u;
    // 0x13c0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x13C0C4u, 0x13C0CCu)) {
        return;
    }
    ctx->pc = 0x13C0CCu;
label_13c0cc:
    // 0x13c0cc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x13c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x13c0d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13c0d4:
    // 0x13c0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c0e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c0e4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13C0E4u;
    SET_GPR_U32(ctx, 31, 0x13C0ECu);
    ctx->pc = 0x13C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0E4u;
    // 0x13c0e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13C0E4u, 0x13C0ECu)) {
        return;
    }
    ctx->pc = 0x13C0ECu;
label_13c0ec:
    // 0x13c0ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c0f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c0f4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13C0F4u;
    {
        const bool branch_taken_0x13c0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0F4u;
        // 0x13c0f8: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0f4) {
            ctx->pc = 0x13C0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c0a8;
        }
    }
    ctx->pc = 0x13C0FCu;
label_13c0fc:
    // 0x13c0fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13c0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c100: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13c100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C10Cu;
        // 0x13c110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C114u;
    // 0x13c114: 0x0  nop
    ctx->pc = 0x13c114u;
    // NOP
    ctx->pc = 0x13c118u;
}
