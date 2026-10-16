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

// Function: sub_00297A28
// Address: 0x297a28 - 0x297ca8
void sub_00297A28_0x297a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297A28_0x297a28");
#endif

    switch (ctx->pc) {
        case 0x297a84u: goto label_297a84;
        case 0x297a9cu: goto label_297a9c;
        case 0x297ae8u: goto label_297ae8;
        case 0x297b34u: goto label_297b34;
        case 0x297b58u: goto label_297b58;
        case 0x297ba0u: goto label_297ba0;
        case 0x297c10u: goto label_297c10;
        case 0x297c34u: goto label_297c34;
        case 0x297c3cu: goto label_297c3c;
        case 0x297c50u: goto label_297c50;
        case 0x297c64u: goto label_297c64;
        default: break;
    }

    ctx->pc = 0x297a28u;

    // 0x297a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297a2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a40: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297A44u;
    {
        const bool branch_taken_0x297a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A44u;
        // 0x297a48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a44) {
            ctx->pc = 0x297A5Cu;
            goto label_297a5c;
        }
    }
    ctx->pc = 0x297A4Cu;
    // 0x297a4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x297a50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x297A54u;
    {
        const bool branch_taken_0x297a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A54u;
        // 0x297a58: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a54) {
            ctx->pc = 0x297A88u;
            goto label_297a88;
        }
    }
    ctx->pc = 0x297A5Cu;
label_297a5c:
    // 0x297a5c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x297a60: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x297A60u;
    {
        const bool branch_taken_0x297a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A60u;
        // 0x297a64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a60) {
            ctx->pc = 0x297A88u;
            goto label_297a88;
        }
    }
    ctx->pc = 0x297A68u;
    // 0x297a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297a6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x297a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297a70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x297a74: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297A74u;
    {
        const bool branch_taken_0x297a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x297A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A74u;
        // 0x297a78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a74) {
            ctx->pc = 0x297A88u;
            goto label_297a88;
        }
    }
    ctx->pc = 0x297A7Cu;
    // 0x297a7c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x297A7Cu;
    SET_GPR_U32(ctx, 31, 0x297A84u);
    ctx->pc = 0x297A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A7Cu;
    // 0x297a80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297A7Cu, 0x297A84u)) {
        return;
    }
    ctx->pc = 0x297A84u;
label_297a84:
    // 0x297a84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297a88:
    // 0x297a88: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x297A88u;
    {
        const bool branch_taken_0x297a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297a88) {
            ctx->pc = 0x297A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297A88u;
            // 0x297a8c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297AD0u;
            goto label_297ad0;
        }
    }
    ctx->pc = 0x297A90u;
    // 0x297a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a94: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x297A94u;
    SET_GPR_U32(ctx, 31, 0x297A9Cu);
    ctx->pc = 0x297A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A94u;
    // 0x297a98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x297A94u, 0x297A9Cu)) {
        return;
    }
    ctx->pc = 0x297A9Cu;
label_297a9c:
    // 0x297a9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x297a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297aa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297aa4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297AA4u;
    {
        const bool branch_taken_0x297aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297aa4) {
            ctx->pc = 0x297AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297AA4u;
            // 0x297aa8: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297AACu;
    // 0x297aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297ab0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297ab4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x297ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x297ab8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297AB8u;
    {
        const bool branch_taken_0x297ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AB8u;
        // 0x297abc: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ab8) {
            ctx->pc = 0x297ACCu;
            goto label_297acc;
        }
    }
    ctx->pc = 0x297AC0u;
label_297ac0:
    // 0x297ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x297AC4u;
    {
        const bool branch_taken_0x297ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AC4u;
        // 0x297ac8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ac4) {
            ctx->pc = 0x297AD0u;
            goto label_297ad0;
        }
    }
    ctx->pc = 0x297ACCu;
label_297acc:
    // 0x297acc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x297accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_297ad0:
    // 0x297ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297ad8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x297AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AE0u;
        // 0x297ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297AE8u;
label_297ae8:
    // 0x297ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297aec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297af0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297afc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x297afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297b00: 0x90a2001a  lbu         $v0, 0x1A($a1)
    ctx->pc = 0x297b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x297b04: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x297B04u;
    {
        const bool branch_taken_0x297b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B04u;
        // 0x297b08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b04) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x297B0Cu;
    // 0x297b0c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297b10: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x297B10u;
    {
        const bool branch_taken_0x297b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b10) {
            ctx->pc = 0x297B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B10u;
            // 0x297b14: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297B3Cu;
            goto label_297b3c;
        }
    }
    ctx->pc = 0x297B18u;
    // 0x297b18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x297b1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x297b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297b20: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x297b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x297b24: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297B24u;
    {
        const bool branch_taken_0x297b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x297b24) {
            ctx->pc = 0x297B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B24u;
            // 0x297b28: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297B3Cu;
            goto label_297b3c;
        }
    }
    ctx->pc = 0x297B2Cu;
    // 0x297b2c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x297B2Cu;
    SET_GPR_U32(ctx, 31, 0x297B34u);
    ctx->pc = 0x297B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B2Cu;
    // 0x297b30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297B2Cu, 0x297B34u)) {
        return;
    }
    ctx->pc = 0x297B34u;
label_297b34:
    // 0x297b34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x297b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297b38: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x297b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_297b3c:
    // 0x297b3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x297b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297b40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x297b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297b44: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x297b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x297b48: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x297B48u;
    {
        const bool branch_taken_0x297b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297b48) {
            ctx->pc = 0x297B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B48u;
            // 0x297b4c: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297B6Cu;
            goto label_297b6c;
        }
    }
    ctx->pc = 0x297B50u;
    // 0x297b50: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x297B50u;
    SET_GPR_U32(ctx, 31, 0x297B58u);
    ctx->pc = 0x297B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B50u;
    // 0x297b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x297B50u, 0x297B58u)) {
        return;
    }
    ctx->pc = 0x297B58u;
label_297b58:
    // 0x297b58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297b5c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297B5Cu;
    {
        const bool branch_taken_0x297b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x297B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B5Cu;
        // 0x297b60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b5c) {
            ctx->pc = 0x297B6Cu;
            goto label_297b6c;
        }
    }
    ctx->pc = 0x297B64u;
    // 0x297b64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x297b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297b68: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x297b68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_297b6c:
    // 0x297b6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297b70: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297B70u;
    {
        const bool branch_taken_0x297b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x297B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B70u;
        // 0x297b74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b70) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x297B78u;
    // 0x297b78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x297b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297b7c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297b80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x297b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x297b84: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x297b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x297b88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x297b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297b8c:
    // 0x297b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297b90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b98: 0x3e00008  jr          $ra
    ctx->pc = 0x297B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B98u;
        // 0x297b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297BA0u;
label_297ba0:
    // 0x297ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x297ba4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297ba8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297bac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x297bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297bb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x297bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x297bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bbc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x297bc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297bc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x297bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x297bc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297bcc: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297bd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297BD0u;
    {
        const bool branch_taken_0x297bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BD0u;
        // 0x297bd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bd0) {
            ctx->pc = 0x297BE8u;
            goto label_297be8;
        }
    }
    ctx->pc = 0x297BD8u;
    // 0x297bd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x297bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297be0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x297BE0u;
    {
        const bool branch_taken_0x297be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BE0u;
        // 0x297be4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297be0) {
            ctx->pc = 0x297C14u;
            goto label_297c14;
        }
    }
    ctx->pc = 0x297BE8u;
label_297be8:
    // 0x297be8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x297be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x297bec: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x297BECu;
    {
        const bool branch_taken_0x297bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BECu;
        // 0x297bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bec) {
            ctx->pc = 0x297C14u;
            goto label_297c14;
        }
    }
    ctx->pc = 0x297BF4u;
    // 0x297bf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x297bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297bf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x297bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297bfc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x297bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x297c00: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C00u;
    {
        const bool branch_taken_0x297c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x297C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C00u;
        // 0x297c04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c00) {
            ctx->pc = 0x297C14u;
            goto label_297c14;
        }
    }
    ctx->pc = 0x297C08u;
    // 0x297c08: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x297C08u;
    SET_GPR_U32(ctx, 31, 0x297C10u);
    ctx->pc = 0x297C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C08u;
    // 0x297c0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297C08u, 0x297C10u)) {
        return;
    }
    ctx->pc = 0x297C10u;
label_297c10:
    // 0x297c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297c14:
    // 0x297c14: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x297C14u;
    {
        const bool branch_taken_0x297c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C14u;
        // 0x297c18: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c14) {
            ctx->pc = 0x297C80u;
            goto label_297c80;
        }
    }
    ctx->pc = 0x297C1Cu;
    // 0x297c1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297c20: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x297C20u;
    {
        const bool branch_taken_0x297c20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x297C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C20u;
        // 0x297c24: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c20) {
            ctx->pc = 0x297C4Cu;
            goto label_297c4c;
        }
    }
    ctx->pc = 0x297C28u;
    // 0x297c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c2c: 0xc0a6d60  jal         func_29B580
    ctx->pc = 0x297C2Cu;
    SET_GPR_U32(ctx, 31, 0x297C34u);
    ctx->pc = 0x297C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C2Cu;
    // 0x297c30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B580u, 0x297C2Cu, 0x297C34u)) {
        return;
    }
    ctx->pc = 0x297C34u;
label_297c34:
    // 0x297c34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x297C34u;
    {
        const bool branch_taken_0x297c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C34u;
        // 0x297c38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c34) {
            ctx->pc = 0x297C80u;
            goto label_297c80;
        }
    }
    ctx->pc = 0x297C3Cu;
label_297c3c:
    // 0x297c3c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297c40: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x297c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x297c44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x297C44u;
    {
        const bool branch_taken_0x297c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C44u;
        // 0x297c48: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c44) {
            ctx->pc = 0x297C80u;
            goto label_297c80;
        }
    }
    ctx->pc = 0x297C4Cu;
label_297c4c:
    // 0x297c4c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x297c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297c50:
    // 0x297c50: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x297c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297c54: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x297C54u;
    {
        const bool branch_taken_0x297c54 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x297C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C54u;
        // 0x297c58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c54) {
            ctx->pc = 0x297C84u;
            goto label_297c84;
        }
    }
    ctx->pc = 0x297C5Cu;
    // 0x297c5c: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x297C5Cu;
    SET_GPR_U32(ctx, 31, 0x297C64u);
    ctx->pc = 0x297C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C5Cu;
    // 0x297c60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x297C5Cu, 0x297C64u)) {
        return;
    }
    ctx->pc = 0x297C64u;
label_297c64:
    // 0x297c64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x297c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c68: 0x5074fff4  beql        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x297C68u;
    {
        const bool branch_taken_0x297c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x297c68) {
            ctx->pc = 0x297C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C68u;
            // 0x297c6c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297c3c;
        }
    }
    ctx->pc = 0x297C70u;
    // 0x297c70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x297c78: 0x1473fff5  bne         $v1, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x297C78u;
    {
        const bool branch_taken_0x297c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x297C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C78u;
        // 0x297c7c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c78) {
            ctx->pc = 0x297C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297c50;
        }
    }
    ctx->pc = 0x297C80u;
label_297c80:
    // 0x297c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297c84:
    // 0x297c84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x297c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297c88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297c8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x297c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297c90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297c94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x297C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C9Cu;
        // 0x297ca0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297CA4u;
    // 0x297ca4: 0x0  nop
    ctx->pc = 0x297ca4u;
    // NOP
    ctx->pc = 0x297ca8u;
}
