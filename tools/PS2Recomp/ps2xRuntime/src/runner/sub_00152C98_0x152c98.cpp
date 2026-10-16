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

// Function: sub_00152C98
// Address: 0x152c98 - 0x152fb8
void sub_00152C98_0x152c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152C98_0x152c98");
#endif

    switch (ctx->pc) {
        case 0x152cfcu: goto label_152cfc;
        case 0x152d3cu: goto label_152d3c;
        case 0x152e0cu: goto label_152e0c;
        case 0x152e18u: goto label_152e18;
        case 0x152e74u: goto label_152e74;
        case 0x152ed8u: goto label_152ed8;
        case 0x152f30u: goto label_152f30;
        case 0x152f64u: goto label_152f64;
        case 0x152f7cu: goto label_152f7c;
        case 0x152f8cu: goto label_152f8c;
        default: break;
    }

    ctx->pc = 0x152c98u;

    // 0x152c98: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x152c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x152c9c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x152c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x152ca0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x152ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x152ca4: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x152ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x152ca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cac: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x152cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x152cb0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x152cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x152cb4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x152cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x152cb8: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x152cb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x152cbc: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x152cbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x152cc0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x152cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x152cc4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x152cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x152cc8: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x152cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x152ccc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x152cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x152cd0: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x152cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x152cd4: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x152CD4u;
    {
        const bool branch_taken_0x152cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CD4u;
        // 0x152cd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cd4) {
            ctx->pc = 0x152F8Cu;
            goto label_152f8c;
        }
    }
    ctx->pc = 0x152CDCu;
    // 0x152cdc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x152cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x152ce0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x152CE0u;
    {
        const bool branch_taken_0x152ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152ce0) {
            ctx->pc = 0x152CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CE0u;
            // 0x152ce4: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D48u;
            goto label_152d48;
        }
    }
    ctx->pc = 0x152CE8u;
    // 0x152ce8: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x152cec: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x152CECu;
    {
        const bool branch_taken_0x152cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cec) {
            ctx->pc = 0x152CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CECu;
            // 0x152cf0: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D48u;
            goto label_152d48;
        }
    }
    ctx->pc = 0x152CF4u;
    // 0x152cf4: 0xc085dbc  jal         func_2176F0
    ctx->pc = 0x152CF4u;
    SET_GPR_U32(ctx, 31, 0x152CFCu);
    ctx->pc = 0x152CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CF4u;
    // 0x152cf8: 0x8e240068  lw          $a0, 0x68($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2176F0u, 0x152CF4u, 0x152CFCu)) {
        return;
    }
    ctx->pc = 0x152CFCu;
label_152cfc:
    // 0x152cfc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x152CFCu;
    {
        const bool branch_taken_0x152cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cfc) {
            ctx->pc = 0x152D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CFCu;
            // 0x152d00: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D48u;
            goto label_152d48;
        }
    }
    ctx->pc = 0x152D04u;
    // 0x152d04: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x152d08: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x152d0c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x152d10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152d14: 0x6a2200b3  ldl         $v0, 0xB3($s1)
    ctx->pc = 0x152d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x152d18: 0x6e2200ac  ldr         $v0, 0xAC($s1)
    ctx->pc = 0x152d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x152d1c: 0x6a2300bb  ldl         $v1, 0xBB($s1)
    ctx->pc = 0x152d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x152d20: 0x6e2300b4  ldr         $v1, 0xB4($s1)
    ctx->pc = 0x152d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x152d24: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x152d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d28: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x152d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d2c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x152d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d30: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x152d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d34: 0xc085d44  jal         func_217510
    ctx->pc = 0x152D34u;
    SET_GPR_U32(ctx, 31, 0x152D3Cu);
    ctx->pc = 0x152D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D34u;
    // 0x152d38: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x152D34u, 0x152D3Cu)) {
        return;
    }
    ctx->pc = 0x152D3Cu;
label_152d3c:
    // 0x152d3c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x152d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x152d40: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x152d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x152d44: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x152d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_152d48:
    // 0x152d48: 0x50400091  beql        $v0, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x152D48u;
    {
        const bool branch_taken_0x152d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d48) {
            ctx->pc = 0x152D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152D48u;
            // 0x152d4c: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152F90u;
            goto label_152f90;
        }
    }
    ctx->pc = 0x152D50u;
    // 0x152d50: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x152d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x152d54: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x152D54u;
    {
        const bool branch_taken_0x152d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D54u;
        // 0x152d58: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d54) {
            ctx->pc = 0x152F8Cu;
            goto label_152f8c;
        }
    }
    ctx->pc = 0x152D5Cu;
    // 0x152d5c: 0x6a2300b3  ldl         $v1, 0xB3($s1)
    ctx->pc = 0x152d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x152d60: 0x6e2300ac  ldr         $v1, 0xAC($s1)
    ctx->pc = 0x152d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x152d64: 0x6a2400bb  ldl         $a0, 0xBB($s1)
    ctx->pc = 0x152d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152d68: 0x6e2400b4  ldr         $a0, 0xB4($s1)
    ctx->pc = 0x152d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152d6c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x152d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d70: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x152d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d74: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x152d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d78: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x152d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152d7c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x152d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152d84: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x152d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152d88: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x152d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152d8c: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x152d8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x152d90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152d94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x152d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x152d98: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x152d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x152d9c: 0x0  nop
    ctx->pc = 0x152d9cu;
    // NOP
    // 0x152da0: 0x0  nop
    ctx->pc = 0x152da0u;
    // NOP
    // 0x152da4: 0x460025c3  div.s       $f23, $f4, $f0
    ctx->pc = 0x152da4u;
    ctx->f[23] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
    // 0x152da8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x152da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x152dac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x152DACu;
    {
        const bool branch_taken_0x152dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DACu;
        // 0x152db0: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dac) {
            ctx->pc = 0x152DC8u;
            goto label_152dc8;
        }
    }
    ctx->pc = 0x152DB4u;
    // 0x152db4: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x152db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x152db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152dbc: 0x0  nop
    ctx->pc = 0x152dbcu;
    // NOP
    // 0x152dc0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x152dc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x152dc4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x152dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_152dc8:
    // 0x152dc8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x152dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x152dcc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x152dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x152dd0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x152dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152dd4: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x152dd4u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x152dd8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x152dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152ddc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x152ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x152de0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x152de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x152de4: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x152de4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x152de8: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x152de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x152dec: 0x24a52730  addiu       $a1, $a1, 0x2730
    ctx->pc = 0x152decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
    // 0x152df0: 0xc7af001c  lwc1        $f15, 0x1C($sp)
    ctx->pc = 0x152df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x152df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152df8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x152df8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x152dfc: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x152dfcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x152e00: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x152e00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152e04: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x152E04u;
    SET_GPR_U32(ctx, 31, 0x152E0Cu);
    ctx->pc = 0x152E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E04u;
    // 0x152e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x152E04u, 0x152E0Cu)) {
        return;
    }
    ctx->pc = 0x152E0Cu;
label_152e0c:
    // 0x152e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e10: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x152E10u;
    SET_GPR_U32(ctx, 31, 0x152E18u);
    ctx->pc = 0x152E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E10u;
    // 0x152e14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x152E10u, 0x152E18u)) {
        return;
    }
    ctx->pc = 0x152E18u;
label_152e18:
    // 0x152e18: 0x8e32006c  lw          $s2, 0x6C($s1)
    ctx->pc = 0x152e18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x152e1c: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x152E1Cu;
    {
        const bool branch_taken_0x152e1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E1Cu;
        // 0x152e20: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e1c) {
            ctx->pc = 0x152F68u;
            goto label_152f68;
        }
    }
    ctx->pc = 0x152E24u;
    // 0x152e24: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x152e28: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x152e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x152e2c: 0x245085d8  addiu       $s0, $v0, -0x7A28
    ctx->pc = 0x152e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936024));
    // 0x152e30: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152E30u;
    {
        const bool branch_taken_0x152e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E30u;
        // 0x152e34: 0x8e330050  lw          $s3, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e30) {
            ctx->pc = 0x152E40u;
            goto label_152e40;
        }
    }
    ctx->pc = 0x152E38u;
    // 0x152e38: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x152e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x152e3c: 0x245085e8  addiu       $s0, $v0, -0x7A18
    ctx->pc = 0x152e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936040));
label_152e40:
    // 0x152e40: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x152e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x152e44: 0x6a2700b3  ldl         $a3, 0xB3($s1)
    ctx->pc = 0x152e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x152e48: 0x6e2700ac  ldr         $a3, 0xAC($s1)
    ctx->pc = 0x152e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x152e4c: 0x6a2800bb  ldl         $t0, 0xBB($s1)
    ctx->pc = 0x152e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x152e50: 0x6e2800b4  ldr         $t0, 0xB4($s1)
    ctx->pc = 0x152e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x152e54: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x152e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152e58: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x152e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152e5c: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x152e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152e60: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x152e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152e64: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x152E64u;
    {
        const bool branch_taken_0x152e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e64) {
            ctx->pc = 0x152E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152E64u;
            // 0x152e68: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152EECu;
            goto label_152eec;
        }
    }
    ctx->pc = 0x152E6Cu;
    // 0x152e6c: 0xc085bc2  jal         func_216F08
    ctx->pc = 0x152E6Cu;
    SET_GPR_U32(ctx, 31, 0x152E74u);
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x152E6Cu, 0x152E74u)) {
        return;
    }
    ctx->pc = 0x152E74u;
label_152e74:
    // 0x152e74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x152e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x152e78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x152e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x152e7c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x152e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x152e80: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x152e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x152e84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x152e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x152e88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x152e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152e8c: 0x0  nop
    ctx->pc = 0x152e8cu;
    // NOP
    // 0x152e90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152e94: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x152e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x152e98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x152e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152e9c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x152e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x152ea0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x152ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x152ea4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x152ea4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x152ea8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x152ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x152eac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x152eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x152eb0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152eb4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x152eb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x152eb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x152eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152ebc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x152ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x152ec0: 0x0  nop
    ctx->pc = 0x152ec0u;
    // NOP
    // 0x152ec4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x152ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x152ec8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x152ec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x152ecc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x152eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x152ed0: 0xc085bc2  jal         func_216F08
    ctx->pc = 0x152ED0u;
    SET_GPR_U32(ctx, 31, 0x152ED8u);
    ctx->pc = 0x152ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ED0u;
    // 0x152ed4: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x152ED0u, 0x152ED8u)) {
        return;
    }
    ctx->pc = 0x152ED8u;
label_152ed8:
    // 0x152ed8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x152ed8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x152edc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x152edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152ee0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x152ee0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x152ee4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x152EE4u;
    {
        const bool branch_taken_0x152ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE4u;
        // 0x152ee8: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee4) {
            ctx->pc = 0x152F3Cu;
            goto label_152f3c;
        }
    }
    ctx->pc = 0x152EECu;
label_152eec:
    // 0x152eec: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x152EECu;
    {
        const bool branch_taken_0x152eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152eec) {
            ctx->pc = 0x152EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152EECu;
            // 0x152ef0: 0x8e240068  lw          $a0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152F48u;
            goto label_152f48;
        }
    }
    ctx->pc = 0x152EF4u;
    // 0x152ef4: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x152ef8: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x152ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x152efc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x152efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152f00: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x152F00u;
    {
        const bool branch_taken_0x152f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f00) {
            ctx->pc = 0x152F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152F00u;
            // 0x152f04: 0x8e240068  lw          $a0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152F48u;
            goto label_152f48;
        }
    }
    ctx->pc = 0x152F08u;
    // 0x152f08: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x152f0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152f10: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x152f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x152f14: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x152F14u;
    {
        const bool branch_taken_0x152f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F14u;
        // 0x152f18: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f14) {
            ctx->pc = 0x152F44u;
            goto label_152f44;
        }
    }
    ctx->pc = 0x152F1Cu;
    // 0x152f1c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x152f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x152f20: 0x0  nop
    ctx->pc = 0x152f20u;
    // NOP
    // 0x152f24: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x152f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x152f28: 0xc085bc2  jal         func_216F08
    ctx->pc = 0x152F28u;
    SET_GPR_U32(ctx, 31, 0x152F30u);
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x152F28u, 0x152F30u)) {
        return;
    }
    ctx->pc = 0x152F30u;
label_152f30:
    // 0x152f30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x152f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152f34: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x152f34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x152f38: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x152f38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_152f3c:
    // 0x152f3c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x152f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x152f40: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x152f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_152f44:
    // 0x152f44: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x152f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_152f48:
    // 0x152f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f4c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x152f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x152f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152f54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x152f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f5c: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x152F5Cu;
    SET_GPR_U32(ctx, 31, 0x152F64u);
    ctx->pc = 0x152F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F5Cu;
    // 0x152f60: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x152F5Cu, 0x152F64u)) {
        return;
    }
    ctx->pc = 0x152F64u;
label_152f64:
    // 0x152f64: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x152f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_152f68:
    // 0x152f68: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x152f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x152f6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152F6Cu;
    {
        const bool branch_taken_0x152f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F6Cu;
        // 0x152f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f6c) {
            ctx->pc = 0x152F84u;
            goto label_152f84;
        }
    }
    ctx->pc = 0x152F74u;
    // 0x152f74: 0xc054e94  jal         func_153A50
    ctx->pc = 0x152F74u;
    SET_GPR_U32(ctx, 31, 0x152F7Cu);
    ctx->pc = 0x152F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F74u;
    // 0x152f78: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153A50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153A50u, 0x152F74u, 0x152F7Cu)) {
        return;
    }
    ctx->pc = 0x152F7Cu;
label_152f7c:
    // 0x152f7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152F7Cu;
    {
        const bool branch_taken_0x152f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F7Cu;
        // 0x152f80: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f7c) {
            ctx->pc = 0x152F90u;
            goto label_152f90;
        }
    }
    ctx->pc = 0x152F84u;
label_152f84:
    // 0x152f84: 0xc054ec6  jal         func_153B18
    ctx->pc = 0x152F84u;
    SET_GPR_U32(ctx, 31, 0x152F8Cu);
    ctx->pc = 0x152F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F84u;
    // 0x152f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153B18u, 0x152F84u, 0x152F8Cu)) {
        return;
    }
    ctx->pc = 0x152F8Cu;
label_152f8c:
    // 0x152f8c: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x152f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_152f90:
    // 0x152f90: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x152f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x152f94: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x152f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x152f98: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x152f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x152f9c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x152f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x152fa0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x152fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x152fa4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x152fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x152fa8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x152fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x152fac: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x152facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x152FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FB0u;
        // 0x152fb4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152FB8u;
}
