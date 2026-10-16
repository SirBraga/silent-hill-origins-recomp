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

// Function: sub_00179B20
// Address: 0x179b20 - 0x179c80
void sub_00179B20_0x179b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179B20_0x179b20");
#endif

    switch (ctx->pc) {
        case 0x179b20u: goto label_179b20;
        case 0x179b24u: goto label_179b24;
        case 0x179b28u: goto label_179b28;
        case 0x179b2cu: goto label_179b2c;
        case 0x179b30u: goto label_179b30;
        case 0x179b34u: goto label_179b34;
        case 0x179b38u: goto label_179b38;
        case 0x179b3cu: goto label_179b3c;
        case 0x179b40u: goto label_179b40;
        case 0x179b44u: goto label_179b44;
        case 0x179b48u: goto label_179b48;
        case 0x179b4cu: goto label_179b4c;
        case 0x179b50u: goto label_179b50;
        case 0x179b54u: goto label_179b54;
        case 0x179b58u: goto label_179b58;
        case 0x179b5cu: goto label_179b5c;
        case 0x179b60u: goto label_179b60;
        case 0x179b64u: goto label_179b64;
        case 0x179b68u: goto label_179b68;
        case 0x179b6cu: goto label_179b6c;
        case 0x179b70u: goto label_179b70;
        case 0x179b74u: goto label_179b74;
        case 0x179b78u: goto label_179b78;
        case 0x179b7cu: goto label_179b7c;
        case 0x179b80u: goto label_179b80;
        case 0x179b84u: goto label_179b84;
        case 0x179b88u: goto label_179b88;
        case 0x179b8cu: goto label_179b8c;
        case 0x179b90u: goto label_179b90;
        case 0x179b94u: goto label_179b94;
        case 0x179b98u: goto label_179b98;
        case 0x179b9cu: goto label_179b9c;
        case 0x179ba0u: goto label_179ba0;
        case 0x179ba4u: goto label_179ba4;
        case 0x179ba8u: goto label_179ba8;
        case 0x179bacu: goto label_179bac;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bb4u: goto label_179bb4;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bbcu: goto label_179bbc;
        case 0x179bc0u: goto label_179bc0;
        case 0x179bc4u: goto label_179bc4;
        case 0x179bc8u: goto label_179bc8;
        case 0x179bccu: goto label_179bcc;
        case 0x179bd0u: goto label_179bd0;
        case 0x179bd4u: goto label_179bd4;
        case 0x179bd8u: goto label_179bd8;
        case 0x179bdcu: goto label_179bdc;
        case 0x179be0u: goto label_179be0;
        case 0x179be4u: goto label_179be4;
        case 0x179be8u: goto label_179be8;
        case 0x179becu: goto label_179bec;
        case 0x179bf0u: goto label_179bf0;
        case 0x179bf4u: goto label_179bf4;
        case 0x179bf8u: goto label_179bf8;
        case 0x179bfcu: goto label_179bfc;
        case 0x179c00u: goto label_179c00;
        case 0x179c04u: goto label_179c04;
        case 0x179c08u: goto label_179c08;
        case 0x179c0cu: goto label_179c0c;
        case 0x179c10u: goto label_179c10;
        case 0x179c14u: goto label_179c14;
        case 0x179c18u: goto label_179c18;
        case 0x179c1cu: goto label_179c1c;
        case 0x179c20u: goto label_179c20;
        case 0x179c24u: goto label_179c24;
        case 0x179c28u: goto label_179c28;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        default: break;
    }

    ctx->pc = 0x179b20u;

label_179b20:
    // 0x179b20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_179b24:
    // 0x179b24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x179b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_179b28:
    // 0x179b28: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x179b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_179b2c:
    // 0x179b2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179b30:
    // 0x179b30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x179b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_179b34:
    // 0x179b34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179b38:
    // 0x179b38: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x179b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_179b3c:
    // 0x179b3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179b40:
    // 0x179b40: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x179b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_179b44:
    // 0x179b44: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x179b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_179b48:
    // 0x179b48: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x179b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_179b4c:
    // 0x179b4c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x179b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_179b50:
    // 0x179b50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_179b54:
    // 0x179b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_179b58:
    // 0x179b58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x179b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_179b5c:
    // 0x179b5c: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x179b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_179b60:
    // 0x179b60: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_179b64:
    if (ctx->pc == 0x179B64u) {
        ctx->pc = 0x179B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B60u;
        // 0x179b64: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B68u;
        goto label_179b68;
    }
    ctx->pc = 0x179B60u;
    {
        const bool branch_taken_0x179b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B60u;
        // 0x179b64: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b60) {
            ctx->pc = 0x179BC0u;
            goto label_179bc0;
        }
    }
    ctx->pc = 0x179B68u;
label_179b68:
    // 0x179b68: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x179b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_179b6c:
    // 0x179b6c: 0x2454108c  addiu       $s4, $v0, 0x108C
    ctx->pc = 0x179b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_179b70:
    // 0x179b70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_179b74:
    // 0x179b74: 0x0  nop
    ctx->pc = 0x179b74u;
    // NOP
label_179b78:
    // 0x179b78: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_179b7c:
    if (ctx->pc == 0x179B7Cu) {
        ctx->pc = 0x179B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B78u;
        // 0x179b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B80u;
        goto label_179b80;
    }
    ctx->pc = 0x179B78u;
    {
        const bool branch_taken_0x179b78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x179B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B78u;
        // 0x179b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b78) {
            ctx->pc = 0x179BACu;
            goto label_179bac;
        }
    }
    ctx->pc = 0x179B80u;
label_179b80:
    // 0x179b80: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_179b84:
    if (ctx->pc == 0x179B84u) {
        ctx->pc = 0x179B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B80u;
        // 0x179b84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B88u;
        goto label_179b88;
    }
    ctx->pc = 0x179B80u;
    {
        const bool branch_taken_0x179b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B80u;
        // 0x179b84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b80) {
            ctx->pc = 0x179BACu;
            goto label_179bac;
        }
    }
    ctx->pc = 0x179B88u;
label_179b88:
    // 0x179b88: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x179b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179b8c:
    // 0x179b8c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_179b90:
    if (ctx->pc == 0x179B90u) {
        ctx->pc = 0x179B94u;
        goto label_179b94;
    }
    ctx->pc = 0x179B8Cu;
    {
        const bool branch_taken_0x179b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x179b8c) {
            ctx->pc = 0x179BACu;
            goto label_179bac;
        }
    }
    ctx->pc = 0x179B94u;
label_179b94:
    // 0x179b94: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x179b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_179b98:
    // 0x179b98: 0x40f809  jalr        $v0
label_179b9c:
    if (ctx->pc == 0x179B9Cu) {
        ctx->pc = 0x179B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B98u;
        // 0x179b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BA0u;
        goto label_179ba0;
    }
    ctx->pc = 0x179B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179BA0u);
        ctx->pc = 0x179B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B98u;
        // 0x179b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B98u, 0x179BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179BA0u;
label_179ba0:
    // 0x179ba0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_179ba4:
    if (ctx->pc == 0x179BA4u) {
        ctx->pc = 0x179BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BA0u;
        // 0x179ba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BA8u;
        goto label_179ba8;
    }
    ctx->pc = 0x179BA0u;
    {
        const bool branch_taken_0x179ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BA0u;
        // 0x179ba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ba0) {
            ctx->pc = 0x179BACu;
            goto label_179bac;
        }
    }
    ctx->pc = 0x179BA8u;
label_179ba8:
    // 0x179ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179bac:
    // 0x179bac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_179bb0:
    if (ctx->pc == 0x179BB0u) {
        ctx->pc = 0x179BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BACu;
        // 0x179bb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BB4u;
        goto label_179bb4;
    }
    ctx->pc = 0x179BACu;
    {
        const bool branch_taken_0x179bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BACu;
        // 0x179bb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bac) {
            ctx->pc = 0x179BC4u;
            goto label_179bc4;
        }
    }
    ctx->pc = 0x179BB4u;
label_179bb4:
    // 0x179bb4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x179bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_179bb8:
    // 0x179bb8: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_179bbc:
    if (ctx->pc == 0x179BBCu) {
        ctx->pc = 0x179BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BB8u;
        // 0x179bbc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BC0u;
        goto label_179bc0;
    }
    ctx->pc = 0x179BB8u;
    {
        const bool branch_taken_0x179bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179bb8) {
            ctx->pc = 0x179BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179BB8u;
            // 0x179bbc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b78;
        }
    }
    ctx->pc = 0x179BC0u;
label_179bc0:
    // 0x179bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179bc4:
    // 0x179bc4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_179bc8:
    if (ctx->pc == 0x179BC8u) {
        ctx->pc = 0x179BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BC4u;
        // 0x179bc8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BCCu;
        goto label_179bcc;
    }
    ctx->pc = 0x179BC4u;
    {
        const bool branch_taken_0x179bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BC4u;
        // 0x179bc8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bc4) {
            ctx->pc = 0x179C58u;
            goto label_179c58;
        }
    }
    ctx->pc = 0x179BCCu;
label_179bcc:
    // 0x179bcc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x179bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_179bd0:
    // 0x179bd0: 0xc0808f0  jal         func_2023C0
label_179bd4:
    if (ctx->pc == 0x179BD4u) {
        ctx->pc = 0x179BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BD0u;
        // 0x179bd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BD8u;
        goto label_179bd8;
    }
    ctx->pc = 0x179BD0u;
    SET_GPR_U32(ctx, 31, 0x179BD8u);
    ctx->pc = 0x179BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BD0u;
    // 0x179bd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x179BD0u, 0x179BD8u)) {
        return;
    }
    ctx->pc = 0x179BD8u;
label_179bd8:
    // 0x179bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179bdc:
    // 0x179bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179be0:
    // 0x179be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179be4:
    // 0x179be4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x179be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_179be8:
    // 0x179be8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x179be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_179bec:
    // 0x179bec: 0xc081b56  jal         func_206D58
label_179bf0:
    if (ctx->pc == 0x179BF0u) {
        ctx->pc = 0x179BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BECu;
        // 0x179bf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BF4u;
        goto label_179bf4;
    }
    ctx->pc = 0x179BECu;
    SET_GPR_U32(ctx, 31, 0x179BF4u);
    ctx->pc = 0x179BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BECu;
    // 0x179bf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x179BECu, 0x179BF4u)) {
        return;
    }
    ctx->pc = 0x179BF4u;
label_179bf4:
    // 0x179bf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x179bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_179bf8:
    // 0x179bf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x179bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_179bfc:
    // 0x179bfc: 0xc081b56  jal         func_206D58
label_179c00:
    if (ctx->pc == 0x179C00u) {
        ctx->pc = 0x179C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BFCu;
        // 0x179c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C04u;
        goto label_179c04;
    }
    ctx->pc = 0x179BFCu;
    SET_GPR_U32(ctx, 31, 0x179C04u);
    ctx->pc = 0x179C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BFCu;
    // 0x179c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x179BFCu, 0x179C04u)) {
        return;
    }
    ctx->pc = 0x179C04u;
label_179c04:
    // 0x179c04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x179c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_179c08:
    // 0x179c08: 0x26630014  addiu       $v1, $s3, 0x14
    ctx->pc = 0x179c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_179c0c:
    // 0x179c0c: 0xae160014  sw          $s6, 0x14($s0)
    ctx->pc = 0x179c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
label_179c10:
    // 0x179c10: 0xae170018  sw          $s7, 0x18($s0)
    ctx->pc = 0x179c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 23));
label_179c14:
    // 0x179c14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x179c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_179c18:
    // 0x179c18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x179c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_179c1c:
    // 0x179c1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x179c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_179c20:
    // 0x179c20: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x179c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_179c24:
    // 0x179c24: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_179c28:
    if (ctx->pc == 0x179C28u) {
        ctx->pc = 0x179C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C24u;
        // 0x179c28: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C2Cu;
        goto label_179c2c;
    }
    ctx->pc = 0x179C24u;
    {
        const bool branch_taken_0x179c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179c24) {
            ctx->pc = 0x179C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C24u;
            // 0x179c28: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C2Cu;
            goto label_179c2c;
        }
    }
    ctx->pc = 0x179C2Cu;
label_179c2c:
    // 0x179c2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x179c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_179c30:
    // 0x179c30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_179c34:
    if (ctx->pc == 0x179C34u) {
        ctx->pc = 0x179C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C30u;
        // 0x179c34: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C38u;
        goto label_179c38;
    }
    ctx->pc = 0x179C30u;
    {
        const bool branch_taken_0x179c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c30) {
            ctx->pc = 0x179C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C30u;
            // 0x179c34: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C38u;
            goto label_179c38;
        }
    }
    ctx->pc = 0x179C38u;
label_179c38:
    // 0x179c38: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x179c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_179c3c:
    // 0x179c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179c40:
    // 0x179c40: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_179c44:
    // 0x179c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179c48:
    // 0x179c48: 0xc06491a  jal         func_192468
label_179c4c:
    if (ctx->pc == 0x179C4Cu) {
        ctx->pc = 0x179C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C48u;
        // 0x179c4c: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C50u;
        goto label_179c50;
    }
    ctx->pc = 0x179C48u;
    SET_GPR_U32(ctx, 31, 0x179C50u);
    ctx->pc = 0x179C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C48u;
    // 0x179c4c: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x179C48u, 0x179C50u)) {
        return;
    }
    ctx->pc = 0x179C50u;
label_179c50:
    // 0x179c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179c54:
    // 0x179c54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x179c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179c58:
    // 0x179c58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x179c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_179c5c:
    // 0x179c5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x179c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_179c60:
    // 0x179c60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x179c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_179c64:
    // 0x179c64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179c68:
    // 0x179c68: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x179c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179c6c:
    // 0x179c6c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x179c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179c70:
    // 0x179c70: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x179c70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179c74:
    // 0x179c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179c78:
    // 0x179c78: 0x3e00008  jr          $ra
label_179c7c:
    if (ctx->pc == 0x179C7Cu) {
        ctx->pc = 0x179C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C78u;
        // 0x179c7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C80u;
        goto label_fallthrough_0x179c78;
    }
    ctx->pc = 0x179C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C78u;
        // 0x179c7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179c78:
    ctx->pc = 0x179C80u;
}
