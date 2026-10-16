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

// Function: sub_00165D38
// Address: 0x165d38 - 0x165e48
void sub_00165D38_0x165d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165D38_0x165d38");
#endif

    switch (ctx->pc) {
        case 0x165d38u: goto label_165d38;
        case 0x165d3cu: goto label_165d3c;
        case 0x165d40u: goto label_165d40;
        case 0x165d44u: goto label_165d44;
        case 0x165d48u: goto label_165d48;
        case 0x165d4cu: goto label_165d4c;
        case 0x165d50u: goto label_165d50;
        case 0x165d54u: goto label_165d54;
        case 0x165d58u: goto label_165d58;
        case 0x165d5cu: goto label_165d5c;
        case 0x165d60u: goto label_165d60;
        case 0x165d64u: goto label_165d64;
        case 0x165d68u: goto label_165d68;
        case 0x165d6cu: goto label_165d6c;
        case 0x165d70u: goto label_165d70;
        case 0x165d74u: goto label_165d74;
        case 0x165d78u: goto label_165d78;
        case 0x165d7cu: goto label_165d7c;
        case 0x165d80u: goto label_165d80;
        case 0x165d84u: goto label_165d84;
        case 0x165d88u: goto label_165d88;
        case 0x165d8cu: goto label_165d8c;
        case 0x165d90u: goto label_165d90;
        case 0x165d94u: goto label_165d94;
        case 0x165d98u: goto label_165d98;
        case 0x165d9cu: goto label_165d9c;
        case 0x165da0u: goto label_165da0;
        case 0x165da4u: goto label_165da4;
        case 0x165da8u: goto label_165da8;
        case 0x165dacu: goto label_165dac;
        case 0x165db0u: goto label_165db0;
        case 0x165db4u: goto label_165db4;
        case 0x165db8u: goto label_165db8;
        case 0x165dbcu: goto label_165dbc;
        case 0x165dc0u: goto label_165dc0;
        case 0x165dc4u: goto label_165dc4;
        case 0x165dc8u: goto label_165dc8;
        case 0x165dccu: goto label_165dcc;
        case 0x165dd0u: goto label_165dd0;
        case 0x165dd4u: goto label_165dd4;
        case 0x165dd8u: goto label_165dd8;
        case 0x165ddcu: goto label_165ddc;
        case 0x165de0u: goto label_165de0;
        case 0x165de4u: goto label_165de4;
        case 0x165de8u: goto label_165de8;
        case 0x165decu: goto label_165dec;
        case 0x165df0u: goto label_165df0;
        case 0x165df4u: goto label_165df4;
        case 0x165df8u: goto label_165df8;
        case 0x165dfcu: goto label_165dfc;
        case 0x165e00u: goto label_165e00;
        case 0x165e04u: goto label_165e04;
        case 0x165e08u: goto label_165e08;
        case 0x165e0cu: goto label_165e0c;
        case 0x165e10u: goto label_165e10;
        case 0x165e14u: goto label_165e14;
        case 0x165e18u: goto label_165e18;
        case 0x165e1cu: goto label_165e1c;
        case 0x165e20u: goto label_165e20;
        case 0x165e24u: goto label_165e24;
        case 0x165e28u: goto label_165e28;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e30u: goto label_165e30;
        case 0x165e34u: goto label_165e34;
        case 0x165e38u: goto label_165e38;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e40u: goto label_165e40;
        case 0x165e44u: goto label_165e44;
        default: break;
    }

    ctx->pc = 0x165d38u;

label_165d38:
    // 0x165d38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_165d3c:
    // 0x165d3c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x165d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_165d40:
    // 0x165d40: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x165d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_165d44:
    // 0x165d44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x165d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_165d48:
    // 0x165d48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x165d48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165d4c:
    // 0x165d4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x165d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_165d50:
    // 0x165d50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_165d54:
    // 0x165d54: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x165d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_165d58:
    // 0x165d58: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x165d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_165d5c:
    // 0x165d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_165d60:
    // 0x165d60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x165d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_165d64:
    // 0x165d64: 0x8eb30018  lw          $s3, 0x18($s5)
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_165d68:
    // 0x165d68: 0x1260002a  beqz        $s3, . + 4 + (0x2A << 2)
label_165d6c:
    if (ctx->pc == 0x165D6Cu) {
        ctx->pc = 0x165D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D68u;
        // 0x165d6c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D70u;
        goto label_165d70;
    }
    ctx->pc = 0x165D68u;
    {
        const bool branch_taken_0x165d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D68u;
        // 0x165d6c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d68) {
            ctx->pc = 0x165E14u;
            goto label_165e14;
        }
    }
    ctx->pc = 0x165D70u;
label_165d70:
    // 0x165d70: 0x8e740024  lw          $s4, 0x24($s3)
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_165d74:
    // 0x165d74: 0x1a800027  blez        $s4, . + 4 + (0x27 << 2)
label_165d78:
    if (ctx->pc == 0x165D78u) {
        ctx->pc = 0x165D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D74u;
        // 0x165d78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D7Cu;
        goto label_165d7c;
    }
    ctx->pc = 0x165D74u;
    {
        const bool branch_taken_0x165d74 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x165D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D74u;
        // 0x165d78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d74) {
            ctx->pc = 0x165E14u;
            goto label_165e14;
        }
    }
    ctx->pc = 0x165D7Cu;
label_165d7c:
    // 0x165d7c: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_165d80:
    // 0x165d80: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x165d80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_165d84:
    // 0x165d84: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x165d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_165d88:
    // 0x165d88: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x165d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_165d8c:
    // 0x165d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165d90:
    // 0x165d90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x165d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_165d94:
    // 0x165d94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_165d98:
    // 0x165d98: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_165d9c:
    if (ctx->pc == 0x165D9Cu) {
        ctx->pc = 0x165DA0u;
        goto label_165da0;
    }
    ctx->pc = 0x165D98u;
    {
        const bool branch_taken_0x165d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d98) {
            ctx->pc = 0x165DBCu;
            goto label_165dbc;
        }
    }
    ctx->pc = 0x165DA0u;
label_165da0:
    // 0x165da0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_165da4:
    // 0x165da4: 0x40f809  jalr        $v0
label_165da8:
    if (ctx->pc == 0x165DA8u) {
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DACu;
        goto label_165dac;
    }
    ctx->pc = 0x165DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165DACu);
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DA4u, 0x165DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165DACu;
label_165dac:
    // 0x165dac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_165db0:
    if (ctx->pc == 0x165DB0u) {
        ctx->pc = 0x165DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DACu;
        // 0x165db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DB4u;
        goto label_165db4;
    }
    ctx->pc = 0x165DACu;
    {
        const bool branch_taken_0x165dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DACu;
        // 0x165db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dac) {
            ctx->pc = 0x165DBCu;
            goto label_165dbc;
        }
    }
    ctx->pc = 0x165DB4u;
label_165db4:
    // 0x165db4: 0xc095f6a  jal         func_257DA8
label_165db8:
    if (ctx->pc == 0x165DB8u) {
        ctx->pc = 0x165DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DB4u;
        // 0x165db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DBCu;
        goto label_165dbc;
    }
    ctx->pc = 0x165DB4u;
    SET_GPR_U32(ctx, 31, 0x165DBCu);
    ctx->pc = 0x165DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DB4u;
    // 0x165db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x165DB4u, 0x165DBCu)) {
        return;
    }
    ctx->pc = 0x165DBCu;
label_165dbc:
    // 0x165dbc: 0xc0a02e0  jal         func_280B80
label_165dc0:
    if (ctx->pc == 0x165DC0u) {
        ctx->pc = 0x165DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DBCu;
        // 0x165dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DC4u;
        goto label_165dc4;
    }
    ctx->pc = 0x165DBCu;
    SET_GPR_U32(ctx, 31, 0x165DC4u);
    ctx->pc = 0x165DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DBCu;
    // 0x165dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B80u, 0x165DBCu, 0x165DC4u)) {
        return;
    }
    ctx->pc = 0x165DC4u;
label_165dc4:
    // 0x165dc4: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_165dc8:
    if (ctx->pc == 0x165DC8u) {
        ctx->pc = 0x165DCCu;
        goto label_165dcc;
    }
    ctx->pc = 0x165DC4u;
    {
        const bool branch_taken_0x165dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x165dc4) {
            ctx->pc = 0x165DD4u;
            goto label_165dd4;
        }
    }
    ctx->pc = 0x165DCCu;
label_165dcc:
    // 0x165dcc: 0x5456000e  bnel        $v0, $s6, . + 4 + (0xE << 2)
label_165dd0:
    if (ctx->pc == 0x165DD0u) {
        ctx->pc = 0x165DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DCCu;
        // 0x165dd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DD4u;
        goto label_165dd4;
    }
    ctx->pc = 0x165DCCu;
    {
        const bool branch_taken_0x165dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x165dcc) {
            ctx->pc = 0x165DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DCCu;
            // 0x165dd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E08u;
            goto label_165e08;
        }
    }
    ctx->pc = 0x165DD4u;
label_165dd4:
    // 0x165dd4: 0xc0a0446  jal         func_281118
label_165dd8:
    if (ctx->pc == 0x165DD8u) {
        ctx->pc = 0x165DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DD4u;
        // 0x165dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DDCu;
        goto label_165ddc;
    }
    ctx->pc = 0x165DD4u;
    SET_GPR_U32(ctx, 31, 0x165DDCu);
    ctx->pc = 0x165DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DD4u;
    // 0x165dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281118u, 0x165DD4u, 0x165DDCu)) {
        return;
    }
    ctx->pc = 0x165DDCu;
label_165ddc:
    // 0x165ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165de0:
    // 0x165de0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_165de4:
    if (ctx->pc == 0x165DE4u) {
        ctx->pc = 0x165DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DE0u;
        // 0x165de4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DE8u;
        goto label_165de8;
    }
    ctx->pc = 0x165DE0u;
    {
        const bool branch_taken_0x165de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165de0) {
            ctx->pc = 0x165DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DE0u;
            // 0x165de4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E08u;
            goto label_165e08;
        }
    }
    ctx->pc = 0x165DE8u;
label_165de8:
    // 0x165de8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_165dec:
    // 0x165dec: 0x40f809  jalr        $v0
label_165df0:
    if (ctx->pc == 0x165DF0u) {
        ctx->pc = 0x165DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DECu;
        // 0x165df0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DF4u;
        goto label_165df4;
    }
    ctx->pc = 0x165DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165DF4u);
        ctx->pc = 0x165DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DECu;
        // 0x165df0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DECu, 0x165DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165DF4u;
label_165df4:
    // 0x165df4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_165df8:
    if (ctx->pc == 0x165DF8u) {
        ctx->pc = 0x165DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DF4u;
        // 0x165df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DFCu;
        goto label_165dfc;
    }
    ctx->pc = 0x165DF4u;
    {
        const bool branch_taken_0x165df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DF4u;
        // 0x165df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165df4) {
            ctx->pc = 0x165E04u;
            goto label_165e04;
        }
    }
    ctx->pc = 0x165DFCu;
label_165dfc:
    // 0x165dfc: 0xc0a03ee  jal         func_280FB8
label_165e00:
    if (ctx->pc == 0x165E00u) {
        ctx->pc = 0x165E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DFCu;
        // 0x165e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E04u;
        goto label_165e04;
    }
    ctx->pc = 0x165DFCu;
    SET_GPR_U32(ctx, 31, 0x165E04u);
    ctx->pc = 0x165E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DFCu;
    // 0x165e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280FB8u, 0x165DFCu, 0x165E04u)) {
        return;
    }
    ctx->pc = 0x165E04u;
label_165e04:
    // 0x165e04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165e08:
    // 0x165e08: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x165e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_165e0c:
    // 0x165e0c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_165e10:
    if (ctx->pc == 0x165E10u) {
        ctx->pc = 0x165E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E0Cu;
        // 0x165e10: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E14u;
        goto label_165e14;
    }
    ctx->pc = 0x165E0Cu;
    {
        const bool branch_taken_0x165e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e0c) {
            ctx->pc = 0x165E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E0Cu;
            // 0x165e10: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d88;
        }
    }
    ctx->pc = 0x165E14u;
label_165e14:
    // 0x165e14: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x165e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165e18:
    // 0x165e18: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x165e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_165e1c:
    // 0x165e1c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x165e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_165e20:
    // 0x165e20: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x165e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165e24:
    // 0x165e24: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x165e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165e28:
    // 0x165e28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165e28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165e2c:
    // 0x165e2c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x165e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165e30:
    // 0x165e30: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x165e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165e34:
    // 0x165e34: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x165e34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165e38:
    // 0x165e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165e3c:
    // 0x165e3c: 0x3e00008  jr          $ra
label_165e40:
    if (ctx->pc == 0x165E40u) {
        ctx->pc = 0x165E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E3Cu;
        // 0x165e40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E44u;
        goto label_165e44;
    }
    ctx->pc = 0x165E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E3Cu;
        // 0x165e40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E44u;
label_165e44:
    // 0x165e44: 0x0  nop
    ctx->pc = 0x165e44u;
    // NOP
    ctx->pc = 0x165e48u;
}
