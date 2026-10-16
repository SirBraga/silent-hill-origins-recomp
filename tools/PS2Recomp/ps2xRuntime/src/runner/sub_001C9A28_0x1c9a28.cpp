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

// Function: sub_001C9A28
// Address: 0x1c9a28 - 0x1c9b78
void sub_001C9A28_0x1c9a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9A28_0x1c9a28");
#endif

    switch (ctx->pc) {
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9af4u: goto label_1c9af4;
        case 0x1c9af8u: goto label_1c9af8;
        case 0x1c9afcu: goto label_1c9afc;
        case 0x1c9b00u: goto label_1c9b00;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b08u: goto label_1c9b08;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b10u: goto label_1c9b10;
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b1cu: goto label_1c9b1c;
        case 0x1c9b20u: goto label_1c9b20;
        case 0x1c9b24u: goto label_1c9b24;
        case 0x1c9b28u: goto label_1c9b28;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b30u: goto label_1c9b30;
        case 0x1c9b34u: goto label_1c9b34;
        case 0x1c9b38u: goto label_1c9b38;
        case 0x1c9b3cu: goto label_1c9b3c;
        case 0x1c9b40u: goto label_1c9b40;
        case 0x1c9b44u: goto label_1c9b44;
        case 0x1c9b48u: goto label_1c9b48;
        case 0x1c9b4cu: goto label_1c9b4c;
        case 0x1c9b50u: goto label_1c9b50;
        case 0x1c9b54u: goto label_1c9b54;
        case 0x1c9b58u: goto label_1c9b58;
        case 0x1c9b5cu: goto label_1c9b5c;
        case 0x1c9b60u: goto label_1c9b60;
        case 0x1c9b64u: goto label_1c9b64;
        case 0x1c9b68u: goto label_1c9b68;
        case 0x1c9b6cu: goto label_1c9b6c;
        case 0x1c9b70u: goto label_1c9b70;
        case 0x1c9b74u: goto label_1c9b74;
        default: break;
    }

    ctx->pc = 0x1c9a28u;

label_1c9a28:
    // 0x1c9a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9a2c:
    // 0x1c9a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c9a30:
    // 0x1c9a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c9a34:
    // 0x1c9a34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a38:
    // 0x1c9a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9a3c:
    // 0x1c9a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a40:
    // 0x1c9a40: 0x8e2603f0  lw          $a2, 0x3F0($s1)
    ctx->pc = 0x1c9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_1c9a44:
    // 0x1c9a44: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9a48:
    // 0x1c9a48: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9a4c:
    // 0x1c9a4c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c9a50:
    // 0x1c9a50: 0x60f809  jalr        $v1
label_1c9a54:
    if (ctx->pc == 0x1C9A54u) {
        ctx->pc = 0x1C9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A50u;
        // 0x1c9a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A58u;
        goto label_1c9a58;
    }
    ctx->pc = 0x1C9A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9A58u);
        ctx->pc = 0x1C9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A50u;
        // 0x1c9a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A50u, 0x1C9A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9A58u;
label_1c9a58:
    // 0x1c9a58: 0x8e2603f4  lw          $a2, 0x3F4($s1)
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1012)));
label_1c9a5c:
    // 0x1c9a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a60:
    // 0x1c9a60: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9a64:
    // 0x1c9a64: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9a68:
    // 0x1c9a68: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c9a6c:
    // 0x1c9a6c: 0x60f809  jalr        $v1
label_1c9a70:
    if (ctx->pc == 0x1C9A70u) {
        ctx->pc = 0x1C9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A6Cu;
        // 0x1c9a70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A74u;
        goto label_1c9a74;
    }
    ctx->pc = 0x1C9A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9A74u);
        ctx->pc = 0x1C9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A6Cu;
        // 0x1c9a70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A6Cu, 0x1C9A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9A74u;
label_1c9a74:
    // 0x1c9a74: 0x8e2603f8  lw          $a2, 0x3F8($s1)
    ctx->pc = 0x1c9a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1016)));
label_1c9a78:
    // 0x1c9a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a7c:
    // 0x1c9a7c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9a80:
    // 0x1c9a80: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9a84:
    // 0x1c9a84: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c9a88:
    // 0x1c9a88: 0x60f809  jalr        $v1
label_1c9a8c:
    if (ctx->pc == 0x1C9A8Cu) {
        ctx->pc = 0x1C9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A88u;
        // 0x1c9a8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A90u;
        goto label_1c9a90;
    }
    ctx->pc = 0x1C9A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9A90u);
        ctx->pc = 0x1C9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A88u;
        // 0x1c9a8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A88u, 0x1C9A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9A90u;
label_1c9a90:
    // 0x1c9a90: 0x8e2603fc  lw          $a2, 0x3FC($s1)
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1020)));
label_1c9a94:
    // 0x1c9a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a98:
    // 0x1c9a98: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9a9c:
    // 0x1c9a9c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9aa0:
    // 0x1c9aa0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c9aa4:
    // 0x1c9aa4: 0x60f809  jalr        $v1
label_1c9aa8:
    if (ctx->pc == 0x1C9AA8u) {
        ctx->pc = 0x1C9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA4u;
        // 0x1c9aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AACu;
        goto label_1c9aac;
    }
    ctx->pc = 0x1C9AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9AACu);
        ctx->pc = 0x1C9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA4u;
        // 0x1c9aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AA4u, 0x1C9AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9AACu;
label_1c9aac:
    // 0x1c9aac: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1c9ab0:
    // 0x1c9ab0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1c9ab4:
    if (ctx->pc == 0x1C9AB4u) {
        ctx->pc = 0x1C9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB0u;
        // 0x1c9ab4: 0x8e2603f4  lw          $a2, 0x3F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AB8u;
        goto label_1c9ab8;
    }
    ctx->pc = 0x1C9AB0u;
    {
        const bool branch_taken_0x1c9ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB0u;
        // 0x1c9ab4: 0x8e2603f4  lw          $a2, 0x3F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab0) {
            ctx->pc = 0x1C9B10u;
            goto label_1c9b10;
        }
    }
    ctx->pc = 0x1C9AB8u;
label_1c9ab8:
    // 0x1c9ab8: 0x8e250400  lw          $a1, 0x400($s1)
    ctx->pc = 0x1c9ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
label_1c9abc:
    // 0x1c9abc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9ac0:
    // 0x1c9ac0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9ac4:
    // 0x1c9ac4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9ac8:
    // 0x1c9ac8: 0x60f809  jalr        $v1
label_1c9acc:
    if (ctx->pc == 0x1C9ACCu) {
        ctx->pc = 0x1C9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC8u;
        // 0x1c9acc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AD0u;
        goto label_1c9ad0;
    }
    ctx->pc = 0x1C9AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9AD0u);
        ctx->pc = 0x1C9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC8u;
        // 0x1c9acc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AC8u, 0x1C9AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9AD0u;
label_1c9ad0:
    // 0x1c9ad0: 0x8e2603f8  lw          $a2, 0x3F8($s1)
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1016)));
label_1c9ad4:
    // 0x1c9ad4: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
label_1c9ad8:
    // 0x1c9ad8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9adc:
    // 0x1c9adc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9ae0:
    // 0x1c9ae0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9ae4:
    // 0x1c9ae4: 0x60f809  jalr        $v1
label_1c9ae8:
    if (ctx->pc == 0x1C9AE8u) {
        ctx->pc = 0x1C9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE4u;
        // 0x1c9ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AECu;
        goto label_1c9aec;
    }
    ctx->pc = 0x1C9AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9AECu);
        ctx->pc = 0x1C9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE4u;
        // 0x1c9ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AE4u, 0x1C9AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9AECu;
label_1c9aec:
    // 0x1c9aec: 0x8e2603fc  lw          $a2, 0x3FC($s1)
    ctx->pc = 0x1c9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1020)));
label_1c9af0:
    // 0x1c9af0: 0x8e250408  lw          $a1, 0x408($s1)
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
label_1c9af4:
    // 0x1c9af4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9af8:
    // 0x1c9af8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9afc:
    // 0x1c9afc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9b00:
    // 0x1c9b00: 0x60f809  jalr        $v1
label_1c9b04:
    if (ctx->pc == 0x1C9B04u) {
        ctx->pc = 0x1C9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B00u;
        // 0x1c9b04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B08u;
        goto label_1c9b08;
    }
    ctx->pc = 0x1C9B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B08u);
        ctx->pc = 0x1C9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B00u;
        // 0x1c9b04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B00u, 0x1C9B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B08u;
label_1c9b08:
    // 0x1c9b08: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c9b0c:
    if (ctx->pc == 0x1C9B0Cu) {
        ctx->pc = 0x1C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B08u;
        // 0x1c9b0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B10u;
        goto label_1c9b10;
    }
    ctx->pc = 0x1C9B08u;
    {
        const bool branch_taken_0x1c9b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B08u;
        // 0x1c9b0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b08) {
            ctx->pc = 0x1C9B64u;
            goto label_1c9b64;
        }
    }
    ctx->pc = 0x1C9B10u;
label_1c9b10:
    // 0x1c9b10: 0x8e25040c  lw          $a1, 0x40C($s1)
    ctx->pc = 0x1c9b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1036)));
label_1c9b14:
    // 0x1c9b14: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9b18:
    // 0x1c9b18: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9b1c:
    // 0x1c9b1c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9b20:
    // 0x1c9b20: 0x60f809  jalr        $v1
label_1c9b24:
    if (ctx->pc == 0x1C9B24u) {
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B20u;
        // 0x1c9b24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B28u;
        goto label_1c9b28;
    }
    ctx->pc = 0x1C9B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B28u);
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B20u;
        // 0x1c9b24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B20u, 0x1C9B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B28u;
label_1c9b28:
    // 0x1c9b28: 0x8e2603f8  lw          $a2, 0x3F8($s1)
    ctx->pc = 0x1c9b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1016)));
label_1c9b2c:
    // 0x1c9b2c: 0x8e250410  lw          $a1, 0x410($s1)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
label_1c9b30:
    // 0x1c9b30: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9b34:
    // 0x1c9b34: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9b38:
    // 0x1c9b38: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9b3c:
    // 0x1c9b3c: 0x60f809  jalr        $v1
label_1c9b40:
    if (ctx->pc == 0x1C9B40u) {
        ctx->pc = 0x1C9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B3Cu;
        // 0x1c9b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B44u;
        goto label_1c9b44;
    }
    ctx->pc = 0x1C9B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B44u);
        ctx->pc = 0x1C9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B3Cu;
        // 0x1c9b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B3Cu, 0x1C9B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B44u;
label_1c9b44:
    // 0x1c9b44: 0x8e2603fc  lw          $a2, 0x3FC($s1)
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1020)));
label_1c9b48:
    // 0x1c9b48: 0x8e250414  lw          $a1, 0x414($s1)
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
label_1c9b4c:
    // 0x1c9b4c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9b50:
    // 0x1c9b50: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c9b54:
    // 0x1c9b54: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c9b58:
    // 0x1c9b58: 0x60f809  jalr        $v1
label_1c9b5c:
    if (ctx->pc == 0x1C9B5Cu) {
        ctx->pc = 0x1C9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B58u;
        // 0x1c9b5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B60u;
        goto label_1c9b60;
    }
    ctx->pc = 0x1C9B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B60u);
        ctx->pc = 0x1C9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B58u;
        // 0x1c9b5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B58u, 0x1C9B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B60u;
label_1c9b60:
    // 0x1c9b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9b64:
    // 0x1c9b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9b68:
    // 0x1c9b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9b6c:
    // 0x1c9b6c: 0x3e00008  jr          $ra
label_1c9b70:
    if (ctx->pc == 0x1C9B70u) {
        ctx->pc = 0x1C9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B6Cu;
        // 0x1c9b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B74u;
        goto label_1c9b74;
    }
    ctx->pc = 0x1C9B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B6Cu;
        // 0x1c9b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B74u;
label_1c9b74:
    // 0x1c9b74: 0x0  nop
    ctx->pc = 0x1c9b74u;
    // NOP
    ctx->pc = 0x1c9b78u;
}
