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

// Function: sub_00304A18
// Address: 0x304a18 - 0x304b30
void sub_00304A18_0x304a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304A18_0x304a18");
#endif

    switch (ctx->pc) {
        case 0x304a18u: goto label_304a18;
        case 0x304a1cu: goto label_304a1c;
        case 0x304a20u: goto label_304a20;
        case 0x304a24u: goto label_304a24;
        case 0x304a28u: goto label_304a28;
        case 0x304a2cu: goto label_304a2c;
        case 0x304a30u: goto label_304a30;
        case 0x304a34u: goto label_304a34;
        case 0x304a38u: goto label_304a38;
        case 0x304a3cu: goto label_304a3c;
        case 0x304a40u: goto label_304a40;
        case 0x304a44u: goto label_304a44;
        case 0x304a48u: goto label_304a48;
        case 0x304a4cu: goto label_304a4c;
        case 0x304a50u: goto label_304a50;
        case 0x304a54u: goto label_304a54;
        case 0x304a58u: goto label_304a58;
        case 0x304a5cu: goto label_304a5c;
        case 0x304a60u: goto label_304a60;
        case 0x304a64u: goto label_304a64;
        case 0x304a68u: goto label_304a68;
        case 0x304a6cu: goto label_304a6c;
        case 0x304a70u: goto label_304a70;
        case 0x304a74u: goto label_304a74;
        case 0x304a78u: goto label_304a78;
        case 0x304a7cu: goto label_304a7c;
        case 0x304a80u: goto label_304a80;
        case 0x304a84u: goto label_304a84;
        case 0x304a88u: goto label_304a88;
        case 0x304a8cu: goto label_304a8c;
        case 0x304a90u: goto label_304a90;
        case 0x304a94u: goto label_304a94;
        case 0x304a98u: goto label_304a98;
        case 0x304a9cu: goto label_304a9c;
        case 0x304aa0u: goto label_304aa0;
        case 0x304aa4u: goto label_304aa4;
        case 0x304aa8u: goto label_304aa8;
        case 0x304aacu: goto label_304aac;
        case 0x304ab0u: goto label_304ab0;
        case 0x304ab4u: goto label_304ab4;
        case 0x304ab8u: goto label_304ab8;
        case 0x304abcu: goto label_304abc;
        case 0x304ac0u: goto label_304ac0;
        case 0x304ac4u: goto label_304ac4;
        case 0x304ac8u: goto label_304ac8;
        case 0x304accu: goto label_304acc;
        case 0x304ad0u: goto label_304ad0;
        case 0x304ad4u: goto label_304ad4;
        case 0x304ad8u: goto label_304ad8;
        case 0x304adcu: goto label_304adc;
        case 0x304ae0u: goto label_304ae0;
        case 0x304ae4u: goto label_304ae4;
        case 0x304ae8u: goto label_304ae8;
        case 0x304aecu: goto label_304aec;
        case 0x304af0u: goto label_304af0;
        case 0x304af4u: goto label_304af4;
        case 0x304af8u: goto label_304af8;
        case 0x304afcu: goto label_304afc;
        case 0x304b00u: goto label_304b00;
        case 0x304b04u: goto label_304b04;
        case 0x304b08u: goto label_304b08;
        case 0x304b0cu: goto label_304b0c;
        case 0x304b10u: goto label_304b10;
        case 0x304b14u: goto label_304b14;
        case 0x304b18u: goto label_304b18;
        case 0x304b1cu: goto label_304b1c;
        case 0x304b20u: goto label_304b20;
        case 0x304b24u: goto label_304b24;
        case 0x304b28u: goto label_304b28;
        case 0x304b2cu: goto label_304b2c;
        default: break;
    }

    ctx->pc = 0x304a18u;

label_304a18:
    // 0x304a18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x304a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_304a1c:
    // 0x304a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304a20:
    // 0x304a20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x304a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_304a24:
    // 0x304a24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x304a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_304a28:
    // 0x304a28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304a2c:
    // 0x304a2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x304a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_304a30:
    // 0x304a30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x304a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_304a34:
    // 0x304a34: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x304a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_304a38:
    // 0x304a38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x304a38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_304a3c:
    // 0x304a3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x304a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_304a40:
    // 0x304a40: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x304a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_304a44:
    // 0x304a44: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_304a48:
    if (ctx->pc == 0x304A48u) {
        ctx->pc = 0x304A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A44u;
        // 0x304a48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A4Cu;
        goto label_304a4c;
    }
    ctx->pc = 0x304A44u;
    {
        const bool branch_taken_0x304a44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A44u;
        // 0x304a48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a44) {
            ctx->pc = 0x304A5Cu;
            goto label_304a5c;
        }
    }
    ctx->pc = 0x304A4Cu;
label_304a4c:
    // 0x304a4c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_304a50:
    if (ctx->pc == 0x304A50u) {
        ctx->pc = 0x304A54u;
        goto label_304a54;
    }
    ctx->pc = 0x304A4Cu;
    {
        const bool branch_taken_0x304a4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a4c) {
            ctx->pc = 0x304A5Cu;
            goto label_304a5c;
        }
    }
    ctx->pc = 0x304A54u;
label_304a54:
    // 0x304a54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x304a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_304a58:
    // 0x304a58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_304a5c:
    // 0x304a5c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_304a60:
    if (ctx->pc == 0x304A60u) {
        ctx->pc = 0x304A64u;
        goto label_304a64;
    }
    ctx->pc = 0x304A5Cu;
    {
        const bool branch_taken_0x304a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a5c) {
            ctx->pc = 0x304AF8u;
            goto label_304af8;
        }
    }
    ctx->pc = 0x304A64u;
label_304a64:
    // 0x304a64: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x304a64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_304a68:
    // 0x304a68: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_304a6c:
    if (ctx->pc == 0x304A6Cu) {
        ctx->pc = 0x304A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A68u;
        // 0x304a6c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A70u;
        goto label_304a70;
    }
    ctx->pc = 0x304A68u;
    {
        const bool branch_taken_0x304a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A68u;
        // 0x304a6c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a68) {
            ctx->pc = 0x304AA0u;
            goto label_304aa0;
        }
    }
    ctx->pc = 0x304A70u;
label_304a70:
    // 0x304a70: 0x1226000a  beq         $s1, $a2, . + 4 + (0xA << 2)
label_304a74:
    if (ctx->pc == 0x304A74u) {
        ctx->pc = 0x304A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A70u;
        // 0x304a74: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A78u;
        goto label_304a78;
    }
    ctx->pc = 0x304A70u;
    {
        const bool branch_taken_0x304a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x304A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A70u;
        // 0x304a74: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a70) {
            ctx->pc = 0x304A9Cu;
            goto label_304a9c;
        }
    }
    ctx->pc = 0x304A78u;
label_304a78:
    // 0x304a78: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
label_304a7c:
    if (ctx->pc == 0x304A7Cu) {
        ctx->pc = 0x304A80u;
        goto label_304a80;
    }
    ctx->pc = 0x304A78u;
    {
        const bool branch_taken_0x304a78 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x304a78) {
            ctx->pc = 0x304A9Cu;
            goto label_304a9c;
        }
    }
    ctx->pc = 0x304A80u;
label_304a80:
    // 0x304a80: 0x12260005  beq         $s1, $a2, . + 4 + (0x5 << 2)
label_304a84:
    if (ctx->pc == 0x304A84u) {
        ctx->pc = 0x304A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A80u;
        // 0x304a84: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A88u;
        goto label_304a88;
    }
    ctx->pc = 0x304A80u;
    {
        const bool branch_taken_0x304a80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x304A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A80u;
        // 0x304a84: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a80) {
            ctx->pc = 0x304A98u;
            goto label_304a98;
        }
    }
    ctx->pc = 0x304A88u;
label_304a88:
    // 0x304a88: 0x0  nop
    ctx->pc = 0x304a88u;
    // NOP
label_304a8c:
    // 0x304a8c: 0x0  nop
    ctx->pc = 0x304a8cu;
    // NOP
label_304a90:
    // 0x304a90: 0x5e00fffb  bgtzl       $s0, . + 4 + (-0x5 << 2)
label_304a94:
    if (ctx->pc == 0x304A94u) {
        ctx->pc = 0x304A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A90u;
        // 0x304a94: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A98u;
        goto label_304a98;
    }
    ctx->pc = 0x304A90u;
    {
        const bool branch_taken_0x304a90 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x304a90) {
            ctx->pc = 0x304A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304A90u;
            // 0x304a94: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304a80;
        }
    }
    ctx->pc = 0x304A98u;
label_304a98:
    // 0x304a98: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x304a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_304a9c:
    // 0x304a9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x304a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_304aa0:
    // 0x304aa0: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
label_304aa4:
    if (ctx->pc == 0x304AA4u) {
        ctx->pc = 0x304AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA0u;
        // 0x304aa4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AA8u;
        goto label_304aa8;
    }
    ctx->pc = 0x304AA0u;
    {
        const bool branch_taken_0x304aa0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x304AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA0u;
        // 0x304aa4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aa0) {
            ctx->pc = 0x304AF8u;
            goto label_304af8;
        }
    }
    ctx->pc = 0x304AA8u;
label_304aa8:
    // 0x304aa8: 0x24550fc8  addiu       $s5, $v0, 0xFC8
    ctx->pc = 0x304aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_304aac:
    // 0x304aac: 0x0  nop
    ctx->pc = 0x304aacu;
    // NOP
label_304ab0:
    // 0x304ab0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_304ab4:
    // 0x304ab4: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_304ab8:
    if (ctx->pc == 0x304AB8u) {
        ctx->pc = 0x304AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AB4u;
        // 0x304ab8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304ABCu;
        goto label_304abc;
    }
    ctx->pc = 0x304AB4u;
    {
        const bool branch_taken_0x304ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ab4) {
            ctx->pc = 0x304AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304AB4u;
            // 0x304ab8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304AF0u;
            goto label_304af0;
        }
    }
    ctx->pc = 0x304ABCu;
label_304abc:
    // 0x304abc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x304abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_304ac0:
    // 0x304ac0: 0x8ea200e8  lw          $v0, 0xE8($s5)
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_304ac4:
    // 0x304ac4: 0x40f809  jalr        $v0
label_304ac8:
    if (ctx->pc == 0x304AC8u) {
        ctx->pc = 0x304AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AC4u;
        // 0x304ac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304ACCu;
        goto label_304acc;
    }
    ctx->pc = 0x304AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304ACCu);
        ctx->pc = 0x304AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AC4u;
        // 0x304ac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304AC4u, 0x304ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304ACCu;
label_304acc:
    // 0x304acc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_304ad0:
    if (ctx->pc == 0x304AD0u) {
        ctx->pc = 0x304AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ACCu;
        // 0x304ad0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AD4u;
        goto label_304ad4;
    }
    ctx->pc = 0x304ACCu;
    {
        const bool branch_taken_0x304acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304acc) {
            ctx->pc = 0x304AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304ACCu;
            // 0x304ad0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304AF0u;
            goto label_304af0;
        }
    }
    ctx->pc = 0x304AD4u;
label_304ad4:
    // 0x304ad4: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
label_304ad8:
    if (ctx->pc == 0x304AD8u) {
        ctx->pc = 0x304AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AD4u;
        // 0x304ad8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304ADCu;
        goto label_304adc;
    }
    ctx->pc = 0x304AD4u;
    {
        const bool branch_taken_0x304ad4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ad4) {
            ctx->pc = 0x304AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304AD4u;
            // 0x304ad8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B08u;
            goto label_304b08;
        }
    }
    ctx->pc = 0x304ADCu;
label_304adc:
    // 0x304adc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x304adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_304ae0:
    // 0x304ae0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x304ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_304ae4:
    // 0x304ae4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x304ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_304ae8:
    // 0x304ae8: 0x10000007  b           . + 4 + (0x7 << 2)
label_304aec:
    if (ctx->pc == 0x304AECu) {
        ctx->pc = 0x304AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AE8u;
        // 0x304aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AF0u;
        goto label_304af0;
    }
    ctx->pc = 0x304AE8u;
    {
        const bool branch_taken_0x304ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AE8u;
        // 0x304aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ae8) {
            ctx->pc = 0x304B08u;
            goto label_304b08;
        }
    }
    ctx->pc = 0x304AF0u;
label_304af0:
    // 0x304af0: 0x1e00ffef  bgtz        $s0, . + 4 + (-0x11 << 2)
label_304af4:
    if (ctx->pc == 0x304AF4u) {
        ctx->pc = 0x304AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AF0u;
        // 0x304af4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AF8u;
        goto label_304af8;
    }
    ctx->pc = 0x304AF0u;
    {
        const bool branch_taken_0x304af0 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x304AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AF0u;
        // 0x304af4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304af0) {
            ctx->pc = 0x304AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304AF8u;
label_304af8:
    // 0x304af8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_304afc:
    if (ctx->pc == 0x304AFCu) {
        ctx->pc = 0x304AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AF8u;
        // 0x304afc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B00u;
        goto label_304b00;
    }
    ctx->pc = 0x304AF8u;
    {
        const bool branch_taken_0x304af8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AF8u;
        // 0x304afc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304af8) {
            ctx->pc = 0x304B04u;
            goto label_304b04;
        }
    }
    ctx->pc = 0x304B00u;
label_304b00:
    // 0x304b00: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x304b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_304b04:
    // 0x304b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b08:
    // 0x304b08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x304b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_304b0c:
    // 0x304b0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x304b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_304b10:
    // 0x304b10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x304b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_304b14:
    // 0x304b14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x304b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304b18:
    // 0x304b18: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x304b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304b1c:
    // 0x304b1c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x304b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304b20:
    // 0x304b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304b24:
    // 0x304b24: 0x3e00008  jr          $ra
label_304b28:
    if (ctx->pc == 0x304B28u) {
        ctx->pc = 0x304B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B24u;
        // 0x304b28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B2Cu;
        goto label_304b2c;
    }
    ctx->pc = 0x304B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B24u;
        // 0x304b28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304B2Cu;
label_304b2c:
    // 0x304b2c: 0x0  nop
    ctx->pc = 0x304b2cu;
    // NOP
    ctx->pc = 0x304b30u;
}
