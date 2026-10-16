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

// Function: sub_002A3A40
// Address: 0x2a3a40 - 0x2a3ad8
void sub_002A3A40_0x2a3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3A40_0x2a3a40");
#endif

    switch (ctx->pc) {
        case 0x2a3a74u: goto label_2a3a74;
        case 0x2a3ac0u: goto label_2a3ac0;
        default: break;
    }

    ctx->pc = 0x2a3a40u;

    // 0x2a3a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3a4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3a50: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A3A50u;
    {
        const bool branch_taken_0x2a3a50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A50u;
        // 0x2a3a54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a50) {
            ctx->pc = 0x2A3AA8u;
            goto label_2a3aa8;
        }
    }
    ctx->pc = 0x2A3A58u;
    // 0x2a3a58: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x2a3a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2a3a5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3a60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a3a64: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3A64u;
    {
        const bool branch_taken_0x2a3a64 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A64u;
        // 0x2a3a68: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a64) {
            ctx->pc = 0x2A3A7Cu;
            goto label_2a3a7c;
        }
    }
    ctx->pc = 0x2A3A6Cu;
    // 0x2a3a6c: 0xc0c4f88  jal         func_313E20
    ctx->pc = 0x2A3A6Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A74u);
    ctx->pc = 0x313E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313E20u, 0x2A3A6Cu, 0x2A3A74u)) {
        return;
    }
    ctx->pc = 0x2A3A74u;
label_2a3a74:
    // 0x2a3a74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3A74u;
    {
        const bool branch_taken_0x2a3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A74u;
        // 0x2a3a78: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a74) {
            ctx->pc = 0x2A3A8Cu;
            goto label_2a3a8c;
        }
    }
    ctx->pc = 0x2A3A7Cu;
label_2a3a7c:
    // 0x2a3a7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3a80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3a84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3a88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a3a8c:
    // 0x2a3a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3a90: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3A90u;
    {
        const bool branch_taken_0x2a3a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3a90) {
            ctx->pc = 0x2A3A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3A90u;
            // 0x2a3a94: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3AA0u;
            goto label_2a3aa0;
        }
    }
    ctx->pc = 0x2A3A98u;
    // 0x2a3a98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A3A98u;
    {
        const bool branch_taken_0x2a3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A98u;
        // 0x2a3a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a98) {
            ctx->pc = 0x2A3AC8u;
            goto label_2a3ac8;
        }
    }
    ctx->pc = 0x2A3AA0u;
label_2a3aa0:
    // 0x2a3aa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3AA0u;
    {
        const bool branch_taken_0x2a3aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AA0u;
        // 0x2a3aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3aa0) {
            ctx->pc = 0x2A3AC8u;
            goto label_2a3ac8;
        }
    }
    ctx->pc = 0x2A3AA8u;
label_2a3aa8:
    // 0x2a3aa8: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2a3aac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3ab0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2a3ab0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2a3ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ab8: 0xc0c4d44  jal         func_313510
    ctx->pc = 0x2A3AB8u;
    SET_GPR_U32(ctx, 31, 0x2A3AC0u);
    ctx->pc = 0x2A3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3AB8u;
    // 0x2a3abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313510u, 0x2A3AB8u, 0x2A3AC0u)) {
        return;
    }
    ctx->pc = 0x2A3AC0u;
label_2a3ac0:
    // 0x2a3ac0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3ac4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a3ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2a3ac8:
    // 0x2a3ac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AD0u;
        // 0x2a3ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3AD8u;
}
