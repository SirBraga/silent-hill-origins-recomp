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

// Function: sub_0029D4D0
// Address: 0x29d4d0 - 0x29d558
void sub_0029D4D0_0x29d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D4D0_0x29d4d0");
#endif

    switch (ctx->pc) {
        case 0x29d510u: goto label_29d510;
        case 0x29d530u: goto label_29d530;
        default: break;
    }

    ctx->pc = 0x29d4d0u;

    // 0x29d4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d4d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29d4d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d4dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d4e4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d4e8: 0x16040016  bne         $s0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29D4E8u;
    {
        const bool branch_taken_0x29d4e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x29D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4E8u;
        // 0x29d4ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4e8) {
            ctx->pc = 0x29D544u;
            goto label_29d544;
        }
    }
    ctx->pc = 0x29D4F0u;
    // 0x29d4f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d4f4: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D4F4u;
    {
        const bool branch_taken_0x29d4f4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x29D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4F4u;
        // 0x29d4f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4f4) {
            ctx->pc = 0x29D51Cu;
            goto label_29d51c;
        }
    }
    ctx->pc = 0x29D4FCu;
    // 0x29d4fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29d500: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29D500u;
    {
        const bool branch_taken_0x29d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d500) {
            ctx->pc = 0x29D504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D500u;
            // 0x29d504: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D538u;
            goto label_29d538;
        }
    }
    ctx->pc = 0x29D508u;
    // 0x29d508: 0xc0a71a6  jal         func_29C698
    ctx->pc = 0x29D508u;
    SET_GPR_U32(ctx, 31, 0x29D510u);
    ctx->pc = 0x29D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D508u;
    // 0x29d50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C698u, 0x29D508u, 0x29D510u)) {
        return;
    }
    ctx->pc = 0x29D510u;
label_29d510:
    // 0x29d510: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29D514u;
    {
        const bool branch_taken_0x29d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D514u;
        // 0x29d518: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d514) {
            ctx->pc = 0x29D538u;
            goto label_29d538;
        }
    }
    ctx->pc = 0x29D51Cu;
label_29d51c:
    // 0x29d51c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29d520: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D520u;
    {
        const bool branch_taken_0x29d520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d520) {
            ctx->pc = 0x29D524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D520u;
            // 0x29d524: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D538u;
            goto label_29d538;
        }
    }
    ctx->pc = 0x29D528u;
    // 0x29d528: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x29D528u;
    SET_GPR_U32(ctx, 31, 0x29D530u);
    ctx->pc = 0x29D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D528u;
    // 0x29d52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C6D0u, 0x29D528u, 0x29D530u)) {
        return;
    }
    ctx->pc = 0x29D530u;
label_29d530:
    // 0x29d530: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d534: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29d538:
    // 0x29d538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d53c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29d540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d544:
    // 0x29d544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d548: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d550: 0x3e00008  jr          $ra
    ctx->pc = 0x29D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D550u;
        // 0x29d554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D558u;
}
