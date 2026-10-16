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

// Function: sub_00196C70
// Address: 0x196c70 - 0x196d70
void sub_00196C70_0x196c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196C70_0x196c70");
#endif

    switch (ctx->pc) {
        case 0x196c70u: goto label_196c70;
        case 0x196c74u: goto label_196c74;
        case 0x196c78u: goto label_196c78;
        case 0x196c7cu: goto label_196c7c;
        case 0x196c80u: goto label_196c80;
        case 0x196c84u: goto label_196c84;
        case 0x196c88u: goto label_196c88;
        case 0x196c8cu: goto label_196c8c;
        case 0x196c90u: goto label_196c90;
        case 0x196c94u: goto label_196c94;
        case 0x196c98u: goto label_196c98;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196ca4u: goto label_196ca4;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cacu: goto label_196cac;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cb8u: goto label_196cb8;
        case 0x196cbcu: goto label_196cbc;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cccu: goto label_196ccc;
        case 0x196cd0u: goto label_196cd0;
        case 0x196cd4u: goto label_196cd4;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cdcu: goto label_196cdc;
        case 0x196ce0u: goto label_196ce0;
        case 0x196ce4u: goto label_196ce4;
        case 0x196ce8u: goto label_196ce8;
        case 0x196cecu: goto label_196cec;
        case 0x196cf0u: goto label_196cf0;
        case 0x196cf4u: goto label_196cf4;
        case 0x196cf8u: goto label_196cf8;
        case 0x196cfcu: goto label_196cfc;
        case 0x196d00u: goto label_196d00;
        case 0x196d04u: goto label_196d04;
        case 0x196d08u: goto label_196d08;
        case 0x196d0cu: goto label_196d0c;
        case 0x196d10u: goto label_196d10;
        case 0x196d14u: goto label_196d14;
        case 0x196d18u: goto label_196d18;
        case 0x196d1cu: goto label_196d1c;
        case 0x196d20u: goto label_196d20;
        case 0x196d24u: goto label_196d24;
        case 0x196d28u: goto label_196d28;
        case 0x196d2cu: goto label_196d2c;
        case 0x196d30u: goto label_196d30;
        case 0x196d34u: goto label_196d34;
        case 0x196d38u: goto label_196d38;
        case 0x196d3cu: goto label_196d3c;
        case 0x196d40u: goto label_196d40;
        case 0x196d44u: goto label_196d44;
        case 0x196d48u: goto label_196d48;
        case 0x196d4cu: goto label_196d4c;
        case 0x196d50u: goto label_196d50;
        case 0x196d54u: goto label_196d54;
        case 0x196d58u: goto label_196d58;
        case 0x196d5cu: goto label_196d5c;
        case 0x196d60u: goto label_196d60;
        case 0x196d64u: goto label_196d64;
        case 0x196d68u: goto label_196d68;
        case 0x196d6cu: goto label_196d6c;
        default: break;
    }

    ctx->pc = 0x196c70u;

label_196c70:
    // 0x196c70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x196c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_196c74:
    // 0x196c74: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x196c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_196c78:
    // 0x196c78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x196c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_196c7c:
    // 0x196c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196c80:
    // 0x196c80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x196c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_196c84:
    // 0x196c84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x196c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196c88:
    // 0x196c88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x196c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_196c8c:
    // 0x196c8c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x196c8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196c90:
    // 0x196c90: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x196c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_196c94:
    // 0x196c94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x196c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_196c98:
    // 0x196c98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x196c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_196c9c:
    // 0x196c9c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x196c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_196ca0:
    // 0x196ca0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x196ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_196ca4:
    // 0x196ca4: 0x12c00024  beqz        $s6, . + 4 + (0x24 << 2)
label_196ca8:
    if (ctx->pc == 0x196CA8u) {
        ctx->pc = 0x196CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CA4u;
        // 0x196ca8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CACu;
        goto label_196cac;
    }
    ctx->pc = 0x196CA4u;
    {
        const bool branch_taken_0x196ca4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CA4u;
        // 0x196ca8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ca4) {
            ctx->pc = 0x196D38u;
            goto label_196d38;
        }
    }
    ctx->pc = 0x196CACu;
label_196cac:
    // 0x196cac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_196cb0:
    // 0x196cb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196cb4:
    // 0x196cb4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196cb8:
    // 0x196cb8: 0x24579b58  addiu       $s7, $v0, -0x64A8
    ctx->pc = 0x196cb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941528));
label_196cbc:
    // 0x196cbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x196cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196cc0:
    // 0x196cc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_196cc4:
    if (ctx->pc == 0x196CC4u) {
        ctx->pc = 0x196CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC0u;
        // 0x196cc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CC8u;
        goto label_196cc8;
    }
    ctx->pc = 0x196CC0u;
    {
        const bool branch_taken_0x196cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC0u;
        // 0x196cc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cc0) {
            ctx->pc = 0x196D18u;
            goto label_196d18;
        }
    }
    ctx->pc = 0x196CC8u;
label_196cc8:
    // 0x196cc8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x196cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_196ccc:
    // 0x196ccc: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x196cccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_196cd0:
    // 0x196cd0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_196cd4:
    // 0x196cd4: 0x0  nop
    ctx->pc = 0x196cd4u;
    // NOP
label_196cd8:
    // 0x196cd8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_196cdc:
    // 0x196cdc: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_196ce0:
    // 0x196ce0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_196ce4:
    // 0x196ce4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x196ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_196ce8:
    // 0x196ce8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196cec:
    // 0x196cec: 0x40f809  jalr        $v0
label_196cf0:
    if (ctx->pc == 0x196CF0u) {
        ctx->pc = 0x196CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CECu;
        // 0x196cf0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CF4u;
        goto label_196cf4;
    }
    ctx->pc = 0x196CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196CF4u);
        ctx->pc = 0x196CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CECu;
        // 0x196cf0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196CECu, 0x196CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196CF4u;
label_196cf4:
    // 0x196cf4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_196cf8:
    if (ctx->pc == 0x196CF8u) {
        ctx->pc = 0x196CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CF4u;
        // 0x196cf8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CFCu;
        goto label_196cfc;
    }
    ctx->pc = 0x196CF4u;
    {
        const bool branch_taken_0x196cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196cf4) {
            ctx->pc = 0x196CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196CF4u;
            // 0x196cf8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D08u;
            goto label_196d08;
        }
    }
    ctx->pc = 0x196CFCu;
label_196cfc:
    // 0x196cfc: 0x1274000c  beq         $s3, $s4, . + 4 + (0xC << 2)
label_196d00:
    if (ctx->pc == 0x196D00u) {
        ctx->pc = 0x196D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CFCu;
        // 0x196d00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D04u;
        goto label_196d04;
    }
    ctx->pc = 0x196CFCu;
    {
        const bool branch_taken_0x196cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x196D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CFCu;
        // 0x196d00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cfc) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196D04u;
label_196d04:
    // 0x196d04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196d08:
    // 0x196d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_196d0c:
    // 0x196d0c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x196d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196d10:
    // 0x196d10: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_196d14:
    if (ctx->pc == 0x196D14u) {
        ctx->pc = 0x196D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D10u;
        // 0x196d14: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D18u;
        goto label_196d18;
    }
    ctx->pc = 0x196D10u;
    {
        const bool branch_taken_0x196d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196d10) {
            ctx->pc = 0x196D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196D10u;
            // 0x196d14: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196cd8;
        }
    }
    ctx->pc = 0x196D18u;
label_196d18:
    // 0x196d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d1c:
    // 0x196d1c: 0x27c59b58  addiu       $a1, $fp, -0x64A8
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941528));
label_196d20:
    // 0x196d20: 0xc08038e  jal         func_200E38
label_196d24:
    if (ctx->pc == 0x196D24u) {
        ctx->pc = 0x196D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D20u;
        // 0x196d24: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D28u;
        goto label_196d28;
    }
    ctx->pc = 0x196D20u;
    SET_GPR_U32(ctx, 31, 0x196D28u);
    ctx->pc = 0x196D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D20u;
    // 0x196d24: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200E38u, 0x196D20u, 0x196D28u)) {
        return;
    }
    ctx->pc = 0x196D28u;
label_196d28:
    // 0x196d28: 0x10000005  b           . + 4 + (0x5 << 2)
label_196d2c:
    if (ctx->pc == 0x196D2Cu) {
        ctx->pc = 0x196D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D28u;
        // 0x196d2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D30u;
        goto label_196d30;
    }
    ctx->pc = 0x196D28u;
    {
        const bool branch_taken_0x196d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D28u;
        // 0x196d2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d28) {
            ctx->pc = 0x196D40u;
            goto label_196d40;
        }
    }
    ctx->pc = 0x196D30u;
label_196d30:
    // 0x196d30: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_196d34:
    if (ctx->pc == 0x196D34u) {
        ctx->pc = 0x196D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D30u;
        // 0x196d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D38u;
        goto label_196d38;
    }
    ctx->pc = 0x196D30u;
    {
        const bool branch_taken_0x196d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D30u;
        // 0x196d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d30) {
            ctx->pc = 0x196D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196d1c;
        }
    }
    ctx->pc = 0x196D38u;
label_196d38:
    // 0x196d38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d3c:
    // 0x196d3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x196d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_196d40:
    // 0x196d40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x196d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196d44:
    // 0x196d44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x196d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196d48:
    // 0x196d48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x196d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196d4c:
    // 0x196d4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x196d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196d50:
    // 0x196d50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x196d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196d54:
    // 0x196d54: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x196d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196d58:
    // 0x196d58: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x196d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196d5c:
    // 0x196d5c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x196d5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196d60:
    // 0x196d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196d64:
    // 0x196d64: 0x3e00008  jr          $ra
label_196d68:
    if (ctx->pc == 0x196D68u) {
        ctx->pc = 0x196D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D64u;
        // 0x196d68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D6Cu;
        goto label_196d6c;
    }
    ctx->pc = 0x196D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D64u;
        // 0x196d68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196D6Cu;
label_196d6c:
    // 0x196d6c: 0x0  nop
    ctx->pc = 0x196d6cu;
    // NOP
    ctx->pc = 0x196d70u;
}
