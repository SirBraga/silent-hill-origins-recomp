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

// Function: sub_00299588
// Address: 0x299588 - 0x299680
void sub_00299588_0x299588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299588_0x299588");
#endif

    switch (ctx->pc) {
        case 0x2995a8u: goto label_2995a8;
        case 0x2995d8u: goto label_2995d8;
        case 0x2995f8u: goto label_2995f8;
        case 0x299628u: goto label_299628;
        case 0x299650u: goto label_299650;
        default: break;
    }

    ctx->pc = 0x299588u;

    // 0x299588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29958c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29958cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29959c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2995a0: 0xc0a7a2a  jal         func_29E8A8
    ctx->pc = 0x2995A0u;
    SET_GPR_U32(ctx, 31, 0x2995A8u);
    ctx->pc = 0x2995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995A0u;
    // 0x2995a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E8A8u, 0x2995A0u, 0x2995A8u)) {
        return;
    }
    ctx->pc = 0x2995A8u;
label_2995a8:
    // 0x2995a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2995ac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2995ACu;
    {
        const bool branch_taken_0x2995ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2995ACu;
        // 0x2995b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2995ac) {
            ctx->pc = 0x2995C8u;
            goto label_2995c8;
        }
    }
    ctx->pc = 0x2995B4u;
    // 0x2995b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2995b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2995b8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x2995b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2995bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2995bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2995c0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x2995c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x2995c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2995c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2995c8:
    // 0x2995c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2995c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2995cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2995ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2995d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2995D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2995D0u;
        // 0x2995d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2995D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2995D8u;
label_2995d8:
    // 0x2995d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2995dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2995e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2995e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2995e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2995e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2995e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2995e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2995f0: 0xc0a7a02  jal         func_29E808
    ctx->pc = 0x2995F0u;
    SET_GPR_U32(ctx, 31, 0x2995F8u);
    ctx->pc = 0x2995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995F0u;
    // 0x2995f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x2995F0u, 0x2995F8u)) {
        return;
    }
    ctx->pc = 0x2995F8u;
label_2995f8:
    // 0x2995f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2995fc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2995FCu;
    {
        const bool branch_taken_0x2995fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x299600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2995FCu;
        // 0x299600: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2995fc) {
            ctx->pc = 0x299618u;
            goto label_299618;
        }
    }
    ctx->pc = 0x299604u;
    // 0x299604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299608: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29960c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x299610: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x299610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x299614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299618:
    // 0x299618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29961c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299620: 0x3e00008  jr          $ra
    ctx->pc = 0x299620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299620u;
        // 0x299624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299628u;
label_299628:
    // 0x299628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29962c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29962cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299634: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29963c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29963cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299640: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299644: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299648: 0xc0a7a02  jal         func_29E808
    ctx->pc = 0x299648u;
    SET_GPR_U32(ctx, 31, 0x299650u);
    ctx->pc = 0x29964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299648u;
    // 0x29964c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x299648u, 0x299650u)) {
        return;
    }
    ctx->pc = 0x299650u;
label_299650:
    // 0x299650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x299654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299658: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299658u;
    {
        const bool branch_taken_0x299658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299658u;
        // 0x29965c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299658) {
            ctx->pc = 0x299670u;
            goto label_299670;
        }
    }
    ctx->pc = 0x299660u;
    // 0x299660: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299664: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x299668: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29966c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x29966cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_299670:
    // 0x299670: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299678: 0x3e00008  jr          $ra
    ctx->pc = 0x299678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299678u;
        // 0x29967c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299680u;
}
