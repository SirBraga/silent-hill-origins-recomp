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

// Function: sub_00226C40
// Address: 0x226c40 - 0x226d30
void sub_00226C40_0x226c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226C40_0x226c40");
#endif

    switch (ctx->pc) {
        case 0x226c40u: goto label_226c40;
        case 0x226c44u: goto label_226c44;
        case 0x226c48u: goto label_226c48;
        case 0x226c4cu: goto label_226c4c;
        case 0x226c50u: goto label_226c50;
        case 0x226c54u: goto label_226c54;
        case 0x226c58u: goto label_226c58;
        case 0x226c5cu: goto label_226c5c;
        case 0x226c60u: goto label_226c60;
        case 0x226c64u: goto label_226c64;
        case 0x226c68u: goto label_226c68;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c70u: goto label_226c70;
        case 0x226c74u: goto label_226c74;
        case 0x226c78u: goto label_226c78;
        case 0x226c7cu: goto label_226c7c;
        case 0x226c80u: goto label_226c80;
        case 0x226c84u: goto label_226c84;
        case 0x226c88u: goto label_226c88;
        case 0x226c8cu: goto label_226c8c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226c98u: goto label_226c98;
        case 0x226c9cu: goto label_226c9c;
        case 0x226ca0u: goto label_226ca0;
        case 0x226ca4u: goto label_226ca4;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cacu: goto label_226cac;
        case 0x226cb0u: goto label_226cb0;
        case 0x226cb4u: goto label_226cb4;
        case 0x226cb8u: goto label_226cb8;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cc4u: goto label_226cc4;
        case 0x226cc8u: goto label_226cc8;
        case 0x226cccu: goto label_226ccc;
        case 0x226cd0u: goto label_226cd0;
        case 0x226cd4u: goto label_226cd4;
        case 0x226cd8u: goto label_226cd8;
        case 0x226cdcu: goto label_226cdc;
        case 0x226ce0u: goto label_226ce0;
        case 0x226ce4u: goto label_226ce4;
        case 0x226ce8u: goto label_226ce8;
        case 0x226cecu: goto label_226cec;
        case 0x226cf0u: goto label_226cf0;
        case 0x226cf4u: goto label_226cf4;
        case 0x226cf8u: goto label_226cf8;
        case 0x226cfcu: goto label_226cfc;
        case 0x226d00u: goto label_226d00;
        case 0x226d04u: goto label_226d04;
        case 0x226d08u: goto label_226d08;
        case 0x226d0cu: goto label_226d0c;
        case 0x226d10u: goto label_226d10;
        case 0x226d14u: goto label_226d14;
        case 0x226d18u: goto label_226d18;
        case 0x226d1cu: goto label_226d1c;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d28u: goto label_226d28;
        case 0x226d2cu: goto label_226d2c;
        default: break;
    }

    ctx->pc = 0x226c40u;

label_226c40:
    // 0x226c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_226c44:
    // 0x226c44: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x226c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_226c48:
    // 0x226c48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226c4c:
    // 0x226c4c: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226c50:
    // 0x226c50: 0x24450fc8  addiu       $a1, $v0, 0xFC8
    ctx->pc = 0x226c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_226c54:
    // 0x226c54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_226c58:
    // 0x226c58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_226c5c:
    // 0x226c5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x226c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_226c60:
    // 0x226c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226c64:
    // 0x226c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x226c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226c68:
    // 0x226c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226c6c:
    // 0x226c6c: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_226c70:
    // 0x226c70: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x226c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_226c74:
    // 0x226c74: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_226c78:
    if (ctx->pc == 0x226C78u) {
        ctx->pc = 0x226C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C74u;
        // 0x226c78: 0x8f838e20  lw          $v1, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C7Cu;
        goto label_226c7c;
    }
    ctx->pc = 0x226C74u;
    {
        const bool branch_taken_0x226c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c74) {
            ctx->pc = 0x226C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226C74u;
            // 0x226c78: 0x8f838e20  lw          $v1, -0x71E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D08u;
            goto label_226d08;
        }
    }
    ctx->pc = 0x226C7Cu;
label_226c7c:
    // 0x226c7c: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x226c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_226c80:
    // 0x226c80: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_226c84:
    if (ctx->pc == 0x226C84u) {
        ctx->pc = 0x226C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C80u;
        // 0x226c84: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C88u;
        goto label_226c88;
    }
    ctx->pc = 0x226C80u;
    {
        const bool branch_taken_0x226c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C80u;
        // 0x226c84: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c80) {
            ctx->pc = 0x226CA0u;
            goto label_226ca0;
        }
    }
    ctx->pc = 0x226C88u;
label_226c88:
    // 0x226c88: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
label_226c8c:
    // 0x226c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226c90:
    // 0x226c90: 0x40f809  jalr        $v0
label_226c94:
    if (ctx->pc == 0x226C94u) {
        ctx->pc = 0x226C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C90u;
        // 0x226c94: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C98u;
        goto label_226c98;
    }
    ctx->pc = 0x226C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226C98u);
        ctx->pc = 0x226C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C90u;
        // 0x226c94: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C90u, 0x226C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226C98u;
label_226c98:
    // 0x226c98: 0x10000007  b           . + 4 + (0x7 << 2)
label_226c9c:
    if (ctx->pc == 0x226C9Cu) {
        ctx->pc = 0x226C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C98u;
        // 0x226c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CA0u;
        goto label_226ca0;
    }
    ctx->pc = 0x226C98u;
    {
        const bool branch_taken_0x226c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C98u;
        // 0x226c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c98) {
            ctx->pc = 0x226CB8u;
            goto label_226cb8;
        }
    }
    ctx->pc = 0x226CA0u;
label_226ca0:
    // 0x226ca0: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
label_226ca4:
    // 0x226ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226ca8:
    // 0x226ca8: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_226cac:
    // 0x226cac: 0x40f809  jalr        $v0
label_226cb0:
    if (ctx->pc == 0x226CB0u) {
        ctx->pc = 0x226CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CACu;
        // 0x226cb0: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CB4u;
        goto label_226cb4;
    }
    ctx->pc = 0x226CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226CB4u);
        ctx->pc = 0x226CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CACu;
        // 0x226cb0: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226CACu, 0x226CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226CB4u;
label_226cb4:
    // 0x226cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226cb8:
    // 0x226cb8: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
label_226cbc:
    if (ctx->pc == 0x226CBCu) {
        ctx->pc = 0x226CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CB8u;
        // 0x226cbc: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CC0u;
        goto label_226cc0;
    }
    ctx->pc = 0x226CB8u;
    {
        const bool branch_taken_0x226cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226cb8) {
            ctx->pc = 0x226CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226CB8u;
            // 0x226cbc: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226CF0u;
            goto label_226cf0;
        }
    }
    ctx->pc = 0x226CC0u;
label_226cc0:
    // 0x226cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226cc4:
    // 0x226cc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_226cc8:
    // 0x226cc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x226cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_226ccc:
    // 0x226ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226cd0:
    // 0x226cd0: 0xc092848  jal         func_24A120
label_226cd4:
    if (ctx->pc == 0x226CD4u) {
        ctx->pc = 0x226CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CD0u;
        // 0x226cd4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CD8u;
        goto label_226cd8;
    }
    ctx->pc = 0x226CD0u;
    SET_GPR_U32(ctx, 31, 0x226CD8u);
    ctx->pc = 0x226CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CD0u;
    // 0x226cd4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x226CD0u, 0x226CD8u)) {
        return;
    }
    ctx->pc = 0x226CD8u;
label_226cd8:
    // 0x226cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_226cdc:
    // 0x226cdc: 0xc09281a  jal         func_24A068
label_226ce0:
    if (ctx->pc == 0x226CE0u) {
        ctx->pc = 0x226CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CDCu;
        // 0x226ce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CE4u;
        goto label_226ce4;
    }
    ctx->pc = 0x226CDCu;
    SET_GPR_U32(ctx, 31, 0x226CE4u);
    ctx->pc = 0x226CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CDCu;
    // 0x226ce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x226CDCu, 0x226CE4u)) {
        return;
    }
    ctx->pc = 0x226CE4u;
label_226ce4:
    // 0x226ce4: 0x1000000b  b           . + 4 + (0xB << 2)
label_226ce8:
    if (ctx->pc == 0x226CE8u) {
        ctx->pc = 0x226CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CE4u;
        // 0x226ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CECu;
        goto label_226cec;
    }
    ctx->pc = 0x226CE4u;
    {
        const bool branch_taken_0x226ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CE4u;
        // 0x226ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ce4) {
            ctx->pc = 0x226D14u;
            goto label_226d14;
        }
    }
    ctx->pc = 0x226CECu;
label_226cec:
    // 0x226cec: 0x0  nop
    ctx->pc = 0x226cecu;
    // NOP
label_226cf0:
    // 0x226cf0: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_226cf4:
    // 0x226cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226cf8:
    // 0x226cf8: 0xac500214  sw          $s0, 0x214($v0)
    ctx->pc = 0x226cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 16));
label_226cfc:
    // 0x226cfc: 0xac440210  sw          $a0, 0x210($v0)
    ctx->pc = 0x226cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 4));
label_226d00:
    // 0x226d00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226d04:
    // 0x226d04: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226d08:
    // 0x226d08: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_226d0c:
    // 0x226d0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_226d10:
    // 0x226d10: 0x8c620210  lw          $v0, 0x210($v1)
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_226d14:
    // 0x226d14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226d18:
    // 0x226d18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226d1c:
    // 0x226d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226d20:
    // 0x226d20: 0x3e00008  jr          $ra
label_226d24:
    if (ctx->pc == 0x226D24u) {
        ctx->pc = 0x226D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D20u;
        // 0x226d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D28u;
        goto label_226d28;
    }
    ctx->pc = 0x226D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D20u;
        // 0x226d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D28u;
label_226d28:
    // 0x226d28: 0x0  nop
    ctx->pc = 0x226d28u;
    // NOP
label_226d2c:
    // 0x226d2c: 0x0  nop
    ctx->pc = 0x226d2cu;
    // NOP
    ctx->pc = 0x226d30u;
}
