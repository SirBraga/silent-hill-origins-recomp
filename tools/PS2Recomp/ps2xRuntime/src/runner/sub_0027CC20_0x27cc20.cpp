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

// Function: sub_0027CC20
// Address: 0x27cc20 - 0x27cd40
void sub_0027CC20_0x27cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CC20_0x27cc20");
#endif

    switch (ctx->pc) {
        case 0x27cca0u: goto label_27cca0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cd20u: goto label_27cd20;
        default: break;
    }

    ctx->pc = 0x27cc20u;

    // 0x27cc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27cc24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cc28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27cc2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27cc30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27cc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27cc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27cc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27cc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc3c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27cc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27cc40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27cc40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27cc48: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27cc4c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CC4Cu;
    {
        const bool branch_taken_0x27cc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC4Cu;
        // 0x27cc50: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc4c) {
            ctx->pc = 0x27CCA8u;
            goto label_27cca8;
        }
    }
    ctx->pc = 0x27CC54u;
    // 0x27cc54: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x27cc54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27cc58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC58u;
    {
        const bool branch_taken_0x27cc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC58u;
        // 0x27cc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc58) {
            ctx->pc = 0x27CC70u;
            goto label_27cc70;
        }
    }
    ctx->pc = 0x27CC60u;
    // 0x27cc60: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CC60u;
    {
        const bool branch_taken_0x27cc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC60u;
        // 0x27cc64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc60) {
            ctx->pc = 0x27CC8Cu;
            goto label_27cc8c;
        }
    }
    ctx->pc = 0x27CC68u;
    // 0x27cc68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27CC68u;
    {
        const bool branch_taken_0x27cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC68u;
        // 0x27cc6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc68) {
            ctx->pc = 0x27CD28u;
            goto label_27cd28;
        }
    }
    ctx->pc = 0x27CC70u;
label_27cc70:
    // 0x27cc70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27cc74: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27CC74u;
    {
        const bool branch_taken_0x27cc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC74u;
        // 0x27cc78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc74) {
            ctx->pc = 0x27CCC0u;
            goto label_27ccc0;
        }
    }
    ctx->pc = 0x27CC7Cu;
    // 0x27cc7c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27CC7Cu;
    {
        const bool branch_taken_0x27cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC7Cu;
        // 0x27cc80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc7c) {
            ctx->pc = 0x27CCDCu;
            goto label_27ccdc;
        }
    }
    ctx->pc = 0x27CC84u;
    // 0x27cc84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27CC84u;
    {
        const bool branch_taken_0x27cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC84u;
        // 0x27cc88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc84) {
            ctx->pc = 0x27CD28u;
            goto label_27cd28;
        }
    }
    ctx->pc = 0x27CC8Cu;
label_27cc8c:
    // 0x27cc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27cc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc94: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27cc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc98: 0xc09df56  jal         func_277D58
    ctx->pc = 0x27CC98u;
    SET_GPR_U32(ctx, 31, 0x27CCA0u);
    ctx->pc = 0x27CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC98u;
    // 0x27cc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x277D58u, 0x27CC98u, 0x27CCA0u)) {
        return;
    }
    ctx->pc = 0x27CCA0u;
label_27cca0:
    // 0x27cca0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27CCA0u;
    {
        const bool branch_taken_0x27cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCA0u;
        // 0x27cca4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cca0) {
            ctx->pc = 0x27CD24u;
            goto label_27cd24;
        }
    }
    ctx->pc = 0x27CCA8u;
label_27cca8:
    // 0x27cca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27ccacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27ccb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ccb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27CCB8u;
    {
        const bool branch_taken_0x27ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCB8u;
        // 0x27ccbc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccb8) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CCC0u;
label_27ccc0:
    // 0x27ccc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ccc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccc8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27ccc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cccc: 0xc09e1f4  jal         func_2787D0
    ctx->pc = 0x27CCCCu;
    SET_GPR_U32(ctx, 31, 0x27CCD4u);
    ctx->pc = 0x27CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCCCu;
    // 0x27ccd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2787D0u, 0x27CCCCu, 0x27CCD4u)) {
        return;
    }
    ctx->pc = 0x27CCD4u;
label_27ccd4:
    // 0x27ccd4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27CCD4u;
    {
        const bool branch_taken_0x27ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCD4u;
        // 0x27ccd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccd4) {
            ctx->pc = 0x27CD24u;
            goto label_27cd24;
        }
    }
    ctx->pc = 0x27CCDCu;
label_27ccdc:
    // 0x27ccdc: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x27CCDCu;
    SET_GPR_U32(ctx, 31, 0x27CCE4u);
    ctx->pc = 0x27CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCDCu;
    // 0x27cce0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x27CCDCu, 0x27CCE4u)) {
        return;
    }
    ctx->pc = 0x27CCE4u;
label_27cce4:
    // 0x27cce4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x27cce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27cce8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x27cce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27ccec: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x27ccecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27ccf0: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x27ccf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27ccf4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x27ccf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ccf8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x27ccf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ccfc: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x27ccfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cd00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27cd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd04: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x27cd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cd08: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd0c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cd0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27cd18:
    // 0x27cd18: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x27CD18u;
    SET_GPR_U32(ctx, 31, 0x27CD20u);
    ctx->pc = 0x278F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x278F88u, 0x27CD18u, 0x27CD20u)) {
        return;
    }
    ctx->pc = 0x27CD20u;
label_27cd20:
    // 0x27cd20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27cd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27cd24:
    // 0x27cd24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27cd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27cd28:
    // 0x27cd28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27cd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cd2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27cd2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cd30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27cd30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27cd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x27CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD38u;
        // 0x27cd3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CD40u;
}
