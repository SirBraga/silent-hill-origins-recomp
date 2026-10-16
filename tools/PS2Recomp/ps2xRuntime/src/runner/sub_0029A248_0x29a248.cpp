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

// Function: sub_0029A248
// Address: 0x29a248 - 0x29a348
void sub_0029A248_0x29a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A248_0x29a248");
#endif

    switch (ctx->pc) {
        case 0x29a274u: goto label_29a274;
        case 0x29a2a0u: goto label_29a2a0;
        case 0x29a2c8u: goto label_29a2c8;
        case 0x29a2f0u: goto label_29a2f0;
        case 0x29a31cu: goto label_29a31c;
        default: break;
    }

    ctx->pc = 0x29a248u;

    // 0x29a248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a24c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29a24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29a250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a25c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a260: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29a260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29a264: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A264u;
    {
        const bool branch_taken_0x29a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A264u;
        // 0x29a268: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a264) {
            ctx->pc = 0x29A28Cu;
            goto label_29a28c;
        }
    }
    ctx->pc = 0x29A26Cu;
    // 0x29a26c: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x29A26Cu;
    SET_GPR_U32(ctx, 31, 0x29A274u);
    ctx->pc = 0x29A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A26Cu;
    // 0x29a270: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x29A26Cu, 0x29A274u)) {
        return;
    }
    ctx->pc = 0x29A274u;
label_29a274:
    // 0x29a274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a278: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A278u;
    {
        const bool branch_taken_0x29a278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A278u;
        // 0x29a27c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a278) {
            ctx->pc = 0x29A290u;
            goto label_29a290;
        }
    }
    ctx->pc = 0x29A280u;
    // 0x29a280: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a284: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29a288: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x29a288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_29a28c:
    // 0x29a28c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a290:
    // 0x29a290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a298: 0x3e00008  jr          $ra
    ctx->pc = 0x29A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A298u;
        // 0x29a29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A2A0u;
label_29a2a0:
    // 0x29a2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a2b4: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29a2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29a2b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A2B8u;
    {
        const bool branch_taken_0x29a2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2B8u;
        // 0x29a2bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2b8) {
            ctx->pc = 0x29A2E0u;
            goto label_29a2e0;
        }
    }
    ctx->pc = 0x29A2C0u;
    // 0x29a2c0: 0xc0a6e26  jal         func_29B898
    ctx->pc = 0x29A2C0u;
    SET_GPR_U32(ctx, 31, 0x29A2C8u);
    ctx->pc = 0x29A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2C0u;
    // 0x29a2c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B898u, 0x29A2C0u, 0x29A2C8u)) {
        return;
    }
    ctx->pc = 0x29A2C8u;
label_29a2c8:
    // 0x29a2c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a2cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2CCu;
    {
        const bool branch_taken_0x29a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2CCu;
        // 0x29a2d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2cc) {
            ctx->pc = 0x29A2E0u;
            goto label_29a2e0;
        }
    }
    ctx->pc = 0x29A2D4u;
    // 0x29a2d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a2d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29a2dc: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x29a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_29a2e0:
    // 0x29a2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2E8u;
        // 0x29a2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A2F0u;
label_29a2f0:
    // 0x29a2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a2f4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29a2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a2fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a304: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a308: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29a308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29a30c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A30Cu;
    {
        const bool branch_taken_0x29a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A30Cu;
        // 0x29a310: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a30c) {
            ctx->pc = 0x29A334u;
            goto label_29a334;
        }
    }
    ctx->pc = 0x29A314u;
    // 0x29a314: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x29A314u;
    SET_GPR_U32(ctx, 31, 0x29A31Cu);
    ctx->pc = 0x29A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A314u;
    // 0x29a318: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x29A314u, 0x29A31Cu)) {
        return;
    }
    ctx->pc = 0x29A31Cu;
label_29a31c:
    // 0x29a31c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a320: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A320u;
    {
        const bool branch_taken_0x29a320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A320u;
        // 0x29a324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a320) {
            ctx->pc = 0x29A338u;
            goto label_29a338;
        }
    }
    ctx->pc = 0x29A328u;
    // 0x29a328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a32c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29a330: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x29a330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_29a334:
    // 0x29a334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a338:
    // 0x29a338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a340: 0x3e00008  jr          $ra
    ctx->pc = 0x29A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A340u;
        // 0x29a344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A348u;
}
