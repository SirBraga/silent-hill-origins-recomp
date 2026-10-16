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

// Function: sub_00226AE0
// Address: 0x226ae0 - 0x226c40
void sub_00226AE0_0x226ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226AE0_0x226ae0");
#endif

    switch (ctx->pc) {
        case 0x226ae0u: goto label_226ae0;
        case 0x226ae4u: goto label_226ae4;
        case 0x226ae8u: goto label_226ae8;
        case 0x226aecu: goto label_226aec;
        case 0x226af0u: goto label_226af0;
        case 0x226af4u: goto label_226af4;
        case 0x226af8u: goto label_226af8;
        case 0x226afcu: goto label_226afc;
        case 0x226b00u: goto label_226b00;
        case 0x226b04u: goto label_226b04;
        case 0x226b08u: goto label_226b08;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b10u: goto label_226b10;
        case 0x226b14u: goto label_226b14;
        case 0x226b18u: goto label_226b18;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b20u: goto label_226b20;
        case 0x226b24u: goto label_226b24;
        case 0x226b28u: goto label_226b28;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b30u: goto label_226b30;
        case 0x226b34u: goto label_226b34;
        case 0x226b38u: goto label_226b38;
        case 0x226b3cu: goto label_226b3c;
        case 0x226b40u: goto label_226b40;
        case 0x226b44u: goto label_226b44;
        case 0x226b48u: goto label_226b48;
        case 0x226b4cu: goto label_226b4c;
        case 0x226b50u: goto label_226b50;
        case 0x226b54u: goto label_226b54;
        case 0x226b58u: goto label_226b58;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b60u: goto label_226b60;
        case 0x226b64u: goto label_226b64;
        case 0x226b68u: goto label_226b68;
        case 0x226b6cu: goto label_226b6c;
        case 0x226b70u: goto label_226b70;
        case 0x226b74u: goto label_226b74;
        case 0x226b78u: goto label_226b78;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b80u: goto label_226b80;
        case 0x226b84u: goto label_226b84;
        case 0x226b88u: goto label_226b88;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b90u: goto label_226b90;
        case 0x226b94u: goto label_226b94;
        case 0x226b98u: goto label_226b98;
        case 0x226b9cu: goto label_226b9c;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bacu: goto label_226bac;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb4u: goto label_226bb4;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bbcu: goto label_226bbc;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc4u: goto label_226bc4;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bccu: goto label_226bcc;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bd4u: goto label_226bd4;
        case 0x226bd8u: goto label_226bd8;
        case 0x226bdcu: goto label_226bdc;
        case 0x226be0u: goto label_226be0;
        case 0x226be4u: goto label_226be4;
        case 0x226be8u: goto label_226be8;
        case 0x226becu: goto label_226bec;
        case 0x226bf0u: goto label_226bf0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226bf8u: goto label_226bf8;
        case 0x226bfcu: goto label_226bfc;
        case 0x226c00u: goto label_226c00;
        case 0x226c04u: goto label_226c04;
        case 0x226c08u: goto label_226c08;
        case 0x226c0cu: goto label_226c0c;
        case 0x226c10u: goto label_226c10;
        case 0x226c14u: goto label_226c14;
        case 0x226c18u: goto label_226c18;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c24u: goto label_226c24;
        case 0x226c28u: goto label_226c28;
        case 0x226c2cu: goto label_226c2c;
        case 0x226c30u: goto label_226c30;
        case 0x226c34u: goto label_226c34;
        case 0x226c38u: goto label_226c38;
        case 0x226c3cu: goto label_226c3c;
        default: break;
    }

    ctx->pc = 0x226ae0u;

label_226ae0:
    // 0x226ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_226ae4:
    // 0x226ae4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_226ae8:
    // 0x226ae8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_226aec:
    // 0x226aec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226af0:
    // 0x226af0: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226af4:
    // 0x226af4: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_226af8:
    // 0x226af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_226afc:
    // 0x226afc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x226afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_226b00:
    // 0x226b00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226b04:
    // 0x226b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226b08:
    // 0x226b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226b0c:
    // 0x226b0c: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_226b10:
    // 0x226b10: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_226b14:
    if (ctx->pc == 0x226B14u) {
        ctx->pc = 0x226B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B10u;
        // 0x226b14: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B18u;
        goto label_226b18;
    }
    ctx->pc = 0x226B10u;
    {
        const bool branch_taken_0x226b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B10u;
        // 0x226b14: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b10) {
            ctx->pc = 0x226B38u;
            goto label_226b38;
        }
    }
    ctx->pc = 0x226B18u;
label_226b18:
    // 0x226b18: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x226b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_226b1c:
    // 0x226b1c: 0x60f809  jalr        $v1
label_226b20:
    if (ctx->pc == 0x226B20u) {
        ctx->pc = 0x226B24u;
        goto label_226b24;
    }
    ctx->pc = 0x226B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x226B24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B1Cu, 0x226B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226B24u;
label_226b24:
    // 0x226b24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226b28:
    // 0x226b28: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226b2c:
    // 0x226b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226b30:
    // 0x226b30: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x226b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
label_226b34:
    // 0x226b34: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x226b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
label_226b38:
    // 0x226b38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226b3c:
    // 0x226b3c: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226b40:
    // 0x226b40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226b44:
    // 0x226b44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_226b48:
    // 0x226b48: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_226b4c:
    if (ctx->pc == 0x226B4Cu) {
        ctx->pc = 0x226B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B48u;
        // 0x226b4c: 0x8f848e20  lw          $a0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B50u;
        goto label_226b50;
    }
    ctx->pc = 0x226B48u;
    {
        const bool branch_taken_0x226b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b48) {
            ctx->pc = 0x226B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226B48u;
            // 0x226b4c: 0x8f848e20  lw          $a0, -0x71E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B98u;
            goto label_226b98;
        }
    }
    ctx->pc = 0x226B50u;
label_226b50:
    // 0x226b50: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_226b54:
    // 0x226b54: 0x60f809  jalr        $v1
label_226b58:
    if (ctx->pc == 0x226B58u) {
        ctx->pc = 0x226B5Cu;
        goto label_226b5c;
    }
    ctx->pc = 0x226B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x226B5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B54u, 0x226B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226b60:
    // 0x226b60: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226b64:
    // 0x226b64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226b68:
    // 0x226b68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x226b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_226b6c:
    // 0x226b6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_226b70:
    if (ctx->pc == 0x226B70u) {
        ctx->pc = 0x226B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B6Cu;
        // 0x226b70: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B74u;
        goto label_226b74;
    }
    ctx->pc = 0x226B6Cu;
    {
        const bool branch_taken_0x226b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B6Cu;
        // 0x226b70: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b6c) {
            ctx->pc = 0x226B90u;
            goto label_226b90;
        }
    }
    ctx->pc = 0x226B74u;
label_226b74:
    // 0x226b74: 0x0  nop
    ctx->pc = 0x226b74u;
    // NOP
label_226b78:
    // 0x226b78: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_226b7c:
    // 0x226b7c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_226b80:
    // 0x226b80: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x226b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
label_226b84:
    // 0x226b84: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x226b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_226b88:
    // 0x226b88: 0x40f809  jalr        $v0
label_226b8c:
    if (ctx->pc == 0x226B8Cu) {
        ctx->pc = 0x226B90u;
        goto label_226b90;
    }
    ctx->pc = 0x226B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226B90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B88u, 0x226B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226B90u;
label_226b90:
    // 0x226b90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x226b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_226b94:
    // 0x226b94: 0x8c843e90  lw          $a0, 0x3E90($a0)
    ctx->pc = 0x226b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16016)));
label_226b98:
    // 0x226b98: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x226b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_226b9c:
    // 0x226b9c: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x226b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_226ba0:
    // 0x226ba0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
label_226ba4:
    if (ctx->pc == 0x226BA4u) {
        ctx->pc = 0x226BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BA0u;
        // 0x226ba4: 0x8c45021c  lw          $a1, 0x21C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BA8u;
        goto label_226ba8;
    }
    ctx->pc = 0x226BA0u;
    {
        const bool branch_taken_0x226ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226ba0) {
            ctx->pc = 0x226BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226BA0u;
            // 0x226ba4: 0x8c45021c  lw          $a1, 0x21C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226b78;
        }
    }
    ctx->pc = 0x226BA8u;
label_226ba8:
    // 0x226ba8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226bac:
    // 0x226bac: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226bb0:
    // 0x226bb0: 0x26500fc8  addiu       $s0, $s2, 0xFC8
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_226bb4:
    // 0x226bb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226bb8:
    // 0x226bb8: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_226bbc:
    // 0x226bbc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_226bc0:
    if (ctx->pc == 0x226BC0u) {
        ctx->pc = 0x226BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BBCu;
        // 0x226bc0: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BC4u;
        goto label_226bc4;
    }
    ctx->pc = 0x226BBCu;
    {
        const bool branch_taken_0x226bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BBCu;
        // 0x226bc0: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bbc) {
            ctx->pc = 0x226BE4u;
            goto label_226be4;
        }
    }
    ctx->pc = 0x226BC4u;
label_226bc4:
    // 0x226bc4: 0xc093106  jal         func_24C418
label_226bc8:
    if (ctx->pc == 0x226BC8u) {
        ctx->pc = 0x226BCCu;
        goto label_226bcc;
    }
    ctx->pc = 0x226BC4u;
    SET_GPR_U32(ctx, 31, 0x226BCCu);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x226BC4u, 0x226BCCu)) {
        return;
    }
    ctx->pc = 0x226BCCu;
label_226bcc:
    // 0x226bcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226bd0:
    // 0x226bd0: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226bd4:
    // 0x226bd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226bd8:
    // 0x226bd8: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x226bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_226bdc:
    // 0x226bdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226be0:
    // 0x226be0: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226be4:
    // 0x226be4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226be8:
    // 0x226be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x226be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226bec:
    // 0x226bec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_226bf0:
    if (ctx->pc == 0x226BF0u) {
        ctx->pc = 0x226BF4u;
        goto label_226bf4;
    }
    ctx->pc = 0x226BECu;
    {
        const bool branch_taken_0x226bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bec) {
            ctx->pc = 0x226C0Cu;
            goto label_226c0c;
        }
    }
    ctx->pc = 0x226BF4u;
label_226bf4:
    // 0x226bf4: 0xc093106  jal         func_24C418
label_226bf8:
    if (ctx->pc == 0x226BF8u) {
        ctx->pc = 0x226BFCu;
        goto label_226bfc;
    }
    ctx->pc = 0x226BF4u;
    SET_GPR_U32(ctx, 31, 0x226BFCu);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x226BF4u, 0x226BFCu)) {
        return;
    }
    ctx->pc = 0x226BFCu;
label_226bfc:
    // 0x226bfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226c00:
    // 0x226c00: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226c04:
    // 0x226c04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226c08:
    // 0x226c08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x226c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_226c0c:
    // 0x226c0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226c10:
    // 0x226c10: 0x8c633e94  lw          $v1, 0x3E94($v1)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16020)));
label_226c14:
    // 0x226c14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226c18:
    // 0x226c18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226c1c:
    // 0x226c1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_226c20:
    // 0x226c20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226c24:
    // 0x226c24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x226c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226c28:
    // 0x226c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226c2c:
    // 0x226c2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x226c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_226c30:
    // 0x226c30: 0xac233e94  sw          $v1, 0x3E94($at)
    ctx->pc = 0x226c30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16020), GPR_U32(ctx, 3));
label_226c34:
    // 0x226c34: 0x3e00008  jr          $ra
label_226c38:
    if (ctx->pc == 0x226C38u) {
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C3Cu;
        goto label_226c3c;
    }
    ctx->pc = 0x226C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C3Cu;
label_226c3c:
    // 0x226c3c: 0x0  nop
    ctx->pc = 0x226c3cu;
    // NOP
    ctx->pc = 0x226c40u;
}
