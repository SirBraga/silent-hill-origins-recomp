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

// Function: sub_002A03F8
// Address: 0x2a03f8 - 0x2a0490
void sub_002A03F8_0x2a03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A03F8_0x2a03f8");
#endif

    ctx->pc = 0x2a03f8u;

    // 0x2a03f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a03f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a03fc: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x2a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x2a0400: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a0400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a0404: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x2a0404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x2a0408: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a0408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a040c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A040Cu;
    {
        const bool branch_taken_0x2a040c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2A0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A040Cu;
        // 0x2a0410: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a040c) {
            ctx->pc = 0x2A041Cu;
            goto label_2a041c;
        }
    }
    ctx->pc = 0x2A0414u;
    // 0x2a0414: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A0414u;
    {
        const bool branch_taken_0x2a0414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0414u;
        // 0x2a0418: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0414) {
            ctx->pc = 0x2A0484u;
            goto label_2a0484;
        }
    }
    ctx->pc = 0x2A041Cu;
label_2a041c:
    // 0x2a041c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2a0420: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2a0420u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2a0424: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x2a0424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2a0428: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0428u;
    {
        const bool branch_taken_0x2a0428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0428u;
        // 0x2a042c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0428) {
            ctx->pc = 0x2A043Cu;
            goto label_2a043c;
        }
    }
    ctx->pc = 0x2A0430u;
    // 0x2a0430: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2a0430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2a0434: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0434u;
    {
        const bool branch_taken_0x2a0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0434u;
        // 0x2a0438: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0434) {
            ctx->pc = 0x2A0484u;
            goto label_2a0484;
        }
    }
    ctx->pc = 0x2A043Cu;
label_2a043c:
    // 0x2a043c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x2a0440: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a0440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a0444: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a0444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a0448: 0x2883001f  slti        $v1, $a0, 0x1F
    ctx->pc = 0x2a0448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2a044c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A044Cu;
    {
        const bool branch_taken_0x2a044c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A044Cu;
        // 0x2a0450: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a044c) {
            ctx->pc = 0x2A0468u;
            goto label_2a0468;
        }
    }
    ctx->pc = 0x2A0454u;
    // 0x2a0454: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a045c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a0460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0460u;
    {
        const bool branch_taken_0x2a0460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0460u;
        // 0x2a0464: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0460) {
            ctx->pc = 0x2A046Cu;
            goto label_2a046c;
        }
    }
    ctx->pc = 0x2A0468u;
label_2a0468:
    // 0x2a0468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a046c:
    // 0x2a046c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0470: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a0470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0474: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a0474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a0478: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a047c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2a047cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a0480: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2a0484:
    // 0x2a0484: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0484u;
        // 0x2a0488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A048Cu;
    // 0x2a048c: 0x0  nop
    ctx->pc = 0x2a048cu;
    // NOP
    ctx->pc = 0x2a0490u;
}
