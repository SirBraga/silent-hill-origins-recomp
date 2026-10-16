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

// Function: sub_0027CD40
// Address: 0x27cd40 - 0x27ce68
void sub_0027CD40_0x27cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CD40_0x27cd40");
#endif

    switch (ctx->pc) {
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce44u: goto label_27ce44;
        default: break;
    }

    ctx->pc = 0x27cd40u;

    // 0x27cd40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27cd44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cd48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27cd4c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27cd50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27cd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27cd58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27cd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27cd60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27cd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27cd68: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27cd6c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27CD6Cu;
    {
        const bool branch_taken_0x27cd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD6Cu;
        // 0x27cd70: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd6c) {
            ctx->pc = 0x27CDCCu;
            goto label_27cdcc;
        }
    }
    ctx->pc = 0x27CD74u;
    // 0x27cd74: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x27cd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27cd78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CD78u;
    {
        const bool branch_taken_0x27cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD78u;
        // 0x27cd7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd78) {
            ctx->pc = 0x27CD90u;
            goto label_27cd90;
        }
    }
    ctx->pc = 0x27CD80u;
    // 0x27cd80: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CD80u;
    {
        const bool branch_taken_0x27cd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD80u;
        // 0x27cd84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd80) {
            ctx->pc = 0x27CDACu;
            goto label_27cdac;
        }
    }
    ctx->pc = 0x27CD88u;
    // 0x27cd88: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27CD88u;
    {
        const bool branch_taken_0x27cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD88u;
        // 0x27cd8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd88) {
            ctx->pc = 0x27CE4Cu;
            goto label_27ce4c;
        }
    }
    ctx->pc = 0x27CD90u;
label_27cd90:
    // 0x27cd90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27cd94: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27CD94u;
    {
        const bool branch_taken_0x27cd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD94u;
        // 0x27cd98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd94) {
            ctx->pc = 0x27CDE4u;
            goto label_27cde4;
        }
    }
    ctx->pc = 0x27CD9Cu;
    // 0x27cd9c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27CD9Cu;
    {
        const bool branch_taken_0x27cd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD9Cu;
        // 0x27cda0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd9c) {
            ctx->pc = 0x27CE00u;
            goto label_27ce00;
        }
    }
    ctx->pc = 0x27CDA4u;
    // 0x27cda4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27CDA4u;
    {
        const bool branch_taken_0x27cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDA4u;
        // 0x27cda8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cda4) {
            ctx->pc = 0x27CE4Cu;
            goto label_27ce4c;
        }
    }
    ctx->pc = 0x27CDACu;
label_27cdac:
    // 0x27cdac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdb0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cdb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdb4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cdb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdbc: 0xc09e80c  jal         func_27A030
    ctx->pc = 0x27CDBCu;
    SET_GPR_U32(ctx, 31, 0x27CDC4u);
    ctx->pc = 0x27CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDBCu;
    // 0x27cdc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27A030u, 0x27CDBCu, 0x27CDC4u)) {
        return;
    }
    ctx->pc = 0x27CDC4u;
label_27cdc4:
    // 0x27cdc4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27CDC4u;
    {
        const bool branch_taken_0x27cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDC4u;
        // 0x27cdc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdc4) {
            ctx->pc = 0x27CE48u;
            goto label_27ce48;
        }
    }
    ctx->pc = 0x27CDCCu;
label_27cdcc:
    // 0x27cdcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cdd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdd4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cdd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cddc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27CDDCu;
    {
        const bool branch_taken_0x27cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDDCu;
        // 0x27cde0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cddc) {
            ctx->pc = 0x27CE3Cu;
            goto label_27ce3c;
        }
    }
    ctx->pc = 0x27CDE4u;
label_27cde4:
    // 0x27cde4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cde8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27cde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27cdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdf0: 0xc09eae4  jal         func_27AB90
    ctx->pc = 0x27CDF0u;
    SET_GPR_U32(ctx, 31, 0x27CDF8u);
    ctx->pc = 0x27CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDF0u;
    // 0x27cdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27AB90u, 0x27CDF0u, 0x27CDF8u)) {
        return;
    }
    ctx->pc = 0x27CDF8u;
label_27cdf8:
    // 0x27cdf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27CDF8u;
    {
        const bool branch_taken_0x27cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDF8u;
        // 0x27cdfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdf8) {
            ctx->pc = 0x27CE48u;
            goto label_27ce48;
        }
    }
    ctx->pc = 0x27CE00u;
label_27ce00:
    // 0x27ce00: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x27CE00u;
    SET_GPR_U32(ctx, 31, 0x27CE08u);
    ctx->pc = 0x27CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE00u;
    // 0x27ce04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x27CE00u, 0x27CE08u)) {
        return;
    }
    ctx->pc = 0x27CE08u;
label_27ce08:
    // 0x27ce08: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x27ce08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27ce0c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x27ce0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27ce10: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x27ce10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27ce14: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x27ce14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27ce18: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x27ce18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ce1c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x27ce1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ce20: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x27ce20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ce24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce28: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x27ce28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ce2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27ce2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce30: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27ce30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27ce3c:
    // 0x27ce3c: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x27CE3Cu;
    SET_GPR_U32(ctx, 31, 0x27CE44u);
    ctx->pc = 0x27B1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27B1F0u, 0x27CE3Cu, 0x27CE44u)) {
        return;
    }
    ctx->pc = 0x27CE44u;
label_27ce44:
    // 0x27ce44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27ce44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ce48:
    // 0x27ce48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27ce48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27ce4c:
    // 0x27ce4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27ce4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ce50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ce50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ce54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27ce54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ce58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE5Cu;
        // 0x27ce60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CE64u;
    // 0x27ce64: 0x0  nop
    ctx->pc = 0x27ce64u;
    // NOP
    ctx->pc = 0x27ce68u;
}
