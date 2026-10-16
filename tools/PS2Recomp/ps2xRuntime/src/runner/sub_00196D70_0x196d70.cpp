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

// Function: sub_00196D70
// Address: 0x196d70 - 0x196e60
void sub_00196D70_0x196d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196D70_0x196d70");
#endif

    switch (ctx->pc) {
        case 0x196d70u: goto label_196d70;
        case 0x196d74u: goto label_196d74;
        case 0x196d78u: goto label_196d78;
        case 0x196d7cu: goto label_196d7c;
        case 0x196d80u: goto label_196d80;
        case 0x196d84u: goto label_196d84;
        case 0x196d88u: goto label_196d88;
        case 0x196d8cu: goto label_196d8c;
        case 0x196d90u: goto label_196d90;
        case 0x196d94u: goto label_196d94;
        case 0x196d98u: goto label_196d98;
        case 0x196d9cu: goto label_196d9c;
        case 0x196da0u: goto label_196da0;
        case 0x196da4u: goto label_196da4;
        case 0x196da8u: goto label_196da8;
        case 0x196dacu: goto label_196dac;
        case 0x196db0u: goto label_196db0;
        case 0x196db4u: goto label_196db4;
        case 0x196db8u: goto label_196db8;
        case 0x196dbcu: goto label_196dbc;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dc4u: goto label_196dc4;
        case 0x196dc8u: goto label_196dc8;
        case 0x196dccu: goto label_196dcc;
        case 0x196dd0u: goto label_196dd0;
        case 0x196dd4u: goto label_196dd4;
        case 0x196dd8u: goto label_196dd8;
        case 0x196ddcu: goto label_196ddc;
        case 0x196de0u: goto label_196de0;
        case 0x196de4u: goto label_196de4;
        case 0x196de8u: goto label_196de8;
        case 0x196decu: goto label_196dec;
        case 0x196df0u: goto label_196df0;
        case 0x196df4u: goto label_196df4;
        case 0x196df8u: goto label_196df8;
        case 0x196dfcu: goto label_196dfc;
        case 0x196e00u: goto label_196e00;
        case 0x196e04u: goto label_196e04;
        case 0x196e08u: goto label_196e08;
        case 0x196e0cu: goto label_196e0c;
        case 0x196e10u: goto label_196e10;
        case 0x196e14u: goto label_196e14;
        case 0x196e18u: goto label_196e18;
        case 0x196e1cu: goto label_196e1c;
        case 0x196e20u: goto label_196e20;
        case 0x196e24u: goto label_196e24;
        case 0x196e28u: goto label_196e28;
        case 0x196e2cu: goto label_196e2c;
        case 0x196e30u: goto label_196e30;
        case 0x196e34u: goto label_196e34;
        case 0x196e38u: goto label_196e38;
        case 0x196e3cu: goto label_196e3c;
        case 0x196e40u: goto label_196e40;
        case 0x196e44u: goto label_196e44;
        case 0x196e48u: goto label_196e48;
        case 0x196e4cu: goto label_196e4c;
        case 0x196e50u: goto label_196e50;
        case 0x196e54u: goto label_196e54;
        case 0x196e58u: goto label_196e58;
        case 0x196e5cu: goto label_196e5c;
        default: break;
    }

    ctx->pc = 0x196d70u;

label_196d70:
    // 0x196d70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x196d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_196d74:
    // 0x196d74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x196d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_196d78:
    // 0x196d78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x196d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_196d7c:
    // 0x196d7c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x196d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_196d80:
    // 0x196d80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x196d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d84:
    // 0x196d84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x196d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_196d88:
    // 0x196d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196d8c:
    // 0x196d8c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x196d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_196d90:
    // 0x196d90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d94:
    // 0x196d94: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x196d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_196d98:
    // 0x196d98: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x196d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196d9c:
    // 0x196d9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x196d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_196da0:
    // 0x196da0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x196da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_196da4:
    // 0x196da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196da8:
    // 0x196da8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196dac:
    // 0x196dac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_196db0:
    if (ctx->pc == 0x196DB0u) {
        ctx->pc = 0x196DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DACu;
        // 0x196db0: 0x24569b68  addiu       $s6, $v0, -0x6498 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DB4u;
        goto label_196db4;
    }
    ctx->pc = 0x196DACu;
    {
        const bool branch_taken_0x196dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DACu;
        // 0x196db0: 0x24569b68  addiu       $s6, $v0, -0x6498 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dac) {
            ctx->pc = 0x196E00u;
            goto label_196e00;
        }
    }
    ctx->pc = 0x196DB4u;
label_196db4:
    // 0x196db4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x196db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_196db8:
    // 0x196db8: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x196db8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_196dbc:
    // 0x196dbc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_196dc0:
    // 0x196dc0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x196dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_196dc4:
    // 0x196dc4: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_196dc8:
    // 0x196dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x196dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_196dcc:
    // 0x196dcc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x196dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_196dd0:
    // 0x196dd0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196dd4:
    // 0x196dd4: 0x40f809  jalr        $v0
label_196dd8:
    if (ctx->pc == 0x196DD8u) {
        ctx->pc = 0x196DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD4u;
        // 0x196dd8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DDCu;
        goto label_196ddc;
    }
    ctx->pc = 0x196DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196DDCu);
        ctx->pc = 0x196DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD4u;
        // 0x196dd8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196DD4u, 0x196DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196DDCu;
label_196ddc:
    // 0x196ddc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_196de0:
    if (ctx->pc == 0x196DE0u) {
        ctx->pc = 0x196DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DDCu;
        // 0x196de0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DE4u;
        goto label_196de4;
    }
    ctx->pc = 0x196DDCu;
    {
        const bool branch_taken_0x196ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ddc) {
            ctx->pc = 0x196DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196DDCu;
            // 0x196de0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196DF0u;
            goto label_196df0;
        }
    }
    ctx->pc = 0x196DE4u;
label_196de4:
    // 0x196de4: 0x1274000b  beq         $s3, $s4, . + 4 + (0xB << 2)
label_196de8:
    if (ctx->pc == 0x196DE8u) {
        ctx->pc = 0x196DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE4u;
        // 0x196de8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DECu;
        goto label_196dec;
    }
    ctx->pc = 0x196DE4u;
    {
        const bool branch_taken_0x196de4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x196DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE4u;
        // 0x196de8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196de4) {
            ctx->pc = 0x196E14u;
            goto label_196e14;
        }
    }
    ctx->pc = 0x196DECu;
label_196dec:
    // 0x196dec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196df0:
    // 0x196df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_196df4:
    // 0x196df4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x196df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196df8:
    // 0x196df8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_196dfc:
    if (ctx->pc == 0x196DFCu) {
        ctx->pc = 0x196DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF8u;
        // 0x196dfc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E00u;
        goto label_196e00;
    }
    ctx->pc = 0x196DF8u;
    {
        const bool branch_taken_0x196df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196df8) {
            ctx->pc = 0x196DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196DF8u;
            // 0x196dfc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196dc0;
        }
    }
    ctx->pc = 0x196E00u;
label_196e00:
    // 0x196e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196e04:
    // 0x196e04: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
label_196e08:
    if (ctx->pc == 0x196E08u) {
        ctx->pc = 0x196E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E04u;
        // 0x196e08: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E0Cu;
        goto label_196e0c;
    }
    ctx->pc = 0x196E04u;
    {
        const bool branch_taken_0x196e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x196e04) {
            ctx->pc = 0x196E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196E04u;
            // 0x196e08: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196E1Cu;
            goto label_196e1c;
        }
    }
    ctx->pc = 0x196E0Cu;
label_196e0c:
    // 0x196e0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_196e10:
    if (ctx->pc == 0x196E10u) {
        ctx->pc = 0x196E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E0Cu;
        // 0x196e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E14u;
        goto label_196e14;
    }
    ctx->pc = 0x196E0Cu;
    {
        const bool branch_taken_0x196e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E0Cu;
        // 0x196e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e0c) {
            ctx->pc = 0x196E1Cu;
            goto label_196e1c;
        }
    }
    ctx->pc = 0x196E14u;
label_196e14:
    // 0x196e14: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_196e18:
    if (ctx->pc == 0x196E18u) {
        ctx->pc = 0x196E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E14u;
        // 0x196e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E1Cu;
        goto label_196e1c;
    }
    ctx->pc = 0x196E14u;
    {
        const bool branch_taken_0x196e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E14u;
        // 0x196e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e14) {
            ctx->pc = 0x196E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196e04;
        }
    }
    ctx->pc = 0x196E1Cu;
label_196e1c:
    // 0x196e1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x196e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196e20:
    // 0x196e20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x196e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196e24:
    // 0x196e24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x196e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196e28:
    // 0x196e28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x196e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196e2c:
    // 0x196e2c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x196e2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196e30:
    // 0x196e30: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x196e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196e34:
    // 0x196e34: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x196e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196e38:
    // 0x196e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196e3c:
    // 0x196e3c: 0x3e00008  jr          $ra
label_196e40:
    if (ctx->pc == 0x196E40u) {
        ctx->pc = 0x196E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E3Cu;
        // 0x196e40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E44u;
        goto label_196e44;
    }
    ctx->pc = 0x196E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E3Cu;
        // 0x196e40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196E44u;
label_196e44:
    // 0x196e44: 0x0  nop
    ctx->pc = 0x196e44u;
    // NOP
label_196e48:
    // 0x196e48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_196e4c:
    // 0x196e4c: 0x0  nop
    ctx->pc = 0x196e4cu;
    // NOP
label_196e50:
    // 0x196e50: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_196e54:
    // 0x196e54: 0x0  nop
    ctx->pc = 0x196e54u;
    // NOP
label_196e58:
    // 0x196e58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_196e5c:
    // 0x196e5c: 0x0  nop
    ctx->pc = 0x196e5cu;
    // NOP
    ctx->pc = 0x196e60u;
}
