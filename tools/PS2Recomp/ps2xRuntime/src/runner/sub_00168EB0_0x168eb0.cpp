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

// Function: sub_00168EB0
// Address: 0x168eb0 - 0x169180
void sub_00168EB0_0x168eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168EB0_0x168eb0");
#endif

    switch (ctx->pc) {
        case 0x168edcu: goto label_168edc;
        case 0x168ef0u: goto label_168ef0;
        case 0x168f10u: goto label_168f10;
        case 0x168fa8u: goto label_168fa8;
        case 0x168fb4u: goto label_168fb4;
        case 0x168fc0u: goto label_168fc0;
        case 0x168fdcu: goto label_168fdc;
        case 0x169000u: goto label_169000;
        case 0x169018u: goto label_169018;
        case 0x16905cu: goto label_16905c;
        case 0x1690c0u: goto label_1690c0;
        case 0x1690dcu: goto label_1690dc;
        case 0x169110u: goto label_169110;
        case 0x169130u: goto label_169130;
        case 0x16914cu: goto label_16914c;
        default: break;
    }

    ctx->pc = 0x168eb0u;

    // 0x168eb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x168eb4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x168eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x168eb8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x168eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x168ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ec0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x168ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x168ec4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x168ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x168ec8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x168ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x168ecc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x168eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168ed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168ed4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x168ED4u;
    SET_GPR_U32(ctx, 31, 0x168EDCu);
    ctx->pc = 0x168ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168ED4u;
    // 0x168ed8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x168ED4u, 0x168EDCu)) {
        return;
    }
    ctx->pc = 0x168EDCu;
label_168edc:
    // 0x168edc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x168ee0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x168ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ee4: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x168ee8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x168EE8u;
    SET_GPR_U32(ctx, 31, 0x168EF0u);
    ctx->pc = 0x168EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168EE8u;
    // 0x168eec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x168EE8u, 0x168EF0u)) {
        return;
    }
    ctx->pc = 0x168EF0u;
label_168ef0:
    // 0x168ef0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x168ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ef8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x168EF8u;
    {
        const bool branch_taken_0x168ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EF8u;
        // 0x168efc: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ef8) {
            ctx->pc = 0x168FECu;
            goto label_168fec;
        }
    }
    ctx->pc = 0x168F00u;
    // 0x168f00: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168f04: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x168f08: 0x261200b0  addiu       $s2, $s0, 0xB0
    ctx->pc = 0x168f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x168f0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x168f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_168f10:
    // 0x168f10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x168f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168f14: 0x5454002c  bnel        $v0, $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x168F14u;
    {
        const bool branch_taken_0x168f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x168f14) {
            ctx->pc = 0x168F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168F14u;
            // 0x168f18: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168FC8u;
            goto label_168fc8;
        }
    }
    ctx->pc = 0x168F1Cu;
    // 0x168f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f20: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x168f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x168f24: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x168f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x168f28: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x168f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x168f2c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x168f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x168f30: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x168f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x168f34: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x168f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x168f38: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x168f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x168f3c: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x168f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x168f40: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x168f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f44: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x168f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f48: 0xb206007f  sdl         $a2, 0x7F($s0)
    ctx->pc = 0x168f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f4c: 0xb6060078  sdr         $a2, 0x78($s0)
    ctx->pc = 0x168f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f50: 0xb2070087  sdl         $a3, 0x87($s0)
    ctx->pc = 0x168f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f54: 0xb6070080  sdr         $a3, 0x80($s0)
    ctx->pc = 0x168f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f58: 0xb208008f  sdl         $t0, 0x8F($s0)
    ctx->pc = 0x168f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f5c: 0xb6080088  sdr         $t0, 0x88($s0)
    ctx->pc = 0x168f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f60: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x168f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x168f64: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x168f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x168f68: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x168f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x168f6c: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x168f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x168f70: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x168f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x168f74: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x168f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x168f78: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x168f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x168f7c: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x168f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x168f80: 0xb2020097  sdl         $v0, 0x97($s0)
    ctx->pc = 0x168f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f84: 0xb6020090  sdr         $v0, 0x90($s0)
    ctx->pc = 0x168f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f88: 0xb206009f  sdl         $a2, 0x9F($s0)
    ctx->pc = 0x168f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f8c: 0xb6060098  sdr         $a2, 0x98($s0)
    ctx->pc = 0x168f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f90: 0xb20700a7  sdl         $a3, 0xA7($s0)
    ctx->pc = 0x168f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f94: 0xb60700a0  sdr         $a3, 0xA0($s0)
    ctx->pc = 0x168f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f98: 0xb20800af  sdl         $t0, 0xAF($s0)
    ctx->pc = 0x168f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168f9c: 0xb60800a8  sdr         $t0, 0xA8($s0)
    ctx->pc = 0x168f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168fa0: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x168FA0u;
    SET_GPR_U32(ctx, 31, 0x168FA8u);
    ctx->pc = 0x168FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FA0u;
    // 0x168fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x168FA0u, 0x168FA8u)) {
        return;
    }
    ctx->pc = 0x168FA8u;
label_168fa8:
    // 0x168fa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fac: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x168FACu;
    SET_GPR_U32(ctx, 31, 0x168FB4u);
    ctx->pc = 0x168FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FACu;
    // 0x168fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x168FACu, 0x168FB4u)) {
        return;
    }
    ctx->pc = 0x168FB4u;
label_168fb4:
    // 0x168fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fb8: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x168FB8u;
    SET_GPR_U32(ctx, 31, 0x168FC0u);
    ctx->pc = 0x168FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FB8u;
    // 0x168fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x168FB8u, 0x168FC0u)) {
        return;
    }
    ctx->pc = 0x168FC0u;
label_168fc0:
    // 0x168fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168FC0u;
    {
        const bool branch_taken_0x168fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FC0u;
        // 0x168fc4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fc0) {
            ctx->pc = 0x168FF0u;
            goto label_168ff0;
        }
    }
    ctx->pc = 0x168FC8u;
label_168fc8:
    // 0x168fc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x168fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168fd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168fd4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x168FD4u;
    SET_GPR_U32(ctx, 31, 0x168FDCu);
    ctx->pc = 0x168FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FD4u;
    // 0x168fd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x168FD4u, 0x168FDCu)) {
        return;
    }
    ctx->pc = 0x168FDCu;
label_168fdc:
    // 0x168fdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x168fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168fe4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x168FE4u;
    {
        const bool branch_taken_0x168fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FE4u;
        // 0x168fe8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fe4) {
            ctx->pc = 0x168F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f10;
        }
    }
    ctx->pc = 0x168FECu;
label_168fec:
    // 0x168fec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x168fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_168ff0:
    // 0x168ff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ff4: 0x8c46f61c  lw          $a2, -0x9E4($v0)
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964764)));
    // 0x168ff8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x168FF8u;
    SET_GPR_U32(ctx, 31, 0x169000u);
    ctx->pc = 0x168FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FF8u;
    // 0x168ffc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x168FF8u, 0x169000u)) {
        return;
    }
    ctx->pc = 0x169000u;
label_169000:
    // 0x169000: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x169004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169008: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x169008u;
    {
        const bool branch_taken_0x169008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169008) {
            ctx->pc = 0x16900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169008u;
            // 0x16900c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169160u;
            goto label_169160;
        }
    }
    ctx->pc = 0x169010u;
    // 0x169010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169014: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169018:
    // 0x169018: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x169018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16901c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x16901Cu;
    {
        const bool branch_taken_0x16901c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16901Cu;
        // 0x169020: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16901c) {
            ctx->pc = 0x169130u;
            goto label_169130;
        }
    }
    ctx->pc = 0x169024u;
    // 0x169024: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x169024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169028: 0x244241d0  addiu       $v0, $v0, 0x41D0
    ctx->pc = 0x169028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16848));
    // 0x16902c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x169030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169034: 0x800008  jr          $a0
    ctx->pc = 0x169034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16903Cu: goto label_16903c;
            case 0x169048u: goto label_169048;
            case 0x1690C8u: goto label_1690c8;
            case 0x1690E4u: goto label_1690e4;
            case 0x1690F8u: goto label_1690f8;
            case 0x169118u: goto label_169118;
            case 0x169130u: goto label_169130;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169034u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16903Cu;
label_16903c:
    // 0x16903c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169040: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169040u;
        // 0x169044: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169040) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x169048u;
label_169048:
    // 0x169048: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16904c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16904Cu;
    {
        const bool branch_taken_0x16904c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16904Cu;
        // 0x169050: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16904c) {
            ctx->pc = 0x169064u;
            goto label_169064;
        }
    }
    ctx->pc = 0x169054u;
    // 0x169054: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169054u;
    SET_GPR_U32(ctx, 31, 0x16905Cu);
    ctx->pc = 0x169058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169054u;
    // 0x169058: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169054u, 0x16905Cu)) {
        return;
    }
    ctx->pc = 0x16905Cu;
label_16905c:
    // 0x16905c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x169060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x169060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169064:
    // 0x169064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169068: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x169068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16906c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16906Cu;
    {
        const bool branch_taken_0x16906c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16906c) {
            ctx->pc = 0x169070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16906Cu;
            // 0x169070: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169098u;
            goto label_169098;
        }
    }
    ctx->pc = 0x169074u;
    // 0x169074: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169074u;
    {
        const bool branch_taken_0x169074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169074u;
        // 0x169078: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169074) {
            ctx->pc = 0x169090u;
            goto label_169090;
        }
    }
    ctx->pc = 0x16907Cu;
    // 0x16907c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169080: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169080u;
    {
        const bool branch_taken_0x169080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169080u;
        // 0x169084: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169080) {
            ctx->pc = 0x1690A0u;
            goto label_1690a0;
        }
    }
    ctx->pc = 0x169088u;
    // 0x169088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169088u;
    {
        const bool branch_taken_0x169088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169088u;
        // 0x16908c: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169088) {
            ctx->pc = 0x1690ACu;
            goto label_1690ac;
        }
    }
    ctx->pc = 0x169090u;
label_169090:
    // 0x169090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169090u;
    {
        const bool branch_taken_0x169090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169090u;
        // 0x169094: 0x2442f738  addiu       $v0, $v0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169090) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x169098u;
label_169098:
    // 0x169098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169098u;
    {
        const bool branch_taken_0x169098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169098u;
        // 0x16909c: 0x2442f740  addiu       $v0, $v0, -0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169098) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x1690A0u;
label_1690a0:
    // 0x1690a0: 0x2442f748  addiu       $v0, $v0, -0x8B8
    ctx->pc = 0x1690a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965064));
label_1690a4:
    // 0x1690a4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1690a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1690a8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1690a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1690ac:
    // 0x1690ac: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1690ACu;
    {
        const bool branch_taken_0x1690ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690ACu;
        // 0x1690b0: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690ac) {
            ctx->pc = 0x169130u;
            goto label_169130;
        }
    }
    ctx->pc = 0x1690B4u;
    // 0x1690b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1690b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690b8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1690B8u;
    SET_GPR_U32(ctx, 31, 0x1690C0u);
    ctx->pc = 0x1690BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690B8u;
    // 0x1690bc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1690B8u, 0x1690C0u)) {
        return;
    }
    ctx->pc = 0x1690C0u;
label_1690c0:
    // 0x1690c0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1690C0u;
    {
        const bool branch_taken_0x1690c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C0u;
        // 0x1690c4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c0) {
            ctx->pc = 0x169134u;
            goto label_169134;
        }
    }
    ctx->pc = 0x1690C8u;
label_1690c8:
    // 0x1690c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1690c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690cc: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x1690ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1690d0:
    // 0x1690d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1690d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690d4: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1690D4u;
    SET_GPR_U32(ctx, 31, 0x1690DCu);
    ctx->pc = 0x1690D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690D4u;
    // 0x1690d8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1690D4u, 0x1690DCu)) {
        return;
    }
    ctx->pc = 0x1690DCu;
label_1690dc:
    // 0x1690dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1690DCu;
    {
        const bool branch_taken_0x1690dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690DCu;
        // 0x1690e0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690dc) {
            ctx->pc = 0x169134u;
            goto label_169134;
        }
    }
    ctx->pc = 0x1690E4u;
label_1690e4:
    // 0x1690e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1690e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1690e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1690ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1690ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1690f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1690F0u;
    {
        const bool branch_taken_0x1690f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690F0u;
        // 0x1690f4: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690f0) {
            ctx->pc = 0x169130u;
            goto label_169130;
        }
    }
    ctx->pc = 0x1690F8u;
label_1690f8:
    // 0x1690f8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690fc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1690fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x169100: 0x260500f8  addiu       $a1, $s0, 0xF8
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x169104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169108: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x169108u;
    SET_GPR_U32(ctx, 31, 0x169110u);
    ctx->pc = 0x16910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169108u;
    // 0x16910c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x169108u, 0x169110u)) {
        return;
    }
    ctx->pc = 0x169110u;
label_169110:
    // 0x169110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169110u;
    {
        const bool branch_taken_0x169110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169110u;
        // 0x169114: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169110) {
            ctx->pc = 0x169134u;
            goto label_169134;
        }
    }
    ctx->pc = 0x169118u;
label_169118:
    // 0x169118: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x169118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16911c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x169120: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x169120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x169124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169128: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x169128u;
    SET_GPR_U32(ctx, 31, 0x169130u);
    ctx->pc = 0x16912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169128u;
    // 0x16912c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x169128u, 0x169130u)) {
        return;
    }
    ctx->pc = 0x169130u;
label_169130:
    // 0x169130: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x169130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169134:
    // 0x169134: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x169134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16913c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169140: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169144: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x169144u;
    SET_GPR_U32(ctx, 31, 0x16914Cu);
    ctx->pc = 0x169148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169144u;
    // 0x169148: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x169144u, 0x16914Cu)) {
        return;
    }
    ctx->pc = 0x16914Cu;
label_16914c:
    // 0x16914c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169150: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169154: 0x5460ffb0  bnel        $v1, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x169154u;
    {
        const bool branch_taken_0x169154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169154) {
            ctx->pc = 0x169158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169154u;
            // 0x169158: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169018;
        }
    }
    ctx->pc = 0x16915Cu;
    // 0x16915c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16915cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_169160:
    // 0x169160: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x169160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169164: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x169164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169168: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x169168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16916c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16916cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169170: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x169170u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169178: 0x3e00008  jr          $ra
    ctx->pc = 0x169178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169178u;
        // 0x16917c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169180u;
}
