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

// Function: sub_00322A30
// Address: 0x322a30 - 0x322ac0
void sub_00322A30_0x322a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322A30_0x322a30");
#endif

    ctx->pc = 0x322a30u;

    // 0x322a30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x322a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a34: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x322a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x322a38: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x322a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x322a3c: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x322a3cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x322a40: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x322a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x322a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322A44u;
    {
        const bool branch_taken_0x322a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A44u;
        // 0x322a48: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a44) {
            ctx->pc = 0x322A54u;
            goto label_322a54;
        }
    }
    ctx->pc = 0x322A4Cu;
    // 0x322a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x322A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A4Cu;
        // 0x322a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A54u;
label_322a54:
    // 0x322a54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322A54u;
    {
        const bool branch_taken_0x322a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A54u;
        // 0x322a58: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a54) {
            ctx->pc = 0x322A64u;
            goto label_322a64;
        }
    }
    ctx->pc = 0x322A5Cu;
    // 0x322a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x322A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A5Cu;
        // 0x322a60: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A64u;
label_322a64:
    // 0x322a64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x322a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x322a68: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x322a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x322a6c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x322a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x322a70: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x322A70u;
    {
        const bool branch_taken_0x322a70 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x322A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A70u;
        // 0x322a74: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a70) {
            ctx->pc = 0x322AA8u;
            goto label_322aa8;
        }
    }
    ctx->pc = 0x322A78u;
    // 0x322a78: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x322a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x322a7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x322a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x322a80: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x322a80u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x322a84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x322a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x322a88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x322a88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x322a8c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x322a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x322a90: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x322a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x322a94: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322A94u;
    {
        const bool branch_taken_0x322a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x322a94) {
            ctx->pc = 0x322A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322A94u;
            // 0x322a98: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x322AB4u;
            goto label_322ab4;
        }
    }
    ctx->pc = 0x322A9Cu;
    // 0x322a9c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x322a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x322aa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x322AA0u;
    {
        const bool branch_taken_0x322aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AA0u;
        // 0x322aa4: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322aa0) {
            ctx->pc = 0x322AB4u;
            goto label_322ab4;
        }
    }
    ctx->pc = 0x322AA8u;
label_322aa8:
    // 0x322aa8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x322aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x322aac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x322aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x322ab0: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x322ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_322ab4:
    // 0x322ab4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x322ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x322ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x322AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AB8u;
        // 0x322abc: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322AC0u;
}
