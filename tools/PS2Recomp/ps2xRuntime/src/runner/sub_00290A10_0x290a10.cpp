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

// Function: sub_00290A10
// Address: 0x290a10 - 0x290ca8
void sub_00290A10_0x290a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290A10_0x290a10");
#endif

    switch (ctx->pc) {
        case 0x290a10u: goto label_290a10;
        case 0x290a14u: goto label_290a14;
        case 0x290a18u: goto label_290a18;
        case 0x290a1cu: goto label_290a1c;
        case 0x290a20u: goto label_290a20;
        case 0x290a24u: goto label_290a24;
        case 0x290a28u: goto label_290a28;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a30u: goto label_290a30;
        case 0x290a34u: goto label_290a34;
        case 0x290a38u: goto label_290a38;
        case 0x290a3cu: goto label_290a3c;
        case 0x290a40u: goto label_290a40;
        case 0x290a44u: goto label_290a44;
        case 0x290a48u: goto label_290a48;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a50u: goto label_290a50;
        case 0x290a54u: goto label_290a54;
        case 0x290a58u: goto label_290a58;
        case 0x290a5cu: goto label_290a5c;
        case 0x290a60u: goto label_290a60;
        case 0x290a64u: goto label_290a64;
        case 0x290a68u: goto label_290a68;
        case 0x290a6cu: goto label_290a6c;
        case 0x290a70u: goto label_290a70;
        case 0x290a74u: goto label_290a74;
        case 0x290a78u: goto label_290a78;
        case 0x290a7cu: goto label_290a7c;
        case 0x290a80u: goto label_290a80;
        case 0x290a84u: goto label_290a84;
        case 0x290a88u: goto label_290a88;
        case 0x290a8cu: goto label_290a8c;
        case 0x290a90u: goto label_290a90;
        case 0x290a94u: goto label_290a94;
        case 0x290a98u: goto label_290a98;
        case 0x290a9cu: goto label_290a9c;
        case 0x290aa0u: goto label_290aa0;
        case 0x290aa4u: goto label_290aa4;
        case 0x290aa8u: goto label_290aa8;
        case 0x290aacu: goto label_290aac;
        case 0x290ab0u: goto label_290ab0;
        case 0x290ab4u: goto label_290ab4;
        case 0x290ab8u: goto label_290ab8;
        case 0x290abcu: goto label_290abc;
        case 0x290ac0u: goto label_290ac0;
        case 0x290ac4u: goto label_290ac4;
        case 0x290ac8u: goto label_290ac8;
        case 0x290accu: goto label_290acc;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ad4u: goto label_290ad4;
        case 0x290ad8u: goto label_290ad8;
        case 0x290adcu: goto label_290adc;
        case 0x290ae0u: goto label_290ae0;
        case 0x290ae4u: goto label_290ae4;
        case 0x290ae8u: goto label_290ae8;
        case 0x290aecu: goto label_290aec;
        case 0x290af0u: goto label_290af0;
        case 0x290af4u: goto label_290af4;
        case 0x290af8u: goto label_290af8;
        case 0x290afcu: goto label_290afc;
        case 0x290b00u: goto label_290b00;
        case 0x290b04u: goto label_290b04;
        case 0x290b08u: goto label_290b08;
        case 0x290b0cu: goto label_290b0c;
        case 0x290b10u: goto label_290b10;
        case 0x290b14u: goto label_290b14;
        case 0x290b18u: goto label_290b18;
        case 0x290b1cu: goto label_290b1c;
        case 0x290b20u: goto label_290b20;
        case 0x290b24u: goto label_290b24;
        case 0x290b28u: goto label_290b28;
        case 0x290b2cu: goto label_290b2c;
        case 0x290b30u: goto label_290b30;
        case 0x290b34u: goto label_290b34;
        case 0x290b38u: goto label_290b38;
        case 0x290b3cu: goto label_290b3c;
        case 0x290b40u: goto label_290b40;
        case 0x290b44u: goto label_290b44;
        case 0x290b48u: goto label_290b48;
        case 0x290b4cu: goto label_290b4c;
        case 0x290b50u: goto label_290b50;
        case 0x290b54u: goto label_290b54;
        case 0x290b58u: goto label_290b58;
        case 0x290b5cu: goto label_290b5c;
        case 0x290b60u: goto label_290b60;
        case 0x290b64u: goto label_290b64;
        case 0x290b68u: goto label_290b68;
        case 0x290b6cu: goto label_290b6c;
        case 0x290b70u: goto label_290b70;
        case 0x290b74u: goto label_290b74;
        case 0x290b78u: goto label_290b78;
        case 0x290b7cu: goto label_290b7c;
        case 0x290b80u: goto label_290b80;
        case 0x290b84u: goto label_290b84;
        case 0x290b88u: goto label_290b88;
        case 0x290b8cu: goto label_290b8c;
        case 0x290b90u: goto label_290b90;
        case 0x290b94u: goto label_290b94;
        case 0x290b98u: goto label_290b98;
        case 0x290b9cu: goto label_290b9c;
        case 0x290ba0u: goto label_290ba0;
        case 0x290ba4u: goto label_290ba4;
        case 0x290ba8u: goto label_290ba8;
        case 0x290bacu: goto label_290bac;
        case 0x290bb0u: goto label_290bb0;
        case 0x290bb4u: goto label_290bb4;
        case 0x290bb8u: goto label_290bb8;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bc0u: goto label_290bc0;
        case 0x290bc4u: goto label_290bc4;
        case 0x290bc8u: goto label_290bc8;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd0u: goto label_290bd0;
        case 0x290bd4u: goto label_290bd4;
        case 0x290bd8u: goto label_290bd8;
        case 0x290bdcu: goto label_290bdc;
        case 0x290be0u: goto label_290be0;
        case 0x290be4u: goto label_290be4;
        case 0x290be8u: goto label_290be8;
        case 0x290becu: goto label_290bec;
        case 0x290bf0u: goto label_290bf0;
        case 0x290bf4u: goto label_290bf4;
        case 0x290bf8u: goto label_290bf8;
        case 0x290bfcu: goto label_290bfc;
        case 0x290c00u: goto label_290c00;
        case 0x290c04u: goto label_290c04;
        case 0x290c08u: goto label_290c08;
        case 0x290c0cu: goto label_290c0c;
        case 0x290c10u: goto label_290c10;
        case 0x290c14u: goto label_290c14;
        case 0x290c18u: goto label_290c18;
        case 0x290c1cu: goto label_290c1c;
        case 0x290c20u: goto label_290c20;
        case 0x290c24u: goto label_290c24;
        case 0x290c28u: goto label_290c28;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c30u: goto label_290c30;
        case 0x290c34u: goto label_290c34;
        case 0x290c38u: goto label_290c38;
        case 0x290c3cu: goto label_290c3c;
        case 0x290c40u: goto label_290c40;
        case 0x290c44u: goto label_290c44;
        case 0x290c48u: goto label_290c48;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c50u: goto label_290c50;
        case 0x290c54u: goto label_290c54;
        case 0x290c58u: goto label_290c58;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c60u: goto label_290c60;
        case 0x290c64u: goto label_290c64;
        case 0x290c68u: goto label_290c68;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c70u: goto label_290c70;
        case 0x290c74u: goto label_290c74;
        case 0x290c78u: goto label_290c78;
        case 0x290c7cu: goto label_290c7c;
        case 0x290c80u: goto label_290c80;
        case 0x290c84u: goto label_290c84;
        case 0x290c88u: goto label_290c88;
        case 0x290c8cu: goto label_290c8c;
        case 0x290c90u: goto label_290c90;
        case 0x290c94u: goto label_290c94;
        case 0x290c98u: goto label_290c98;
        case 0x290c9cu: goto label_290c9c;
        case 0x290ca0u: goto label_290ca0;
        case 0x290ca4u: goto label_290ca4;
        default: break;
    }

    ctx->pc = 0x290a10u;

label_290a10:
    // 0x290a10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x290a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_290a14:
    // 0x290a14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x290a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_290a18:
    // 0x290a18: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x290a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_290a1c:
    // 0x290a1c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x290a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_290a20:
    // 0x290a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290a24:
    // 0x290a24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x290a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290a28:
    // 0x290a28: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x290a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_290a2c:
    // 0x290a2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x290a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_290a30:
    // 0x290a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290a34:
    // 0x290a34: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x290a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_290a38:
    // 0x290a38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_290a3c:
    // 0x290a3c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x290a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_290a40:
    // 0x290a40: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x290a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_290a44:
    // 0x290a44: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x290a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_290a48:
    // 0x290a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_290a4c:
    // 0x290a4c: 0xc093546  jal         func_24D518
label_290a50:
    if (ctx->pc == 0x290A50u) {
        ctx->pc = 0x290A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A4Cu;
        // 0x290a50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A54u;
        goto label_290a54;
    }
    ctx->pc = 0x290A4Cu;
    SET_GPR_U32(ctx, 31, 0x290A54u);
    ctx->pc = 0x290A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A4Cu;
    // 0x290a50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x290A4Cu, 0x290A54u)) {
        return;
    }
    ctx->pc = 0x290A54u;
label_290a54:
    // 0x290a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290a58:
    // 0x290a58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_290a5c:
    // 0x290a5c: 0x16020087  bne         $s0, $v0, . + 4 + (0x87 << 2)
label_290a60:
    if (ctx->pc == 0x290A60u) {
        ctx->pc = 0x290A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A5Cu;
        // 0x290a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A64u;
        goto label_290a64;
    }
    ctx->pc = 0x290A5Cu;
    {
        const bool branch_taken_0x290a5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x290A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A5Cu;
        // 0x290a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a5c) {
            ctx->pc = 0x290C7Cu;
            goto label_290c7c;
        }
    }
    ctx->pc = 0x290A64u;
label_290a64:
    // 0x290a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290a68:
    // 0x290a68: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x290a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_290a6c:
    // 0x290a6c: 0xc093546  jal         func_24D518
label_290a70:
    if (ctx->pc == 0x290A70u) {
        ctx->pc = 0x290A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A6Cu;
        // 0x290a70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A74u;
        goto label_290a74;
    }
    ctx->pc = 0x290A6Cu;
    SET_GPR_U32(ctx, 31, 0x290A74u);
    ctx->pc = 0x290A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A6Cu;
    // 0x290a70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x290A6Cu, 0x290A74u)) {
        return;
    }
    ctx->pc = 0x290A74u;
label_290a74:
    // 0x290a74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x290a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290a78:
    // 0x290a78: 0x16900080  bne         $s4, $s0, . + 4 + (0x80 << 2)
label_290a7c:
    if (ctx->pc == 0x290A7Cu) {
        ctx->pc = 0x290A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A78u;
        // 0x290a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A80u;
        goto label_290a80;
    }
    ctx->pc = 0x290A78u;
    {
        const bool branch_taken_0x290a78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x290A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A78u;
        // 0x290a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a78) {
            ctx->pc = 0x290C7Cu;
            goto label_290c7c;
        }
    }
    ctx->pc = 0x290A80u;
label_290a80:
    // 0x290a80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_290a84:
    // 0x290a84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_290a88:
    // 0x290a88: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x290a88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290a8c:
    // 0x290a8c: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_290a90:
    // 0x290a90: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_290a94:
    // 0x290a94: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x290a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_290a98:
    // 0x290a98: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x290a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_290a9c:
    // 0x290a9c: 0x40f809  jalr        $v0
label_290aa0:
    if (ctx->pc == 0x290AA0u) {
        ctx->pc = 0x290AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A9Cu;
        // 0x290aa0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AA4u;
        goto label_290aa4;
    }
    ctx->pc = 0x290A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290AA4u);
        ctx->pc = 0x290AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A9Cu;
        // 0x290aa0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A9Cu, 0x290AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290AA4u;
label_290aa4:
    // 0x290aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x290aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290aa8:
    // 0x290aa8: 0x1240006f  beqz        $s2, . + 4 + (0x6F << 2)
label_290aac:
    if (ctx->pc == 0x290AACu) {
        ctx->pc = 0x290AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA8u;
        // 0x290aac: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AB0u;
        goto label_290ab0;
    }
    ctx->pc = 0x290AA8u;
    {
        const bool branch_taken_0x290aa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA8u;
        // 0x290aac: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa8) {
            ctx->pc = 0x290C68u;
            goto label_290c68;
        }
    }
    ctx->pc = 0x290AB0u;
label_290ab0:
    // 0x290ab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290ab4:
    // 0x290ab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290ab8:
    // 0x290ab8: 0xc093546  jal         func_24D518
label_290abc:
    if (ctx->pc == 0x290ABCu) {
        ctx->pc = 0x290ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AB8u;
        // 0x290abc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AC0u;
        goto label_290ac0;
    }
    ctx->pc = 0x290AB8u;
    SET_GPR_U32(ctx, 31, 0x290AC0u);
    ctx->pc = 0x290ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AB8u;
    // 0x290abc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x290AB8u, 0x290AC0u)) {
        return;
    }
    ctx->pc = 0x290AC0u;
label_290ac0:
    // 0x290ac0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_290ac4:
    // 0x290ac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_290ac8:
    // 0x290ac8: 0x14430068  bne         $v0, $v1, . + 4 + (0x68 << 2)
label_290acc:
    if (ctx->pc == 0x290ACCu) {
        ctx->pc = 0x290ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AC8u;
        // 0x290acc: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AD0u;
        goto label_290ad0;
    }
    ctx->pc = 0x290AC8u;
    {
        const bool branch_taken_0x290ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AC8u;
        // 0x290acc: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ac8) {
            ctx->pc = 0x290C6Cu;
            goto label_290c6c;
        }
    }
    ctx->pc = 0x290AD0u;
label_290ad0:
    // 0x290ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290ad4:
    // 0x290ad4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x290ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_290ad8:
    // 0x290ad8: 0xc093546  jal         func_24D518
label_290adc:
    if (ctx->pc == 0x290ADCu) {
        ctx->pc = 0x290ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AD8u;
        // 0x290adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AE0u;
        goto label_290ae0;
    }
    ctx->pc = 0x290AD8u;
    SET_GPR_U32(ctx, 31, 0x290AE0u);
    ctx->pc = 0x290ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AD8u;
    // 0x290adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x290AD8u, 0x290AE0u)) {
        return;
    }
    ctx->pc = 0x290AE0u;
label_290ae0:
    // 0x290ae0: 0x14540062  bne         $v0, $s4, . + 4 + (0x62 << 2)
label_290ae4:
    if (ctx->pc == 0x290AE4u) {
        ctx->pc = 0x290AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AE0u;
        // 0x290ae4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AE8u;
        goto label_290ae8;
    }
    ctx->pc = 0x290AE0u;
    {
        const bool branch_taken_0x290ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x290AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AE0u;
        // 0x290ae4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ae0) {
            ctx->pc = 0x290C6Cu;
            goto label_290c6c;
        }
    }
    ctx->pc = 0x290AE8u;
label_290ae8:
    // 0x290ae8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x290ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_290aec:
    // 0x290aec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_290af0:
    // 0x290af0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x290af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_290af4:
    // 0x290af4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_290af8:
    // 0x290af8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x290af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_290afc:
    // 0x290afc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x290afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_290b00:
    // 0x290b00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_290b04:
    // 0x290b04: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_290b08:
    if (ctx->pc == 0x290B08u) {
        ctx->pc = 0x290B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B04u;
        // 0x290b08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B0Cu;
        goto label_290b0c;
    }
    ctx->pc = 0x290B04u;
    {
        const bool branch_taken_0x290b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B04u;
        // 0x290b08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b04) {
            ctx->pc = 0x290B50u;
            goto label_290b50;
        }
    }
    ctx->pc = 0x290B0Cu;
label_290b0c:
    // 0x290b0c: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x290b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_290b10:
    // 0x290b10: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_290b14:
    // 0x290b14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_290b18:
    // 0x290b18: 0x40f809  jalr        $v0
label_290b1c:
    if (ctx->pc == 0x290B1Cu) {
        ctx->pc = 0x290B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B18u;
        // 0x290b1c: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B20u;
        goto label_290b20;
    }
    ctx->pc = 0x290B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290B20u);
        ctx->pc = 0x290B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B18u;
        // 0x290b1c: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B18u, 0x290B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290B20u;
label_290b20:
    // 0x290b20: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x290b20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290b24:
    // 0x290b24: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_290b28:
    if (ctx->pc == 0x290B28u) {
        ctx->pc = 0x290B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B24u;
        // 0x290b28: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B2Cu;
        goto label_290b2c;
    }
    ctx->pc = 0x290B24u;
    {
        const bool branch_taken_0x290b24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B24u;
        // 0x290b28: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b24) {
            ctx->pc = 0x290B54u;
            goto label_290b54;
        }
    }
    ctx->pc = 0x290B2Cu;
label_290b2c:
    // 0x290b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290b30:
    // 0x290b30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x290b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_290b34:
    // 0x290b34: 0xc093546  jal         func_24D518
label_290b38:
    if (ctx->pc == 0x290B38u) {
        ctx->pc = 0x290B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B34u;
        // 0x290b38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B3Cu;
        goto label_290b3c;
    }
    ctx->pc = 0x290B34u;
    SET_GPR_U32(ctx, 31, 0x290B3Cu);
    ctx->pc = 0x290B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B34u;
    // 0x290b38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x290B34u, 0x290B3Cu)) {
        return;
    }
    ctx->pc = 0x290B3Cu;
label_290b3c:
    // 0x290b3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x290b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_290b40:
    // 0x290b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_290b44:
    // 0x290b44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x290b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_290b48:
    // 0x290b48: 0x10000002  b           . + 4 + (0x2 << 2)
label_290b4c:
    if (ctx->pc == 0x290B4Cu) {
        ctx->pc = 0x290B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B48u;
        // 0x290b4c: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B50u;
        goto label_290b50;
    }
    ctx->pc = 0x290B48u;
    {
        const bool branch_taken_0x290b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B48u;
        // 0x290b4c: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b48) {
            ctx->pc = 0x290B54u;
            goto label_290b54;
        }
    }
    ctx->pc = 0x290B50u;
label_290b50:
    // 0x290b50: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x290b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290b54:
    // 0x290b54: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
label_290b58:
    if (ctx->pc == 0x290B58u) {
        ctx->pc = 0x290B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B54u;
        // 0x290b58: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B5Cu;
        goto label_290b5c;
    }
    ctx->pc = 0x290B54u;
    {
        const bool branch_taken_0x290b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B54u;
        // 0x290b58: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b54) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290B5Cu;
label_290b5c:
    // 0x290b5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x290b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_290b60:
    // 0x290b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_290b64:
    // 0x290b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290b68:
    // 0x290b68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_290b6c:
    // 0x290b6c: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x290b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_290b70:
    // 0x290b70: 0xc0a3bda  jal         func_28EF68
label_290b74:
    if (ctx->pc == 0x290B74u) {
        ctx->pc = 0x290B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B70u;
        // 0x290b74: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B78u;
        goto label_290b78;
    }
    ctx->pc = 0x290B70u;
    SET_GPR_U32(ctx, 31, 0x290B78u);
    ctx->pc = 0x290B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B70u;
    // 0x290b74: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EF68u, 0x290B70u, 0x290B78u)) {
        return;
    }
    ctx->pc = 0x290B78u;
label_290b78:
    // 0x290b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290b7c:
    if (ctx->pc == 0x290B7Cu) {
        ctx->pc = 0x290B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B78u;
        // 0x290b7c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B80u;
        goto label_290b80;
    }
    ctx->pc = 0x290B78u;
    {
        const bool branch_taken_0x290b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B78u;
        // 0x290b7c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b78) {
            ctx->pc = 0x290B88u;
            goto label_290b88;
        }
    }
    ctx->pc = 0x290B80u;
label_290b80:
    // 0x290b80: 0x1000001e  b           . + 4 + (0x1E << 2)
label_290b84:
    if (ctx->pc == 0x290B84u) {
        ctx->pc = 0x290B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B80u;
        // 0x290b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B88u;
        goto label_290b88;
    }
    ctx->pc = 0x290B80u;
    {
        const bool branch_taken_0x290b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B80u;
        // 0x290b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b80) {
            ctx->pc = 0x290BFCu;
            goto label_290bfc;
        }
    }
    ctx->pc = 0x290B88u;
label_290b88:
    // 0x290b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290b8c:
    // 0x290b8c: 0xc0a4388  jal         func_290E20
label_290b90:
    if (ctx->pc == 0x290B90u) {
        ctx->pc = 0x290B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B8Cu;
        // 0x290b90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B94u;
        goto label_290b94;
    }
    ctx->pc = 0x290B8Cu;
    SET_GPR_U32(ctx, 31, 0x290B94u);
    ctx->pc = 0x290B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B8Cu;
    // 0x290b90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290E20u, 0x290B8Cu, 0x290B94u)) {
        return;
    }
    ctx->pc = 0x290B94u;
label_290b94:
    // 0x290b94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_290b98:
    if (ctx->pc == 0x290B98u) {
        ctx->pc = 0x290B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B94u;
        // 0x290b98: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B9Cu;
        goto label_290b9c;
    }
    ctx->pc = 0x290B94u;
    {
        const bool branch_taken_0x290b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B94u;
        // 0x290b98: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b94) {
            ctx->pc = 0x290BC8u;
            goto label_290bc8;
        }
    }
    ctx->pc = 0x290B9Cu;
label_290b9c:
    // 0x290b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290ba0:
    // 0x290ba0: 0xc092848  jal         func_24A120
label_290ba4:
    if (ctx->pc == 0x290BA4u) {
        ctx->pc = 0x290BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA0u;
        // 0x290ba4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BA8u;
        goto label_290ba8;
    }
    ctx->pc = 0x290BA0u;
    SET_GPR_U32(ctx, 31, 0x290BA8u);
    ctx->pc = 0x290BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BA0u;
    // 0x290ba4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x290BA0u, 0x290BA8u)) {
        return;
    }
    ctx->pc = 0x290BA8u;
label_290ba8:
    // 0x290ba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290bac:
    // 0x290bac: 0xc09281a  jal         func_24A068
label_290bb0:
    if (ctx->pc == 0x290BB0u) {
        ctx->pc = 0x290BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BACu;
        // 0x290bb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BB4u;
        goto label_290bb4;
    }
    ctx->pc = 0x290BACu;
    SET_GPR_U32(ctx, 31, 0x290BB4u);
    ctx->pc = 0x290BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BACu;
    // 0x290bb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x290BACu, 0x290BB4u)) {
        return;
    }
    ctx->pc = 0x290BB4u;
label_290bb4:
    // 0x290bb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x290bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_290bb8:
    // 0x290bb8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x290bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_290bbc:
    // 0x290bbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_290bc0:
    // 0x290bc0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x290bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_290bc4:
    // 0x290bc4: 0x0  nop
    ctx->pc = 0x290bc4u;
    // NOP
label_290bc8:
    // 0x290bc8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_290bcc:
    if (ctx->pc == 0x290BCCu) {
        ctx->pc = 0x290BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC8u;
        // 0x290bcc: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BD0u;
        goto label_290bd0;
    }
    ctx->pc = 0x290BC8u;
    {
        const bool branch_taken_0x290bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC8u;
        // 0x290bcc: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bc8) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290BD0u;
label_290bd0:
    // 0x290bd0: 0xc0a41b2  jal         func_2906C8
label_290bd4:
    if (ctx->pc == 0x290BD4u) {
        ctx->pc = 0x290BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD0u;
        // 0x290bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BD8u;
        goto label_290bd8;
    }
    ctx->pc = 0x290BD0u;
    SET_GPR_U32(ctx, 31, 0x290BD8u);
    ctx->pc = 0x290BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BD0u;
    // 0x290bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2906C8u, 0x290BD0u, 0x290BD8u)) {
        return;
    }
    ctx->pc = 0x290BD8u;
label_290bd8:
    // 0x290bd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_290bdc:
    if (ctx->pc == 0x290BDCu) {
        ctx->pc = 0x290BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD8u;
        // 0x290bdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BE0u;
        goto label_290be0;
    }
    ctx->pc = 0x290BD8u;
    {
        const bool branch_taken_0x290bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD8u;
        // 0x290bdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bd8) {
            ctx->pc = 0x290BFCu;
            goto label_290bfc;
        }
    }
    ctx->pc = 0x290BE0u;
label_290be0:
    // 0x290be0: 0xc0a3c0c  jal         func_28F030
label_290be4:
    if (ctx->pc == 0x290BE4u) {
        ctx->pc = 0x290BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE0u;
        // 0x290be4: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BE8u;
        goto label_290be8;
    }
    ctx->pc = 0x290BE0u;
    SET_GPR_U32(ctx, 31, 0x290BE8u);
    ctx->pc = 0x290BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BE0u;
    // 0x290be4: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x290BE0u, 0x290BE8u)) {
        return;
    }
    ctx->pc = 0x290BE8u;
label_290be8:
    // 0x290be8: 0x10000004  b           . + 4 + (0x4 << 2)
label_290bec:
    if (ctx->pc == 0x290BECu) {
        ctx->pc = 0x290BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE8u;
        // 0x290bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BF0u;
        goto label_290bf0;
    }
    ctx->pc = 0x290BE8u;
    {
        const bool branch_taken_0x290be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE8u;
        // 0x290bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290be8) {
            ctx->pc = 0x290BFCu;
            goto label_290bfc;
        }
    }
    ctx->pc = 0x290BF0u;
label_290bf0:
    // 0x290bf0: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x290bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_290bf4:
    // 0x290bf4: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x290bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_290bf8:
    // 0x290bf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x290bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290bfc:
    // 0x290bfc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_290c00:
    if (ctx->pc == 0x290C00u) {
        ctx->pc = 0x290C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BFCu;
        // 0x290c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C04u;
        goto label_290c04;
    }
    ctx->pc = 0x290BFCu;
    {
        const bool branch_taken_0x290bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BFCu;
        // 0x290c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bfc) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290C04u;
label_290c04:
    // 0x290c04: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
label_290c08:
    // 0x290c08: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_290c0c:
    // 0x290c0c: 0xc09270a  jal         func_249C28
label_290c10:
    if (ctx->pc == 0x290C10u) {
        ctx->pc = 0x290C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C0Cu;
        // 0x290c10: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C14u;
        goto label_290c14;
    }
    ctx->pc = 0x290C0Cu;
    SET_GPR_U32(ctx, 31, 0x290C14u);
    ctx->pc = 0x290C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C0Cu;
    // 0x290c10: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x290C0Cu, 0x290C14u)) {
        return;
    }
    ctx->pc = 0x290C14u;
label_290c14:
    // 0x290c14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_290c18:
    if (ctx->pc == 0x290C18u) {
        ctx->pc = 0x290C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C14u;
        // 0x290c18: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C1Cu;
        goto label_290c1c;
    }
    ctx->pc = 0x290C14u;
    {
        const bool branch_taken_0x290c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C14u;
        // 0x290c18: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c14) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290C1Cu;
label_290c1c:
    // 0x290c1c: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x290c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_290c20:
    // 0x290c20: 0xc0a3cdc  jal         func_28F370
label_290c24:
    if (ctx->pc == 0x290C24u) {
        ctx->pc = 0x290C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C20u;
        // 0x290c24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C28u;
        goto label_290c28;
    }
    ctx->pc = 0x290C20u;
    SET_GPR_U32(ctx, 31, 0x290C28u);
    ctx->pc = 0x290C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C20u;
    // 0x290c24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F370u, 0x290C20u, 0x290C28u)) {
        return;
    }
    ctx->pc = 0x290C28u;
label_290c28:
    // 0x290c28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_290c2c:
    if (ctx->pc == 0x290C2Cu) {
        ctx->pc = 0x290C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C28u;
        // 0x290c2c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C30u;
        goto label_290c30;
    }
    ctx->pc = 0x290C28u;
    {
        const bool branch_taken_0x290c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C28u;
        // 0x290c2c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c28) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290C30u;
label_290c30:
    // 0x290c30: 0x26f00fc8  addiu       $s0, $s7, 0xFC8
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_290c34:
    // 0x290c34: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x290c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_290c38:
    // 0x290c38: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x290c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_290c3c:
    // 0x290c3c: 0x40f809  jalr        $v0
label_290c40:
    if (ctx->pc == 0x290C40u) {
        ctx->pc = 0x290C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C3Cu;
        // 0x290c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C44u;
        goto label_290c44;
    }
    ctx->pc = 0x290C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290C44u);
        ctx->pc = 0x290C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C3Cu;
        // 0x290c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C3Cu, 0x290C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290C44u;
label_290c44:
    // 0x290c44: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x290c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_290c48:
    // 0x290c48: 0x60f809  jalr        $v1
label_290c4c:
    if (ctx->pc == 0x290C4Cu) {
        ctx->pc = 0x290C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C48u;
        // 0x290c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C50u;
        goto label_290c50;
    }
    ctx->pc = 0x290C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x290C50u);
        ctx->pc = 0x290C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C48u;
        // 0x290c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C48u, 0x290C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290C50u;
label_290c50:
    // 0x290c50: 0x1000000a  b           . + 4 + (0xA << 2)
label_290c54:
    if (ctx->pc == 0x290C54u) {
        ctx->pc = 0x290C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C50u;
        // 0x290c54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C58u;
        goto label_290c58;
    }
    ctx->pc = 0x290C50u;
    {
        const bool branch_taken_0x290c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C50u;
        // 0x290c54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c50) {
            ctx->pc = 0x290C7Cu;
            goto label_290c7c;
        }
    }
    ctx->pc = 0x290C58u;
label_290c58:
    // 0x290c58: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x290c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_290c5c:
    // 0x290c5c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x290c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_290c60:
    // 0x290c60: 0x40f809  jalr        $v0
label_290c64:
    if (ctx->pc == 0x290C64u) {
        ctx->pc = 0x290C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C60u;
        // 0x290c64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C68u;
        goto label_290c68;
    }
    ctx->pc = 0x290C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290C68u);
        ctx->pc = 0x290C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C60u;
        // 0x290c64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C60u, 0x290C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290C68u;
label_290c68:
    // 0x290c68: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x290c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_290c6c:
    // 0x290c6c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x290c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_290c70:
    // 0x290c70: 0x40f809  jalr        $v0
label_290c74:
    if (ctx->pc == 0x290C74u) {
        ctx->pc = 0x290C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C70u;
        // 0x290c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C78u;
        goto label_290c78;
    }
    ctx->pc = 0x290C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290C78u);
        ctx->pc = 0x290C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C70u;
        // 0x290c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C70u, 0x290C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290C78u;
label_290c78:
    // 0x290c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290c7c:
    // 0x290c7c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x290c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_290c80:
    // 0x290c80: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x290c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_290c84:
    // 0x290c84: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x290c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_290c88:
    // 0x290c88: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x290c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_290c8c:
    // 0x290c8c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x290c8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_290c90:
    // 0x290c90: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x290c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_290c94:
    // 0x290c94: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x290c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_290c98:
    // 0x290c98: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x290c98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_290c9c:
    // 0x290c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_290ca0:
    // 0x290ca0: 0x3e00008  jr          $ra
label_290ca4:
    if (ctx->pc == 0x290CA4u) {
        ctx->pc = 0x290CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA0u;
        // 0x290ca4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CA8u;
        goto label_fallthrough_0x290ca0;
    }
    ctx->pc = 0x290CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA0u;
        // 0x290ca4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290ca0:
    ctx->pc = 0x290CA8u;
}
