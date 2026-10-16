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

// Function: sub_00184B60
// Address: 0x184b60 - 0x184ca0
void sub_00184B60_0x184b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184B60_0x184b60");
#endif

    switch (ctx->pc) {
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        case 0x184b7cu: goto label_184b7c;
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        case 0x184c40u: goto label_184c40;
        case 0x184c44u: goto label_184c44;
        case 0x184c48u: goto label_184c48;
        case 0x184c4cu: goto label_184c4c;
        case 0x184c50u: goto label_184c50;
        case 0x184c54u: goto label_184c54;
        case 0x184c58u: goto label_184c58;
        case 0x184c5cu: goto label_184c5c;
        case 0x184c60u: goto label_184c60;
        case 0x184c64u: goto label_184c64;
        case 0x184c68u: goto label_184c68;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c70u: goto label_184c70;
        case 0x184c74u: goto label_184c74;
        case 0x184c78u: goto label_184c78;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c80u: goto label_184c80;
        case 0x184c84u: goto label_184c84;
        case 0x184c88u: goto label_184c88;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c90u: goto label_184c90;
        case 0x184c94u: goto label_184c94;
        case 0x184c98u: goto label_184c98;
        case 0x184c9cu: goto label_184c9c;
        default: break;
    }

    ctx->pc = 0x184b60u;

label_184b60:
    // 0x184b60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_184b64:
    // 0x184b64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_184b68:
    // 0x184b68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x184b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_184b6c:
    // 0x184b6c: 0x244285b0  addiu       $v0, $v0, -0x7A50
    ctx->pc = 0x184b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
label_184b70:
    // 0x184b70: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x184b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_184b74:
    // 0x184b74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x184b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184b78:
    // 0x184b78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x184b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_184b7c:
    // 0x184b7c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x184b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_184b80:
    // 0x184b80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x184b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_184b84:
    // 0x184b84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_184b88:
    // 0x184b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_184b8c:
    // 0x184b8c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x184b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_184b90:
    // 0x184b90: 0x8e830068  lw          $v1, 0x68($s4)
    ctx->pc = 0x184b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_184b94:
    // 0x184b94: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_184b98:
    if (ctx->pc == 0x184B98u) {
        ctx->pc = 0x184B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B94u;
        // 0x184b98: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B9Cu;
        goto label_184b9c;
    }
    ctx->pc = 0x184B94u;
    {
        const bool branch_taken_0x184b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B94u;
        // 0x184b98: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b94) {
            ctx->pc = 0x184C10u;
            goto label_184c10;
        }
    }
    ctx->pc = 0x184B9Cu;
label_184b9c:
    // 0x184b9c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x184b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_184ba0:
    // 0x184ba0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x184ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_184ba4:
    // 0x184ba4: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x184ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
label_184ba8:
    // 0x184ba8: 0xc06054c  jal         func_181530
label_184bac:
    if (ctx->pc == 0x184BACu) {
        ctx->pc = 0x184BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA8u;
        // 0x184bac: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BB0u;
        goto label_184bb0;
    }
    ctx->pc = 0x184BA8u;
    SET_GPR_U32(ctx, 31, 0x184BB0u);
    ctx->pc = 0x184BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BA8u;
    // 0x184bac: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181530u, 0x184BA8u, 0x184BB0u)) {
        return;
    }
    ctx->pc = 0x184BB0u;
label_184bb0:
    // 0x184bb0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x184bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_184bb4:
    // 0x184bb4: 0x8e048a2c  lw          $a0, -0x75D4($s0)
    ctx->pc = 0x184bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937132)));
label_184bb8:
    // 0x184bb8: 0xc0c99e6  jal         func_326798
label_184bbc:
    if (ctx->pc == 0x184BBCu) {
        ctx->pc = 0x184BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BB8u;
        // 0x184bbc: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BC0u;
        goto label_184bc0;
    }
    ctx->pc = 0x184BB8u;
    SET_GPR_U32(ctx, 31, 0x184BC0u);
    ctx->pc = 0x184BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BB8u;
    // 0x184bbc: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x184BB8u, 0x184BC0u)) {
        return;
    }
    ctx->pc = 0x184BC0u;
label_184bc0:
    // 0x184bc0: 0xc0c99e6  jal         func_326798
label_184bc4:
    if (ctx->pc == 0x184BC4u) {
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0x8e448a28  lw          $a0, -0x75D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BC8u;
        goto label_184bc8;
    }
    ctx->pc = 0x184BC0u;
    SET_GPR_U32(ctx, 31, 0x184BC8u);
    ctx->pc = 0x184BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BC0u;
    // 0x184bc4: 0x8e448a28  lw          $a0, -0x75D8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x184BC0u, 0x184BC8u)) {
        return;
    }
    ctx->pc = 0x184BC8u;
label_184bc8:
    // 0x184bc8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_184bcc:
    // 0x184bcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184bd0:
    // 0x184bd0: 0xac608a24  sw          $zero, -0x75DC($v1)
    ctx->pc = 0x184bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937124), GPR_U32(ctx, 0));
label_184bd4:
    // 0x184bd4: 0xc0c5486  jal         func_315218
label_184bd8:
    if (ctx->pc == 0x184BD8u) {
        ctx->pc = 0x184BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BD4u;
        // 0x184bd8: 0xae008a2c  sw          $zero, -0x75D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294937132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BDCu;
        goto label_184bdc;
    }
    ctx->pc = 0x184BD4u;
    SET_GPR_U32(ctx, 31, 0x184BDCu);
    ctx->pc = 0x184BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BD4u;
    // 0x184bd8: 0xae008a2c  sw          $zero, -0x75D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x184BD4u, 0x184BDCu)) {
        return;
    }
    ctx->pc = 0x184BDCu;
label_184bdc:
    // 0x184bdc: 0xc0c5486  jal         func_315218
label_184be0:
    if (ctx->pc == 0x184BE0u) {
        ctx->pc = 0x184BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BDCu;
        // 0x184be0: 0x8e248a20  lw          $a0, -0x75E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BE4u;
        goto label_184be4;
    }
    ctx->pc = 0x184BDCu;
    SET_GPR_U32(ctx, 31, 0x184BE4u);
    ctx->pc = 0x184BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BDCu;
    // 0x184be0: 0x8e248a20  lw          $a0, -0x75E0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x184BDCu, 0x184BE4u)) {
        return;
    }
    ctx->pc = 0x184BE4u;
label_184be4:
    // 0x184be4: 0xae408a28  sw          $zero, -0x75D8($s2)
    ctx->pc = 0x184be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294937128), GPR_U32(ctx, 0));
label_184be8:
    // 0x184be8: 0xc060ba0  jal         func_182E80
label_184bec:
    if (ctx->pc == 0x184BECu) {
        ctx->pc = 0x184BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BE8u;
        // 0x184bec: 0xae208a20  sw          $zero, -0x75E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294937120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BF0u;
        goto label_184bf0;
    }
    ctx->pc = 0x184BE8u;
    SET_GPR_U32(ctx, 31, 0x184BF0u);
    ctx->pc = 0x184BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BE8u;
    // 0x184bec: 0xae208a20  sw          $zero, -0x75E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182E80u, 0x184BE8u, 0x184BF0u)) {
        return;
    }
    ctx->pc = 0x184BF0u;
label_184bf0:
    // 0x184bf0: 0xc0bae6a  jal         func_2EB9A8
label_184bf4:
    if (ctx->pc == 0x184BF4u) {
        ctx->pc = 0x184BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BF0u;
        // 0x184bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BF8u;
        goto label_184bf8;
    }
    ctx->pc = 0x184BF0u;
    SET_GPR_U32(ctx, 31, 0x184BF8u);
    ctx->pc = 0x184BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BF0u;
    // 0x184bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB9A8u, 0x184BF0u, 0x184BF8u)) {
        return;
    }
    ctx->pc = 0x184BF8u;
label_184bf8:
    // 0x184bf8: 0xc0baea2  jal         func_2EBA88
label_184bfc:
    if (ctx->pc == 0x184BFCu) {
        ctx->pc = 0x184BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BF8u;
        // 0x184bfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C00u;
        goto label_184c00;
    }
    ctx->pc = 0x184BF8u;
    SET_GPR_U32(ctx, 31, 0x184C00u);
    ctx->pc = 0x184BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BF8u;
    // 0x184bfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EBA88u, 0x184BF8u, 0x184C00u)) {
        return;
    }
    ctx->pc = 0x184C00u;
label_184c00:
    // 0x184c00: 0xc0438d0  jal         func_10E340
label_184c04:
    if (ctx->pc == 0x184C04u) {
        ctx->pc = 0x184C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C00u;
        // 0x184c04: 0x8e6482f0  lw          $a0, -0x7D10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C08u;
        goto label_184c08;
    }
    ctx->pc = 0x184C00u;
    SET_GPR_U32(ctx, 31, 0x184C08u);
    ctx->pc = 0x184C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C00u;
    // 0x184c04: 0x8e6482f0  lw          $a0, -0x7D10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E340u, 0x184C00u, 0x184C08u)) {
        return;
    }
    ctx->pc = 0x184C08u;
label_184c08:
    // 0x184c08: 0xc0438e6  jal         func_10E398
label_184c0c:
    if (ctx->pc == 0x184C0Cu) {
        ctx->pc = 0x184C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C08u;
        // 0x184c0c: 0x8e6482f0  lw          $a0, -0x7D10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C10u;
        goto label_184c10;
    }
    ctx->pc = 0x184C08u;
    SET_GPR_U32(ctx, 31, 0x184C10u);
    ctx->pc = 0x184C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C08u;
    // 0x184c0c: 0x8e6482f0  lw          $a0, -0x7D10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E398u, 0x184C08u, 0x184C10u)) {
        return;
    }
    ctx->pc = 0x184C10u;
label_184c10:
    // 0x184c10: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x184c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_184c14:
    // 0x184c14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184c18:
    // 0x184c18: 0xc07fb0c  jal         func_1FEC30
label_184c1c:
    if (ctx->pc == 0x184C1Cu) {
        ctx->pc = 0x184C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C18u;
        // 0x184c1c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C20u;
        goto label_184c20;
    }
    ctx->pc = 0x184C18u;
    SET_GPR_U32(ctx, 31, 0x184C20u);
    ctx->pc = 0x184C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C18u;
    // 0x184c1c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x184C18u, 0x184C20u)) {
        return;
    }
    ctx->pc = 0x184C20u;
label_184c20:
    // 0x184c20: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x184c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_184c24:
    // 0x184c24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184c28:
    // 0x184c28: 0xc07fb0c  jal         func_1FEC30
label_184c2c:
    if (ctx->pc == 0x184C2Cu) {
        ctx->pc = 0x184C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C28u;
        // 0x184c2c: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C30u;
        goto label_184c30;
    }
    ctx->pc = 0x184C28u;
    SET_GPR_U32(ctx, 31, 0x184C30u);
    ctx->pc = 0x184C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C28u;
    // 0x184c2c: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x184C28u, 0x184C30u)) {
        return;
    }
    ctx->pc = 0x184C30u;
label_184c30:
    // 0x184c30: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_184c34:
    // 0x184c34: 0x8c628a30  lw          $v0, -0x75D0($v1)
    ctx->pc = 0x184c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937136)));
label_184c38:
    // 0x184c38: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
label_184c3c:
    if (ctx->pc == 0x184C3Cu) {
        ctx->pc = 0x184C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C38u;
        // 0x184c3c: 0xac608a30  sw          $zero, -0x75D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C40u;
        goto label_184c40;
    }
    ctx->pc = 0x184C38u;
    {
        const bool branch_taken_0x184c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x184c38) {
            ctx->pc = 0x184C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184C38u;
            // 0x184c3c: 0xac608a30  sw          $zero, -0x75D0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294937136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184C40u;
            goto label_184c40;
        }
    }
    ctx->pc = 0x184C40u;
label_184c40:
    // 0x184c40: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_184c44:
    // 0x184c44: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x184c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_184c48:
    // 0x184c48: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_184c4c:
    // 0x184c4c: 0x40f809  jalr        $v0
label_184c50:
    if (ctx->pc == 0x184C50u) {
        ctx->pc = 0x184C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C4Cu;
        // 0x184c50: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C54u;
        goto label_184c54;
    }
    ctx->pc = 0x184C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184C54u);
        ctx->pc = 0x184C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C4Cu;
        // 0x184c50: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C4Cu, 0x184C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184C54u;
label_184c54:
    // 0x184c54: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_184c58:
    // 0x184c58: 0x40f809  jalr        $v0
label_184c5c:
    if (ctx->pc == 0x184C5Cu) {
        ctx->pc = 0x184C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C58u;
        // 0x184c5c: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C60u;
        goto label_184c60;
    }
    ctx->pc = 0x184C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184C60u);
        ctx->pc = 0x184C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C58u;
        // 0x184c5c: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C58u, 0x184C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184C60u;
label_184c60:
    // 0x184c60: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x184c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_184c64:
    // 0x184c64: 0x60f809  jalr        $v1
label_184c68:
    if (ctx->pc == 0x184C68u) {
        ctx->pc = 0x184C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C64u;
        // 0x184c68: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C6Cu;
        goto label_184c6c;
    }
    ctx->pc = 0x184C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184C6Cu);
        ctx->pc = 0x184C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C64u;
        // 0x184c68: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C64u, 0x184C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184C6Cu;
label_184c6c:
    // 0x184c6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184c70:
    // 0x184c70: 0xc07fc62  jal         func_1FF188
label_184c74:
    if (ctx->pc == 0x184C74u) {
        ctx->pc = 0x184C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C70u;
        // 0x184c74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C78u;
        goto label_184c78;
    }
    ctx->pc = 0x184C70u;
    SET_GPR_U32(ctx, 31, 0x184C78u);
    ctx->pc = 0x184C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C70u;
    // 0x184c74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x184C70u, 0x184C78u)) {
        return;
    }
    ctx->pc = 0x184C78u;
label_184c78:
    // 0x184c78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x184c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184c7c:
    // 0x184c7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x184c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184c80:
    // 0x184c80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x184c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_184c84:
    // 0x184c84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184c88:
    // 0x184c88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x184c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184c8c:
    // 0x184c8c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x184c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184c90:
    // 0x184c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184c94:
    // 0x184c94: 0x3e00008  jr          $ra
label_184c98:
    if (ctx->pc == 0x184C98u) {
        ctx->pc = 0x184C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C94u;
        // 0x184c98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C9Cu;
        goto label_184c9c;
    }
    ctx->pc = 0x184C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C94u;
        // 0x184c98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184C9Cu;
label_184c9c:
    // 0x184c9c: 0x0  nop
    ctx->pc = 0x184c9cu;
    // NOP
    ctx->pc = 0x184ca0u;
}
