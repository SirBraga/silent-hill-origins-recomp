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

// Function: sub_00203A40
// Address: 0x203a40 - 0x203c68
void sub_00203A40_0x203a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A40_0x203a40");
#endif

    switch (ctx->pc) {
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        case 0x203af8u: goto label_203af8;
        case 0x203afcu: goto label_203afc;
        case 0x203b00u: goto label_203b00;
        case 0x203b04u: goto label_203b04;
        case 0x203b08u: goto label_203b08;
        case 0x203b0cu: goto label_203b0c;
        case 0x203b10u: goto label_203b10;
        case 0x203b14u: goto label_203b14;
        case 0x203b18u: goto label_203b18;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b20u: goto label_203b20;
        case 0x203b24u: goto label_203b24;
        case 0x203b28u: goto label_203b28;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b30u: goto label_203b30;
        case 0x203b34u: goto label_203b34;
        case 0x203b38u: goto label_203b38;
        case 0x203b3cu: goto label_203b3c;
        case 0x203b40u: goto label_203b40;
        case 0x203b44u: goto label_203b44;
        case 0x203b48u: goto label_203b48;
        case 0x203b4cu: goto label_203b4c;
        case 0x203b50u: goto label_203b50;
        case 0x203b54u: goto label_203b54;
        case 0x203b58u: goto label_203b58;
        case 0x203b5cu: goto label_203b5c;
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        case 0x203be4u: goto label_203be4;
        case 0x203be8u: goto label_203be8;
        case 0x203becu: goto label_203bec;
        case 0x203bf0u: goto label_203bf0;
        case 0x203bf4u: goto label_203bf4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c00u: goto label_203c00;
        case 0x203c04u: goto label_203c04;
        case 0x203c08u: goto label_203c08;
        case 0x203c0cu: goto label_203c0c;
        case 0x203c10u: goto label_203c10;
        case 0x203c14u: goto label_203c14;
        case 0x203c18u: goto label_203c18;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c20u: goto label_203c20;
        case 0x203c24u: goto label_203c24;
        case 0x203c28u: goto label_203c28;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c30u: goto label_203c30;
        case 0x203c34u: goto label_203c34;
        case 0x203c38u: goto label_203c38;
        case 0x203c3cu: goto label_203c3c;
        case 0x203c40u: goto label_203c40;
        case 0x203c44u: goto label_203c44;
        case 0x203c48u: goto label_203c48;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c50u: goto label_203c50;
        case 0x203c54u: goto label_203c54;
        case 0x203c58u: goto label_203c58;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c60u: goto label_203c60;
        case 0x203c64u: goto label_203c64;
        default: break;
    }

    ctx->pc = 0x203a40u;

label_203a40:
    // 0x203a40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x203a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_203a44:
    // 0x203a44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x203a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_203a48:
    // 0x203a48: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x203a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_203a4c:
    // 0x203a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203a50:
    // 0x203a50: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x203a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_203a54:
    // 0x203a54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x203a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_203a58:
    // 0x203a58: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x203a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_203a5c:
    // 0x203a5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x203a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_203a60:
    // 0x203a60: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x203a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_203a64:
    // 0x203a64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x203a64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203a68:
    // 0x203a68: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x203a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_203a6c:
    // 0x203a6c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_203a70:
    // 0x203a70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x203a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_203a74:
    // 0x203a74: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x203a74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_203a78:
    // 0x203a78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x203a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_203a7c:
    // 0x203a7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x203a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_203a80:
    // 0x203a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203a84:
    // 0x203a84: 0xc081274  jal         func_2049D0
label_203a88:
    if (ctx->pc == 0x203A88u) {
        ctx->pc = 0x203A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A84u;
        // 0x203a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A8Cu;
        goto label_203a8c;
    }
    ctx->pc = 0x203A84u;
    SET_GPR_U32(ctx, 31, 0x203A8Cu);
    ctx->pc = 0x203A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A84u;
    // 0x203a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049D0u, 0x203A84u, 0x203A8Cu)) {
        return;
    }
    ctx->pc = 0x203A8Cu;
label_203a8c:
    // 0x203a8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203a90:
    // 0x203a90: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x203a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_203a94:
    // 0x203a94: 0xc0808b8  jal         func_2022E0
label_203a98:
    if (ctx->pc == 0x203A98u) {
        ctx->pc = 0x203A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A94u;
        // 0x203a98: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A9Cu;
        goto label_203a9c;
    }
    ctx->pc = 0x203A94u;
    SET_GPR_U32(ctx, 31, 0x203A9Cu);
    ctx->pc = 0x203A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A94u;
    // 0x203a98: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x203A94u, 0x203A9Cu)) {
        return;
    }
    ctx->pc = 0x203A9Cu;
label_203a9c:
    // 0x203a9c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_203aa0:
    if (ctx->pc == 0x203AA0u) {
        ctx->pc = 0x203AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A9Cu;
        // 0x203aa0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AA4u;
        goto label_203aa4;
    }
    ctx->pc = 0x203A9Cu;
    {
        const bool branch_taken_0x203a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A9Cu;
        // 0x203aa0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a9c) {
            ctx->pc = 0x203AB4u;
            goto label_203ab4;
        }
    }
    ctx->pc = 0x203AA4u;
label_203aa4:
    // 0x203aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203aa8:
    // 0x203aa8: 0xc081b56  jal         func_206D58
label_203aac:
    if (ctx->pc == 0x203AACu) {
        ctx->pc = 0x203AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA8u;
        // 0x203aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AB0u;
        goto label_203ab0;
    }
    ctx->pc = 0x203AA8u;
    SET_GPR_U32(ctx, 31, 0x203AB0u);
    ctx->pc = 0x203AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AA8u;
    // 0x203aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x203AA8u, 0x203AB0u)) {
        return;
    }
    ctx->pc = 0x203AB0u;
label_203ab0:
    // 0x203ab0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x203ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_203ab4:
    // 0x203ab4: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x203ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_203ab8:
    // 0x203ab8: 0xae710020  sw          $s1, 0x20($s3)
    ctx->pc = 0x203ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 17));
label_203abc:
    // 0x203abc: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_203ac0:
    if (ctx->pc == 0x203AC0u) {
        ctx->pc = 0x203AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ABCu;
        // 0x203ac0: 0x8e340010  lw          $s4, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AC4u;
        goto label_203ac4;
    }
    ctx->pc = 0x203ABCu;
    {
        const bool branch_taken_0x203abc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ABCu;
        // 0x203ac0: 0x8e340010  lw          $s4, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203abc) {
            ctx->pc = 0x203AD8u;
            goto label_203ad8;
        }
    }
    ctx->pc = 0x203AC4u;
label_203ac4:
    // 0x203ac4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_203ac8:
    // 0x203ac8: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x203ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_203acc:
    // 0x203acc: 0x40f809  jalr        $v0
label_203ad0:
    if (ctx->pc == 0x203AD0u) {
        ctx->pc = 0x203AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ACCu;
        // 0x203ad0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD4u;
        goto label_203ad4;
    }
    ctx->pc = 0x203ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203AD4u);
        ctx->pc = 0x203AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ACCu;
        // 0x203ad0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203ACCu, 0x203AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203AD4u;
label_203ad4:
    // 0x203ad4: 0x2b00a  movz        $s6, $zero, $v0
    ctx->pc = 0x203ad4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
label_203ad8:
    // 0x203ad8: 0x12800053  beqz        $s4, . + 4 + (0x53 << 2)
label_203adc:
    if (ctx->pc == 0x203ADCu) {
        ctx->pc = 0x203AE0u;
        goto label_203ae0;
    }
    ctx->pc = 0x203AD8u;
    {
        const bool branch_taken_0x203ad8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ad8) {
            ctx->pc = 0x203C28u;
            goto label_203c28;
        }
    }
    ctx->pc = 0x203AE0u;
label_203ae0:
    // 0x203ae0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x203ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_203ae4:
    // 0x203ae4: 0x0  nop
    ctx->pc = 0x203ae4u;
    // NOP
label_203ae8:
    // 0x203ae8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203aec:
    // 0x203aec: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x203aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_203af0:
    // 0x203af0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_203af4:
    // 0x203af4: 0x40f809  jalr        $v0
label_203af8:
    if (ctx->pc == 0x203AF8u) {
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AFCu;
        goto label_203afc;
    }
    ctx->pc = 0x203AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203AFCu);
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AF4u, 0x203AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203AFCu;
label_203afc:
    // 0x203afc: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_203b00:
    if (ctx->pc == 0x203B00u) {
        ctx->pc = 0x203B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AFCu;
        // 0x203b00: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B04u;
        goto label_203b04;
    }
    ctx->pc = 0x203AFCu;
    {
        const bool branch_taken_0x203afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203afc) {
            ctx->pc = 0x203B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203AFCu;
            // 0x203b00: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203C20u;
            goto label_203c20;
        }
    }
    ctx->pc = 0x203B04u;
label_203b04:
    // 0x203b04: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_203b08:
    // 0x203b08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_203b0c:
    // 0x203b0c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x203b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_203b10:
    // 0x203b10: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_203b14:
    // 0x203b14: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_203b18:
    // 0x203b18: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x203b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_203b1c:
    // 0x203b1c: 0x40f809  jalr        $v0
label_203b20:
    if (ctx->pc == 0x203B20u) {
        ctx->pc = 0x203B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B1Cu;
        // 0x203b20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B24u;
        goto label_203b24;
    }
    ctx->pc = 0x203B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203B24u);
        ctx->pc = 0x203B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B1Cu;
        // 0x203b20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B1Cu, 0x203B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203B24u;
label_203b24:
    // 0x203b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x203b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203b28:
    // 0x203b28: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
label_203b2c:
    if (ctx->pc == 0x203B2Cu) {
        ctx->pc = 0x203B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B28u;
        // 0x203b2c: 0x2672000c  addiu       $s2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B30u;
        goto label_203b30;
    }
    ctx->pc = 0x203B28u;
    {
        const bool branch_taken_0x203b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B28u;
        // 0x203b2c: 0x2672000c  addiu       $s2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b28) {
            ctx->pc = 0x203C1Cu;
            goto label_203c1c;
        }
    }
    ctx->pc = 0x203B30u;
label_203b30:
    // 0x203b30: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_203b34:
    // 0x203b34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203b38:
    // 0x203b38: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x203b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_203b3c:
    // 0x203b3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x203b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_203b40:
    // 0x203b40: 0x40f809  jalr        $v0
label_203b44:
    if (ctx->pc == 0x203B44u) {
        ctx->pc = 0x203B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B40u;
        // 0x203b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B48u;
        goto label_203b48;
    }
    ctx->pc = 0x203B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203B48u);
        ctx->pc = 0x203B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B40u;
        // 0x203b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B40u, 0x203B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203B48u;
label_203b48:
    // 0x203b48: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_203b4c:
    // 0x203b4c: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x203b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_203b50:
    // 0x203b50: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x203b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_203b54:
    // 0x203b54: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x203b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_203b58:
    // 0x203b58: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x203b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_203b5c:
    // 0x203b5c: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x203b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_203b60:
    // 0x203b60: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x203b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_203b64:
    // 0x203b64: 0xb226002f  sdl         $a2, 0x2F($s1)
    ctx->pc = 0x203b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_203b68:
    // 0x203b68: 0xb6260028  sdr         $a2, 0x28($s1)
    ctx->pc = 0x203b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_203b6c:
    // 0x203b6c: 0xc0808f0  jal         func_2023C0
label_203b70:
    if (ctx->pc == 0x203B70u) {
        ctx->pc = 0x203B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B6Cu;
        // 0x203b70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B74u;
        goto label_203b74;
    }
    ctx->pc = 0x203B6Cu;
    SET_GPR_U32(ctx, 31, 0x203B74u);
    ctx->pc = 0x203B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B6Cu;
    // 0x203b70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x203B6Cu, 0x203B74u)) {
        return;
    }
    ctx->pc = 0x203B74u;
label_203b74:
    // 0x203b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203b78:
    // 0x203b78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x203b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_203b7c:
    // 0x203b7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203b80:
    // 0x203b80: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x203b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_203b84:
    // 0x203b84: 0x24423c48  addiu       $v0, $v0, 0x3C48
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15432));
label_203b88:
    // 0x203b88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x203b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_203b8c:
    // 0x203b8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203b90:
    // 0x203b90: 0xc080858  jal         func_202160
label_203b94:
    if (ctx->pc == 0x203B94u) {
        ctx->pc = 0x203B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B90u;
        // 0x203b94: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B98u;
        goto label_203b98;
    }
    ctx->pc = 0x203B90u;
    SET_GPR_U32(ctx, 31, 0x203B98u);
    ctx->pc = 0x203B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B90u;
    // 0x203b94: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x203B90u, 0x203B98u)) {
        return;
    }
    ctx->pc = 0x203B98u;
label_203b98:
    // 0x203b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x203b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203b9c:
    // 0x203b9c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x203b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_203ba0:
    // 0x203ba0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_203ba4:
    // 0x203ba4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x203ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_203ba8:
    // 0x203ba8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x203ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_203bac:
    // 0x203bac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x203bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_203bb0:
    // 0x203bb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_203bb4:
    if (ctx->pc == 0x203BB4u) {
        ctx->pc = 0x203BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB0u;
        // 0x203bb4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BB8u;
        goto label_203bb8;
    }
    ctx->pc = 0x203BB0u;
    {
        const bool branch_taken_0x203bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203bb0) {
            ctx->pc = 0x203BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203BB0u;
            // 0x203bb4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203BB8u;
            goto label_203bb8;
        }
    }
    ctx->pc = 0x203BB8u;
label_203bb8:
    // 0x203bb8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_203bbc:
    // 0x203bbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_203bc0:
    if (ctx->pc == 0x203BC0u) {
        ctx->pc = 0x203BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BBCu;
        // 0x203bc0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BC4u;
        goto label_203bc4;
    }
    ctx->pc = 0x203BBCu;
    {
        const bool branch_taken_0x203bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bbc) {
            ctx->pc = 0x203BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203BBCu;
            // 0x203bc0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203BC4u;
            goto label_203bc4;
        }
    }
    ctx->pc = 0x203BC4u;
label_203bc4:
    // 0x203bc4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x203bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_203bc8:
    // 0x203bc8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x203bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_203bcc:
    // 0x203bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_203bd0:
    // 0x203bd0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_203bd4:
    if (ctx->pc == 0x203BD4u) {
        ctx->pc = 0x203BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD0u;
        // 0x203bd4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BD8u;
        goto label_203bd8;
    }
    ctx->pc = 0x203BD0u;
    {
        const bool branch_taken_0x203bd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD0u;
        // 0x203bd4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bd0) {
            ctx->pc = 0x203BF0u;
            goto label_203bf0;
        }
    }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_203bdc:
    // 0x203bdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x203bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_203be0:
    // 0x203be0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x203be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_203be4:
    // 0x203be4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x203be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_203be8:
    // 0x203be8: 0x60f809  jalr        $v1
label_203bec:
    if (ctx->pc == 0x203BECu) {
        ctx->pc = 0x203BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE8u;
        // 0x203bec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BF0u;
        goto label_203bf0;
    }
    ctx->pc = 0x203BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203BF0u);
        ctx->pc = 0x203BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE8u;
        // 0x203bec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203BE8u, 0x203BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203BF0u;
label_203bf0:
    // 0x203bf0: 0x52e00005  beql        $s7, $zero, . + 4 + (0x5 << 2)
label_203bf4:
    if (ctx->pc == 0x203BF4u) {
        ctx->pc = 0x203BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BF0u;
        // 0x203bf4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BF8u;
        goto label_203bf8;
    }
    ctx->pc = 0x203BF0u;
    {
        const bool branch_taken_0x203bf0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bf0) {
            ctx->pc = 0x203BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203BF0u;
            // 0x203bf4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203C08u;
            goto label_203c08;
        }
    }
    ctx->pc = 0x203BF8u;
label_203bf8:
    // 0x203bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_203bfc:
    // 0x203bfc: 0x2e0f809  jalr        $s7
label_203c00:
    if (ctx->pc == 0x203C00u) {
        ctx->pc = 0x203C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BFCu;
        // 0x203c00: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C04u;
        goto label_203c04;
    }
    ctx->pc = 0x203BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x203C04u);
        ctx->pc = 0x203C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BFCu;
        // 0x203c00: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203BFCu, 0x203C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_203c08:
    // 0x203c08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_203c0c:
    // 0x203c0c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_203c10:
    // 0x203c10: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_203c14:
    // 0x203c14: 0x60f809  jalr        $v1
label_203c18:
    if (ctx->pc == 0x203C18u) {
        ctx->pc = 0x203C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C14u;
        // 0x203c18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C1Cu;
        goto label_203c1c;
    }
    ctx->pc = 0x203C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203C1Cu);
        ctx->pc = 0x203C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C14u;
        // 0x203c18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C14u, 0x203C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203C1Cu;
label_203c1c:
    // 0x203c1c: 0x8e940004  lw          $s4, 0x4($s4)
    ctx->pc = 0x203c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_203c20:
    // 0x203c20: 0x5680ffb1  bnel        $s4, $zero, . + 4 + (-0x4F << 2)
label_203c24:
    if (ctx->pc == 0x203C24u) {
        ctx->pc = 0x203C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C20u;
        // 0x203c24: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C28u;
        goto label_203c28;
    }
    ctx->pc = 0x203C20u;
    {
        const bool branch_taken_0x203c20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x203c20) {
            ctx->pc = 0x203C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C20u;
            // 0x203c24: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ae8;
        }
    }
    ctx->pc = 0x203C28u;
label_203c28:
    // 0x203c28: 0xc08125c  jal         func_204970
label_203c2c:
    if (ctx->pc == 0x203C2Cu) {
        ctx->pc = 0x203C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C28u;
        // 0x203c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C30u;
        goto label_203c30;
    }
    ctx->pc = 0x203C28u;
    SET_GPR_U32(ctx, 31, 0x203C30u);
    ctx->pc = 0x203C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C28u;
    // 0x203c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204970u, 0x203C28u, 0x203C30u)) {
        return;
    }
    ctx->pc = 0x203C30u;
label_203c30:
    // 0x203c30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x203c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_203c34:
    // 0x203c34: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x203c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_203c38:
    // 0x203c38: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x203c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_203c3c:
    // 0x203c3c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x203c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_203c40:
    // 0x203c40: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x203c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_203c44:
    // 0x203c44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x203c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203c48:
    // 0x203c48: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x203c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203c4c:
    // 0x203c4c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x203c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203c50:
    // 0x203c50: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x203c50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203c54:
    // 0x203c54: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x203c54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203c58:
    // 0x203c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203c5c:
    // 0x203c5c: 0x3e00008  jr          $ra
label_203c60:
    if (ctx->pc == 0x203C60u) {
        ctx->pc = 0x203C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C5Cu;
        // 0x203c60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C64u;
        goto label_203c64;
    }
    ctx->pc = 0x203C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C5Cu;
        // 0x203c60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203C64u;
label_203c64:
    // 0x203c64: 0x0  nop
    ctx->pc = 0x203c64u;
    // NOP
    ctx->pc = 0x203c68u;
}
