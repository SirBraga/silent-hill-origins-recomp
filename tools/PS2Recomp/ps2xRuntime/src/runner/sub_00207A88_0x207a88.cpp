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

// Function: sub_00207A88
// Address: 0x207a88 - 0x207d58
void sub_00207A88_0x207a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A88_0x207a88");
#endif

    switch (ctx->pc) {
        case 0x207a88u: goto label_207a88;
        case 0x207a8cu: goto label_207a8c;
        case 0x207a90u: goto label_207a90;
        case 0x207a94u: goto label_207a94;
        case 0x207a98u: goto label_207a98;
        case 0x207a9cu: goto label_207a9c;
        case 0x207aa0u: goto label_207aa0;
        case 0x207aa4u: goto label_207aa4;
        case 0x207aa8u: goto label_207aa8;
        case 0x207aacu: goto label_207aac;
        case 0x207ab0u: goto label_207ab0;
        case 0x207ab4u: goto label_207ab4;
        case 0x207ab8u: goto label_207ab8;
        case 0x207abcu: goto label_207abc;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ac4u: goto label_207ac4;
        case 0x207ac8u: goto label_207ac8;
        case 0x207accu: goto label_207acc;
        case 0x207ad0u: goto label_207ad0;
        case 0x207ad4u: goto label_207ad4;
        case 0x207ad8u: goto label_207ad8;
        case 0x207adcu: goto label_207adc;
        case 0x207ae0u: goto label_207ae0;
        case 0x207ae4u: goto label_207ae4;
        case 0x207ae8u: goto label_207ae8;
        case 0x207aecu: goto label_207aec;
        case 0x207af0u: goto label_207af0;
        case 0x207af4u: goto label_207af4;
        case 0x207af8u: goto label_207af8;
        case 0x207afcu: goto label_207afc;
        case 0x207b00u: goto label_207b00;
        case 0x207b04u: goto label_207b04;
        case 0x207b08u: goto label_207b08;
        case 0x207b0cu: goto label_207b0c;
        case 0x207b10u: goto label_207b10;
        case 0x207b14u: goto label_207b14;
        case 0x207b18u: goto label_207b18;
        case 0x207b1cu: goto label_207b1c;
        case 0x207b20u: goto label_207b20;
        case 0x207b24u: goto label_207b24;
        case 0x207b28u: goto label_207b28;
        case 0x207b2cu: goto label_207b2c;
        case 0x207b30u: goto label_207b30;
        case 0x207b34u: goto label_207b34;
        case 0x207b38u: goto label_207b38;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b40u: goto label_207b40;
        case 0x207b44u: goto label_207b44;
        case 0x207b48u: goto label_207b48;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b50u: goto label_207b50;
        case 0x207b54u: goto label_207b54;
        case 0x207b58u: goto label_207b58;
        case 0x207b5cu: goto label_207b5c;
        case 0x207b60u: goto label_207b60;
        case 0x207b64u: goto label_207b64;
        case 0x207b68u: goto label_207b68;
        case 0x207b6cu: goto label_207b6c;
        case 0x207b70u: goto label_207b70;
        case 0x207b74u: goto label_207b74;
        case 0x207b78u: goto label_207b78;
        case 0x207b7cu: goto label_207b7c;
        case 0x207b80u: goto label_207b80;
        case 0x207b84u: goto label_207b84;
        case 0x207b88u: goto label_207b88;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b90u: goto label_207b90;
        case 0x207b94u: goto label_207b94;
        case 0x207b98u: goto label_207b98;
        case 0x207b9cu: goto label_207b9c;
        case 0x207ba0u: goto label_207ba0;
        case 0x207ba4u: goto label_207ba4;
        case 0x207ba8u: goto label_207ba8;
        case 0x207bacu: goto label_207bac;
        case 0x207bb0u: goto label_207bb0;
        case 0x207bb4u: goto label_207bb4;
        case 0x207bb8u: goto label_207bb8;
        case 0x207bbcu: goto label_207bbc;
        case 0x207bc0u: goto label_207bc0;
        case 0x207bc4u: goto label_207bc4;
        case 0x207bc8u: goto label_207bc8;
        case 0x207bccu: goto label_207bcc;
        case 0x207bd0u: goto label_207bd0;
        case 0x207bd4u: goto label_207bd4;
        case 0x207bd8u: goto label_207bd8;
        case 0x207bdcu: goto label_207bdc;
        case 0x207be0u: goto label_207be0;
        case 0x207be4u: goto label_207be4;
        case 0x207be8u: goto label_207be8;
        case 0x207becu: goto label_207bec;
        case 0x207bf0u: goto label_207bf0;
        case 0x207bf4u: goto label_207bf4;
        case 0x207bf8u: goto label_207bf8;
        case 0x207bfcu: goto label_207bfc;
        case 0x207c00u: goto label_207c00;
        case 0x207c04u: goto label_207c04;
        case 0x207c08u: goto label_207c08;
        case 0x207c0cu: goto label_207c0c;
        case 0x207c10u: goto label_207c10;
        case 0x207c14u: goto label_207c14;
        case 0x207c18u: goto label_207c18;
        case 0x207c1cu: goto label_207c1c;
        case 0x207c20u: goto label_207c20;
        case 0x207c24u: goto label_207c24;
        case 0x207c28u: goto label_207c28;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c30u: goto label_207c30;
        case 0x207c34u: goto label_207c34;
        case 0x207c38u: goto label_207c38;
        case 0x207c3cu: goto label_207c3c;
        case 0x207c40u: goto label_207c40;
        case 0x207c44u: goto label_207c44;
        case 0x207c48u: goto label_207c48;
        case 0x207c4cu: goto label_207c4c;
        case 0x207c50u: goto label_207c50;
        case 0x207c54u: goto label_207c54;
        case 0x207c58u: goto label_207c58;
        case 0x207c5cu: goto label_207c5c;
        case 0x207c60u: goto label_207c60;
        case 0x207c64u: goto label_207c64;
        case 0x207c68u: goto label_207c68;
        case 0x207c6cu: goto label_207c6c;
        case 0x207c70u: goto label_207c70;
        case 0x207c74u: goto label_207c74;
        case 0x207c78u: goto label_207c78;
        case 0x207c7cu: goto label_207c7c;
        case 0x207c80u: goto label_207c80;
        case 0x207c84u: goto label_207c84;
        case 0x207c88u: goto label_207c88;
        case 0x207c8cu: goto label_207c8c;
        case 0x207c90u: goto label_207c90;
        case 0x207c94u: goto label_207c94;
        case 0x207c98u: goto label_207c98;
        case 0x207c9cu: goto label_207c9c;
        case 0x207ca0u: goto label_207ca0;
        case 0x207ca4u: goto label_207ca4;
        case 0x207ca8u: goto label_207ca8;
        case 0x207cacu: goto label_207cac;
        case 0x207cb0u: goto label_207cb0;
        case 0x207cb4u: goto label_207cb4;
        case 0x207cb8u: goto label_207cb8;
        case 0x207cbcu: goto label_207cbc;
        case 0x207cc0u: goto label_207cc0;
        case 0x207cc4u: goto label_207cc4;
        case 0x207cc8u: goto label_207cc8;
        case 0x207cccu: goto label_207ccc;
        case 0x207cd0u: goto label_207cd0;
        case 0x207cd4u: goto label_207cd4;
        case 0x207cd8u: goto label_207cd8;
        case 0x207cdcu: goto label_207cdc;
        case 0x207ce0u: goto label_207ce0;
        case 0x207ce4u: goto label_207ce4;
        case 0x207ce8u: goto label_207ce8;
        case 0x207cecu: goto label_207cec;
        case 0x207cf0u: goto label_207cf0;
        case 0x207cf4u: goto label_207cf4;
        case 0x207cf8u: goto label_207cf8;
        case 0x207cfcu: goto label_207cfc;
        case 0x207d00u: goto label_207d00;
        case 0x207d04u: goto label_207d04;
        case 0x207d08u: goto label_207d08;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d10u: goto label_207d10;
        case 0x207d14u: goto label_207d14;
        case 0x207d18u: goto label_207d18;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d20u: goto label_207d20;
        case 0x207d24u: goto label_207d24;
        case 0x207d28u: goto label_207d28;
        case 0x207d2cu: goto label_207d2c;
        case 0x207d30u: goto label_207d30;
        case 0x207d34u: goto label_207d34;
        case 0x207d38u: goto label_207d38;
        case 0x207d3cu: goto label_207d3c;
        case 0x207d40u: goto label_207d40;
        case 0x207d44u: goto label_207d44;
        case 0x207d48u: goto label_207d48;
        case 0x207d4cu: goto label_207d4c;
        case 0x207d50u: goto label_207d50;
        case 0x207d54u: goto label_207d54;
        default: break;
    }

    ctx->pc = 0x207a88u;

label_207a88:
    // 0x207a88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_207a8c:
    // 0x207a8c: 0x3406ffdc  ori         $a2, $zero, 0xFFDC
    ctx->pc = 0x207a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65500);
label_207a90:
    // 0x207a90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x207a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_207a94:
    // 0x207a94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x207a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_207a98:
    // 0x207a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207a9c:
    // 0x207a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207aa0:
    // 0x207aa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x207aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_207aa4:
    // 0x207aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207aa8:
    // 0x207aa8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_207aac:
    // 0x207aac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x207aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207ab0:
    // 0x207ab0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_207ab4:
    if (ctx->pc == 0x207AB4u) {
        ctx->pc = 0x207AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AB0u;
        // 0x207ab4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AB8u;
        goto label_207ab8;
    }
    ctx->pc = 0x207AB0u;
    {
        const bool branch_taken_0x207ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ab0) {
            ctx->pc = 0x207AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AB0u;
            // 0x207ab4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207ACCu;
            goto label_207acc;
        }
    }
    ctx->pc = 0x207AB8u;
label_207ab8:
    // 0x207ab8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x207ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_207abc:
    // 0x207abc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x207abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207ac0:
    // 0x207ac0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_207ac4:
    if (ctx->pc == 0x207AC4u) {
        ctx->pc = 0x207AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC0u;
        // 0x207ac4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AC8u;
        goto label_207ac8;
    }
    ctx->pc = 0x207AC0u;
    {
        const bool branch_taken_0x207ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ac0) {
            ctx->pc = 0x207AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AC0u;
            // 0x207ac4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AF0u;
            goto label_207af0;
        }
    }
    ctx->pc = 0x207AC8u;
label_207ac8:
    // 0x207ac8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207acc:
    // 0x207acc: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x207accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_207ad0:
    // 0x207ad0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x207ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_207ad4:
    // 0x207ad4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207ad8:
    // 0x207ad8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x207ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_207adc:
    // 0x207adc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207ae0:
    // 0x207ae0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207ae4:
    // 0x207ae4: 0x40f809  jalr        $v0
label_207ae8:
    if (ctx->pc == 0x207AE8u) {
        ctx->pc = 0x207AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AE4u;
        // 0x207ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AECu;
        goto label_207aec;
    }
    ctx->pc = 0x207AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207AECu);
        ctx->pc = 0x207AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AE4u;
        // 0x207ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AE4u, 0x207AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207AECu;
label_207aec:
    // 0x207aec: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x207aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_207af0:
    // 0x207af0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207af4:
    // 0x207af4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_207af8:
    if (ctx->pc == 0x207AF8u) {
        ctx->pc = 0x207AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AF4u;
        // 0x207af8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AFCu;
        goto label_207afc;
    }
    ctx->pc = 0x207AF4u;
    {
        const bool branch_taken_0x207af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AF4u;
        // 0x207af8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af4) {
            ctx->pc = 0x207B20u;
            goto label_207b20;
        }
    }
    ctx->pc = 0x207AFCu;
label_207afc:
    // 0x207afc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b00:
    // 0x207b00: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x207b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207b04:
    // 0x207b04: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_207b08:
    // 0x207b08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b0c:
    // 0x207b0c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_207b10:
    // 0x207b10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b14:
    // 0x207b14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207b18:
    // 0x207b18: 0x40f809  jalr        $v0
label_207b1c:
    if (ctx->pc == 0x207B1Cu) {
        ctx->pc = 0x207B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B18u;
        // 0x207b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B20u;
        goto label_207b20;
    }
    ctx->pc = 0x207B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207B20u);
        ctx->pc = 0x207B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B18u;
        // 0x207b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B18u, 0x207B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207B20u;
label_207b20:
    // 0x207b20: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207b24:
    // 0x207b24: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x207b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_207b28:
    // 0x207b28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_207b2c:
    if (ctx->pc == 0x207B2Cu) {
        ctx->pc = 0x207B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B28u;
        // 0x207b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B30u;
        goto label_207b30;
    }
    ctx->pc = 0x207B28u;
    {
        const bool branch_taken_0x207b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B28u;
        // 0x207b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b28) {
            ctx->pc = 0x207B68u;
            goto label_207b68;
        }
    }
    ctx->pc = 0x207B30u;
label_207b30:
    // 0x207b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b34:
    // 0x207b34: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_207b38:
    // 0x207b38: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x207b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_207b3c:
    // 0x207b3c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x207b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207b40:
    // 0x207b40: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207b44:
    // 0x207b44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b48:
    // 0x207b48: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_207b4c:
    // 0x207b4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b50:
    // 0x207b50: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x207b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
label_207b54:
    // 0x207b54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b58:
    // 0x207b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207b5c:
    // 0x207b5c: 0x60f809  jalr        $v1
label_207b60:
    if (ctx->pc == 0x207B60u) {
        ctx->pc = 0x207B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B5Cu;
        // 0x207b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B64u;
        goto label_207b64;
    }
    ctx->pc = 0x207B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207B64u);
        ctx->pc = 0x207B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B5Cu;
        // 0x207b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B5Cu, 0x207B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207B64u;
label_207b64:
    // 0x207b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207b68:
    // 0x207b68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207b6c:
    // 0x207b6c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x207b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_207b70:
    // 0x207b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207b74:
    // 0x207b74: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x207b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_207b78:
    // 0x207b78: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_207b7c:
    if (ctx->pc == 0x207B7Cu) {
        ctx->pc = 0x207B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B78u;
        // 0x207b7c: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B80u;
        goto label_207b80;
    }
    ctx->pc = 0x207B78u;
    {
        const bool branch_taken_0x207b78 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x207B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B78u;
        // 0x207b7c: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b78) {
            ctx->pc = 0x207C04u;
            goto label_207c04;
        }
    }
    ctx->pc = 0x207B80u;
label_207b80:
    // 0x207b80: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x207b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_207b84:
    // 0x207b84: 0x0  nop
    ctx->pc = 0x207b84u;
    // NOP
label_207b88:
    // 0x207b88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_207b8c:
    // 0x207b8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_207b90:
    // 0x207b90: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x207b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_207b94:
    // 0x207b94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_207b98:
    if (ctx->pc == 0x207B98u) {
        ctx->pc = 0x207B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B94u;
        // 0x207b98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B9Cu;
        goto label_207b9c;
    }
    ctx->pc = 0x207B94u;
    {
        const bool branch_taken_0x207b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b94) {
            ctx->pc = 0x207B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207B94u;
            // 0x207b98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207BB4u;
            goto label_207bb4;
        }
    }
    ctx->pc = 0x207B9Cu;
label_207b9c:
    // 0x207b9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x207b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207ba0:
    // 0x207ba0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_207ba4:
    if (ctx->pc == 0x207BA4u) {
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0x28420005  slti        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BA8u;
        goto label_207ba8;
    }
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0x28420005  slti        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x207BB0u;
            goto label_207bb0;
        }
    }
    ctx->pc = 0x207BA8u;
label_207ba8:
    // 0x207ba8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_207bac:
    if (ctx->pc == 0x207BACu) {
        ctx->pc = 0x207BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA8u;
        // 0x207bac: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BB0u;
        goto label_207bb0;
    }
    ctx->pc = 0x207BA8u;
    {
        const bool branch_taken_0x207ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ba8) {
            ctx->pc = 0x207BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207BA8u;
            // 0x207bac: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207BCCu;
            goto label_207bcc;
        }
    }
    ctx->pc = 0x207BB0u;
label_207bb0:
    // 0x207bb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207bb4:
    // 0x207bb4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x207bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_207bb8:
    // 0x207bb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207bbc:
    // 0x207bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207bc0:
    // 0x207bc0: 0x40f809  jalr        $v0
label_207bc4:
    if (ctx->pc == 0x207BC4u) {
        ctx->pc = 0x207BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BC0u;
        // 0x207bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BC8u;
        goto label_207bc8;
    }
    ctx->pc = 0x207BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207BC8u);
        ctx->pc = 0x207BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BC0u;
        // 0x207bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BC0u, 0x207BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207BC8u;
label_207bc8:
    // 0x207bc8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x207bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_207bcc:
    // 0x207bcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_207bd0:
    // 0x207bd0: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x207bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_207bd4:
    // 0x207bd4: 0x8e060138  lw          $a2, 0x138($s0)
    ctx->pc = 0x207bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_207bd8:
    // 0x207bd8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x207bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_207bdc:
    // 0x207bdc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x207bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207be0:
    // 0x207be0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x207be0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_207be4:
    // 0x207be4: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x207be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_207be8:
    // 0x207be8: 0x245282a  slt         $a1, $s2, $a1
    ctx->pc = 0x207be8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_207bec:
    // 0x207bec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x207becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207bf0:
    // 0x207bf0: 0x26310054  addiu       $s1, $s1, 0x54
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_207bf4:
    // 0x207bf4: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x207bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_207bf8:
    // 0x207bf8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x207bf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_207bfc:
    // 0x207bfc: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
label_207c00:
    if (ctx->pc == 0x207C00u) {
        ctx->pc = 0x207C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BFCu;
        // 0x207c00: 0xae030138  sw          $v1, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C04u;
        goto label_207c04;
    }
    ctx->pc = 0x207BFCu;
    {
        const bool branch_taken_0x207bfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BFCu;
        // 0x207c00: 0xae030138  sw          $v1, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bfc) {
            ctx->pc = 0x207B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207b88;
        }
    }
    ctx->pc = 0x207C04u;
label_207c04:
    // 0x207c04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x207c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207c08:
    // 0x207c08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207c0c:
    // 0x207c0c: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x207c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
label_207c10:
    // 0x207c10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x207c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207c14:
    // 0x207c14: 0x18600034  blez        $v1, . + 4 + (0x34 << 2)
label_207c18:
    if (ctx->pc == 0x207C18u) {
        ctx->pc = 0x207C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C14u;
        // 0x207c18: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C1Cu;
        goto label_207c1c;
    }
    ctx->pc = 0x207C14u;
    {
        const bool branch_taken_0x207c14 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x207C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C14u;
        // 0x207c18: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c14) {
            ctx->pc = 0x207CE8u;
            goto label_207ce8;
        }
    }
    ctx->pc = 0x207C1Cu;
label_207c1c:
    // 0x207c1c: 0x0  nop
    ctx->pc = 0x207c1cu;
    // NOP
label_207c20:
    // 0x207c20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207c24:
    // 0x207c24: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_207c28:
    // 0x207c28: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x207c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_207c2c:
    // 0x207c2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_207c30:
    // 0x207c30: 0xc07e4e4  jal         func_1F9390
label_207c34:
    if (ctx->pc == 0x207C34u) {
        ctx->pc = 0x207C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C30u;
        // 0x207c34: 0x9e04001c  lwu         $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C38u;
        goto label_207c38;
    }
    ctx->pc = 0x207C30u;
    SET_GPR_U32(ctx, 31, 0x207C38u);
    ctx->pc = 0x207C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C30u;
    // 0x207c34: 0x9e04001c  lwu         $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x207C30u, 0x207C38u)) {
        return;
    }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_207c3c:
    // 0x207c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207c40:
    // 0x207c40: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x207c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_207c44:
    // 0x207c44: 0xc084860  jal         func_212180
label_207c48:
    if (ctx->pc == 0x207C48u) {
        ctx->pc = 0x207C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C44u;
        // 0x207c48: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C4Cu;
        goto label_207c4c;
    }
    ctx->pc = 0x207C44u;
    SET_GPR_U32(ctx, 31, 0x207C4Cu);
    ctx->pc = 0x207C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C44u;
    // 0x207c48: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207C44u, 0x207C4Cu)) {
        return;
    }
    ctx->pc = 0x207C4Cu;
label_207c4c:
    // 0x207c4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207c50:
    // 0x207c50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207c50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207c54:
    // 0x207c54: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207c58:
    // 0x207c58: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x207c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_207c5c:
    // 0x207c5c: 0xc07e4e4  jal         func_1F9390
label_207c60:
    if (ctx->pc == 0x207C60u) {
        ctx->pc = 0x207C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C5Cu;
        // 0x207c60: 0x9e040020  lwu         $a0, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C64u;
        goto label_207c64;
    }
    ctx->pc = 0x207C5Cu;
    SET_GPR_U32(ctx, 31, 0x207C64u);
    ctx->pc = 0x207C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C5Cu;
    // 0x207c60: 0x9e040020  lwu         $a0, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x207C5Cu, 0x207C64u)) {
        return;
    }
    ctx->pc = 0x207C64u;
label_207c64:
    // 0x207c64: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_207c68:
    // 0x207c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207c6c:
    // 0x207c6c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_207c70:
    // 0x207c70: 0xc084860  jal         func_212180
label_207c74:
    if (ctx->pc == 0x207C74u) {
        ctx->pc = 0x207C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C70u;
        // 0x207c74: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C78u;
        goto label_207c78;
    }
    ctx->pc = 0x207C70u;
    SET_GPR_U32(ctx, 31, 0x207C78u);
    ctx->pc = 0x207C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C70u;
    // 0x207c74: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207C70u, 0x207C78u)) {
        return;
    }
    ctx->pc = 0x207C78u;
label_207c78:
    // 0x207c78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207c7c:
    // 0x207c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207c80:
    // 0x207c80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x207c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_207c84:
    // 0x207c84: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x207c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_207c88:
    // 0x207c88: 0xc07e4e4  jal         func_1F9390
label_207c8c:
    if (ctx->pc == 0x207C8Cu) {
        ctx->pc = 0x207C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C88u;
        // 0x207c8c: 0x9e04001c  lwu         $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C90u;
        goto label_207c90;
    }
    ctx->pc = 0x207C88u;
    SET_GPR_U32(ctx, 31, 0x207C90u);
    ctx->pc = 0x207C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C88u;
    // 0x207c8c: 0x9e04001c  lwu         $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x207C88u, 0x207C90u)) {
        return;
    }
    ctx->pc = 0x207C90u;
label_207c90:
    // 0x207c90: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x207c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_207c94:
    // 0x207c94: 0xc084860  jal         func_212180
label_207c98:
    if (ctx->pc == 0x207C98u) {
        ctx->pc = 0x207C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C94u;
        // 0x207c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C9Cu;
        goto label_207c9c;
    }
    ctx->pc = 0x207C94u;
    SET_GPR_U32(ctx, 31, 0x207C9Cu);
    ctx->pc = 0x207C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C94u;
    // 0x207c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207C94u, 0x207C9Cu)) {
        return;
    }
    ctx->pc = 0x207C9Cu;
label_207c9c:
    // 0x207c9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207ca0:
    // 0x207ca0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207ca0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207ca4:
    // 0x207ca4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207ca8:
    // 0x207ca8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x207ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_207cac:
    // 0x207cac: 0xc07e4e4  jal         func_1F9390
label_207cb0:
    if (ctx->pc == 0x207CB0u) {
        ctx->pc = 0x207CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CACu;
        // 0x207cb0: 0x9e040020  lwu         $a0, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CB4u;
        goto label_207cb4;
    }
    ctx->pc = 0x207CACu;
    SET_GPR_U32(ctx, 31, 0x207CB4u);
    ctx->pc = 0x207CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CACu;
    // 0x207cb0: 0x9e040020  lwu         $a0, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x207CACu, 0x207CB4u)) {
        return;
    }
    ctx->pc = 0x207CB4u;
label_207cb4:
    // 0x207cb4: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x207cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_207cb8:
    // 0x207cb8: 0xc084860  jal         func_212180
label_207cbc:
    if (ctx->pc == 0x207CBCu) {
        ctx->pc = 0x207CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CB8u;
        // 0x207cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CC0u;
        goto label_207cc0;
    }
    ctx->pc = 0x207CB8u;
    SET_GPR_U32(ctx, 31, 0x207CC0u);
    ctx->pc = 0x207CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CB8u;
    // 0x207cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207CB8u, 0x207CC0u)) {
        return;
    }
    ctx->pc = 0x207CC0u;
label_207cc0:
    // 0x207cc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207cc4:
    // 0x207cc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207cc8:
    // 0x207cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207ccc:
    // 0x207ccc: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x207cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_207cd0:
    // 0x207cd0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x207cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_207cd4:
    // 0x207cd4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x207cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_207cd8:
    // 0x207cd8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207cdc:
    // 0x207cdc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_207ce0:
    // 0x207ce0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_207ce4:
    if (ctx->pc == 0x207CE4u) {
        ctx->pc = 0x207CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CE0u;
        // 0x207ce4: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CE8u;
        goto label_207ce8;
    }
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CE0u;
        // 0x207ce4: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207c20;
        }
    }
    ctx->pc = 0x207CE8u;
label_207ce8:
    // 0x207ce8: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_207cec:
    // 0x207cec: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x207cecu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_207cf0:
    // 0x207cf0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x207cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_207cf4:
    // 0x207cf4: 0xc084860  jal         func_212180
label_207cf8:
    if (ctx->pc == 0x207CF8u) {
        ctx->pc = 0x207CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CF4u;
        // 0x207cf8: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CFCu;
        goto label_207cfc;
    }
    ctx->pc = 0x207CF4u;
    SET_GPR_U32(ctx, 31, 0x207CFCu);
    ctx->pc = 0x207CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CF4u;
    // 0x207cf8: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207CF4u, 0x207CFCu)) {
        return;
    }
    ctx->pc = 0x207CFCu;
label_207cfc:
    // 0x207cfc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x207cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_207d00:
    // 0x207d00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207d04:
    // 0x207d04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207d08:
    // 0x207d08: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207d0c:
    // 0x207d0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_207d10:
    // 0x207d10: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_207d14:
    if (ctx->pc == 0x207D14u) {
        ctx->pc = 0x207D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D10u;
        // 0x207d14: 0xae020140  sw          $v0, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D18u;
        goto label_207d18;
    }
    ctx->pc = 0x207D10u;
    {
        const bool branch_taken_0x207d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D10u;
        // 0x207d14: 0xae020140  sw          $v0, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d10) {
            ctx->pc = 0x207D24u;
            goto label_207d24;
        }
    }
    ctx->pc = 0x207D18u;
label_207d18:
    // 0x207d18: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_207d1c:
    // 0x207d1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_207d20:
    if (ctx->pc == 0x207D20u) {
        ctx->pc = 0x207D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D1Cu;
        // 0x207d20: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D24u;
        goto label_207d24;
    }
    ctx->pc = 0x207D1Cu;
    {
        const bool branch_taken_0x207d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d1c) {
            ctx->pc = 0x207D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207D1Cu;
            // 0x207d20: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207D34u;
            goto label_207d34;
        }
    }
    ctx->pc = 0x207D24u;
label_207d24:
    // 0x207d24: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_207d28:
    // 0x207d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207d2c:
    // 0x207d2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_207d30:
    if (ctx->pc == 0x207D30u) {
        ctx->pc = 0x207D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D2Cu;
        // 0x207d30: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D34u;
        goto label_207d34;
    }
    ctx->pc = 0x207D2Cu;
    {
        const bool branch_taken_0x207d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D2Cu;
        // 0x207d30: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d2c) {
            ctx->pc = 0x207D38u;
            goto label_207d38;
        }
    }
    ctx->pc = 0x207D34u;
label_207d34:
    // 0x207d34: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x207d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_207d38:
    // 0x207d38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x207d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207d3c:
    // 0x207d3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x207d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207d40:
    // 0x207d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207d44:
    // 0x207d44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x207d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207d48:
    // 0x207d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207d4c:
    // 0x207d4c: 0x3e00008  jr          $ra
label_207d50:
    if (ctx->pc == 0x207D50u) {
        ctx->pc = 0x207D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D4Cu;
        // 0x207d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D54u;
        goto label_207d54;
    }
    ctx->pc = 0x207D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D4Cu;
        // 0x207d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D54u;
label_207d54:
    // 0x207d54: 0x0  nop
    ctx->pc = 0x207d54u;
    // NOP
    ctx->pc = 0x207d58u;
}
