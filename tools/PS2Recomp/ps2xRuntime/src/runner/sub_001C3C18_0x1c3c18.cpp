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

// Function: sub_001C3C18
// Address: 0x1c3c18 - 0x1c3cd0
void sub_001C3C18_0x1c3c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3C18_0x1c3c18");
#endif

    switch (ctx->pc) {
        case 0x1c3c18u: goto label_1c3c18;
        case 0x1c3c1cu: goto label_1c3c1c;
        case 0x1c3c20u: goto label_1c3c20;
        case 0x1c3c24u: goto label_1c3c24;
        case 0x1c3c28u: goto label_1c3c28;
        case 0x1c3c2cu: goto label_1c3c2c;
        case 0x1c3c30u: goto label_1c3c30;
        case 0x1c3c34u: goto label_1c3c34;
        case 0x1c3c38u: goto label_1c3c38;
        case 0x1c3c3cu: goto label_1c3c3c;
        case 0x1c3c40u: goto label_1c3c40;
        case 0x1c3c44u: goto label_1c3c44;
        case 0x1c3c48u: goto label_1c3c48;
        case 0x1c3c4cu: goto label_1c3c4c;
        case 0x1c3c50u: goto label_1c3c50;
        case 0x1c3c54u: goto label_1c3c54;
        case 0x1c3c58u: goto label_1c3c58;
        case 0x1c3c5cu: goto label_1c3c5c;
        case 0x1c3c60u: goto label_1c3c60;
        case 0x1c3c64u: goto label_1c3c64;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c6cu: goto label_1c3c6c;
        case 0x1c3c70u: goto label_1c3c70;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c78u: goto label_1c3c78;
        case 0x1c3c7cu: goto label_1c3c7c;
        case 0x1c3c80u: goto label_1c3c80;
        case 0x1c3c84u: goto label_1c3c84;
        case 0x1c3c88u: goto label_1c3c88;
        case 0x1c3c8cu: goto label_1c3c8c;
        case 0x1c3c90u: goto label_1c3c90;
        case 0x1c3c94u: goto label_1c3c94;
        case 0x1c3c98u: goto label_1c3c98;
        case 0x1c3c9cu: goto label_1c3c9c;
        case 0x1c3ca0u: goto label_1c3ca0;
        case 0x1c3ca4u: goto label_1c3ca4;
        case 0x1c3ca8u: goto label_1c3ca8;
        case 0x1c3cacu: goto label_1c3cac;
        case 0x1c3cb0u: goto label_1c3cb0;
        case 0x1c3cb4u: goto label_1c3cb4;
        case 0x1c3cb8u: goto label_1c3cb8;
        case 0x1c3cbcu: goto label_1c3cbc;
        case 0x1c3cc0u: goto label_1c3cc0;
        case 0x1c3cc4u: goto label_1c3cc4;
        case 0x1c3cc8u: goto label_1c3cc8;
        case 0x1c3cccu: goto label_1c3ccc;
        default: break;
    }

    ctx->pc = 0x1c3c18u;

label_1c3c18:
    // 0x1c3c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c3c1c:
    // 0x1c3c1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c3c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c3c20:
    // 0x1c3c20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c3c24:
    // 0x1c3c24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3c28:
    // 0x1c3c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c3c2c:
    // 0x1c3c2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c3c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c3c30:
    // 0x1c3c30: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1c3c34:
    // 0x1c3c34: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_1c3c38:
    if (ctx->pc == 0x1C3C38u) {
        ctx->pc = 0x1C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C34u;
        // 0x1c3c38: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C3Cu;
        goto label_1c3c3c;
    }
    ctx->pc = 0x1C3C34u;
    {
        const bool branch_taken_0x1c3c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C34u;
        // 0x1c3c38: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c34) {
            ctx->pc = 0x1C3C90u;
            goto label_1c3c90;
        }
    }
    ctx->pc = 0x1C3C3Cu;
label_1c3c3c:
    // 0x1c3c3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3c40:
    // 0x1c3c40: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c3c44:
    // 0x1c3c44: 0x0  nop
    ctx->pc = 0x1c3c44u;
    // NOP
label_1c3c48:
    // 0x1c3c48: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_1c3c4c:
    if (ctx->pc == 0x1C3C4Cu) {
        ctx->pc = 0x1C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C48u;
        // 0x1c3c4c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C50u;
        goto label_1c3c50;
    }
    ctx->pc = 0x1C3C48u;
    {
        const bool branch_taken_0x1c3c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c48) {
            ctx->pc = 0x1C3C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C48u;
            // 0x1c3c4c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C50u;
label_1c3c50:
    // 0x1c3c50: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1c3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1c3c54:
    // 0x1c3c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c3c58:
    if (ctx->pc == 0x1C3C58u) {
        ctx->pc = 0x1C3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C54u;
        // 0x1c3c58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C5Cu;
        goto label_1c3c5c;
    }
    ctx->pc = 0x1C3C54u;
    {
        const bool branch_taken_0x1c3c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C54u;
        // 0x1c3c58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c54) {
            ctx->pc = 0x1C3C68u;
            goto label_1c3c68;
        }
    }
    ctx->pc = 0x1C3C5Cu;
label_1c3c5c:
    // 0x1c3c5c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1c3c60:
    // 0x1c3c60: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1c3c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3c64:
    // 0x1c3c64: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c3c64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_1c3c68:
    // 0x1c3c68: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_1c3c6c:
    if (ctx->pc == 0x1C3C6Cu) {
        ctx->pc = 0x1C3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C68u;
        // 0x1c3c6c: 0xae250260  sw          $a1, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C70u;
        goto label_1c3c70;
    }
    ctx->pc = 0x1C3C68u;
    {
        const bool branch_taken_0x1c3c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c68) {
            ctx->pc = 0x1C3C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C68u;
            // 0x1c3c6c: 0xae250260  sw          $a1, 0x260($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C70u;
            goto label_1c3c70;
        }
    }
    ctx->pc = 0x1C3C70u;
label_1c3c70:
    // 0x1c3c70: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1c3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1c3c74:
    // 0x1c3c74: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c3c78:
    // 0x1c3c78: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c3c7c:
    // 0x1c3c7c: 0x60f809  jalr        $v1
label_1c3c80:
    if (ctx->pc == 0x1C3C80u) {
        ctx->pc = 0x1C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C7Cu;
        // 0x1c3c80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C84u;
        goto label_1c3c84;
    }
    ctx->pc = 0x1C3C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3C84u);
        ctx->pc = 0x1C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C7Cu;
        // 0x1c3c80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C7Cu, 0x1C3C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3C84u;
label_1c3c84:
    // 0x1c3c84: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c3c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c3c88:
    // 0x1c3c88: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_1c3c8c:
    if (ctx->pc == 0x1C3C8Cu) {
        ctx->pc = 0x1C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C88u;
        // 0x1c3c8c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3C90u;
        goto label_1c3c90;
    }
    ctx->pc = 0x1C3C88u;
    {
        const bool branch_taken_0x1c3c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c88) {
            ctx->pc = 0x1C3C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C88u;
            // 0x1c3c8c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c48;
        }
    }
    ctx->pc = 0x1C3C90u;
label_1c3c90:
    // 0x1c3c90: 0xc0603e4  jal         func_180F90
label_1c3c94:
    if (ctx->pc == 0x1C3C94u) {
        ctx->pc = 0x1C3C98u;
        goto label_1c3c98;
    }
    ctx->pc = 0x1C3C90u;
    SET_GPR_U32(ctx, 31, 0x1C3C98u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1C3C90u, 0x1C3C98u)) {
        return;
    }
    ctx->pc = 0x1C3C98u;
label_1c3c98:
    // 0x1c3c98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c3c9c:
    if (ctx->pc == 0x1C3C9Cu) {
        ctx->pc = 0x1C3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C98u;
        // 0x1c3c9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CA0u;
        goto label_1c3ca0;
    }
    ctx->pc = 0x1C3C98u;
    {
        const bool branch_taken_0x1c3c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C98u;
        // 0x1c3c9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c98) {
            ctx->pc = 0x1C3CBCu;
            goto label_1c3cbc;
        }
    }
    ctx->pc = 0x1C3CA0u;
label_1c3ca0:
    // 0x1c3ca0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1c3ca4:
    // 0x1c3ca4: 0x8c430244  lw          $v1, 0x244($v0)
    ctx->pc = 0x1c3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_1c3ca8:
    // 0x1c3ca8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1c3cac:
    if (ctx->pc == 0x1C3CACu) {
        ctx->pc = 0x1C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CA8u;
        // 0x1c3cac: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CB0u;
        goto label_1c3cb0;
    }
    ctx->pc = 0x1C3CA8u;
    {
        const bool branch_taken_0x1c3ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CA8u;
        // 0x1c3cac: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ca8) {
            ctx->pc = 0x1C3CC0u;
            goto label_1c3cc0;
        }
    }
    ctx->pc = 0x1C3CB0u;
label_1c3cb0:
    // 0x1c3cb0: 0xc0603ce  jal         func_180F38
label_1c3cb4:
    if (ctx->pc == 0x1C3CB4u) {
        ctx->pc = 0x1C3CB8u;
        goto label_1c3cb8;
    }
    ctx->pc = 0x1C3CB0u;
    SET_GPR_U32(ctx, 31, 0x1C3CB8u);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x1C3CB0u, 0x1C3CB8u)) {
        return;
    }
    ctx->pc = 0x1C3CB8u;
label_1c3cb8:
    // 0x1c3cb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c3cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3cbc:
    // 0x1c3cbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3cc0:
    // 0x1c3cc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c3cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3cc4:
    // 0x1c3cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3cc8:
    // 0x1c3cc8: 0x3e00008  jr          $ra
label_1c3ccc:
    if (ctx->pc == 0x1C3CCCu) {
        ctx->pc = 0x1C3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CC8u;
        // 0x1c3ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CD0u;
        goto label_fallthrough_0x1c3cc8;
    }
    ctx->pc = 0x1C3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CC8u;
        // 0x1c3ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3cc8:
    ctx->pc = 0x1C3CD0u;
}
