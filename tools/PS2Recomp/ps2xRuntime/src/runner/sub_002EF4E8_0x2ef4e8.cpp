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

// Function: sub_002EF4E8
// Address: 0x2ef4e8 - 0x2ef588
void sub_002EF4E8_0x2ef4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF4E8_0x2ef4e8");
#endif

    switch (ctx->pc) {
        case 0x2ef50cu: goto label_2ef50c;
        case 0x2ef53cu: goto label_2ef53c;
        case 0x2ef560u: goto label_2ef560;
        default: break;
    }

    ctx->pc = 0x2ef4e8u;

    // 0x2ef4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ef4ec: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ef4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ef4f0: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ef4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ef4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef4f8: 0x24c6fe70  addiu       $a2, $a2, -0x190
    ctx->pc = 0x2ef4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966896));
    // 0x2ef4fc: 0x24e7fef0  addiu       $a3, $a3, -0x110
    ctx->pc = 0x2ef4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967024));
    // 0x2ef500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef504: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2EF504u;
    SET_GPR_U32(ctx, 31, 0x2EF50Cu);
    ctx->pc = 0x2EF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF504u;
    // 0x2ef508: 0x24050135  addiu       $a1, $zero, 0x135 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2EF504u, 0x2EF50Cu)) {
        return;
    }
    ctx->pc = 0x2EF50Cu;
label_2ef50c:
    // 0x2ef50c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF50Cu;
    {
        const bool branch_taken_0x2ef50c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2EF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF50Cu;
        // 0x2ef510: 0x3c06002f  lui         $a2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef50c) {
            ctx->pc = 0x2EF51Cu;
            goto label_2ef51c;
        }
    }
    ctx->pc = 0x2EF514u;
    // 0x2ef514: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EF514u;
    {
        const bool branch_taken_0x2ef514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF514u;
        // 0x2ef518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef514) {
            ctx->pc = 0x2EF578u;
            goto label_2ef578;
        }
    }
    ctx->pc = 0x2EF51Cu;
label_2ef51c:
    // 0x2ef51c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ef51cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ef520: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x2ef524: 0x24c6f878  addiu       $a2, $a2, -0x788
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965368));
    // 0x2ef528: 0x24e7f8b0  addiu       $a3, $a3, -0x750
    ctx->pc = 0x2ef528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965424));
    // 0x2ef52c: 0x24050135  addiu       $a1, $zero, 0x135
    ctx->pc = 0x2ef52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x2ef530: 0x2508f9b8  addiu       $t0, $t0, -0x648
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965688));
    // 0x2ef534: 0xc095f80  jal         func_257E00
    ctx->pc = 0x2EF534u;
    SET_GPR_U32(ctx, 31, 0x2EF53Cu);
    ctx->pc = 0x2EF538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF534u;
    // 0x2ef538: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x2EF534u, 0x2EF53Cu)) {
        return;
    }
    ctx->pc = 0x2EF53Cu;
label_2ef53c:
    // 0x2ef53c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ef540: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ef540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ef544: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ef544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ef548: 0xaf8290a8  sw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 2));
    // 0x2ef54c: 0x24a5ee68  addiu       $a1, $a1, -0x1198
    ctx->pc = 0x2ef54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
    // 0x2ef550: 0x24c6fbd0  addiu       $a2, $a2, -0x430
    ctx->pc = 0x2ef550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966224));
    // 0x2ef554: 0x24e7fdc8  addiu       $a3, $a3, -0x238
    ctx->pc = 0x2ef554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966728));
    // 0x2ef558: 0xc095f92  jal         func_257E48
    ctx->pc = 0x2EF558u;
    SET_GPR_U32(ctx, 31, 0x2EF560u);
    ctx->pc = 0x2EF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF558u;
    // 0x2ef55c: 0x24040135  addiu       $a0, $zero, 0x135 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E48u, 0x2EF558u, 0x2EF560u)) {
        return;
    }
    ctx->pc = 0x2EF560u;
label_2ef560:
    // 0x2ef560: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF560u;
    {
        const bool branch_taken_0x2ef560 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF560u;
        // 0x2ef564: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef560) {
            ctx->pc = 0x2EF574u;
            goto label_2ef574;
        }
    }
    ctx->pc = 0x2EF568u;
    // 0x2ef568: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef56c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2ef570: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2ef570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ef574:
    // 0x2ef574: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ef574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ef578:
    // 0x2ef578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF57Cu;
        // 0x2ef580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF584u;
    // 0x2ef584: 0x0  nop
    ctx->pc = 0x2ef584u;
    // NOP
    ctx->pc = 0x2ef588u;
}
