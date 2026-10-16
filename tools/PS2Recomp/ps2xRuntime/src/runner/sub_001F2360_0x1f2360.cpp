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

// Function: sub_001F2360
// Address: 0x1f2360 - 0x1f23d0
void sub_001F2360_0x1f2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2360_0x1f2360");
#endif

    switch (ctx->pc) {
        case 0x1f23c4u: goto label_1f23c4;
        default: break;
    }

    ctx->pc = 0x1f2360u;

    // 0x1f2360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2364: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1f2368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f236c: 0x8cc2e954  lw          $v0, -0x16AC($a2)
    ctx->pc = 0x1f236cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E954u));
    // 0x1f2370: 0x8c830804  lw          $v1, 0x804($a0)
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1f2374: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2378: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2378u;
    {
        const bool branch_taken_0x1f2378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2378) {
            ctx->pc = 0x1F237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2378u;
            // 0x1f237c: 0xacc3e954  sw          $v1, -0x16AC($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294961492), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2380u;
            goto label_1f2380;
        }
    }
    ctx->pc = 0x1F2380u;
label_1f2380:
    // 0x1f2380: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1f2384: 0x8c831d0c  lw          $v1, 0x1D0C($a0)
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7436)));
    // 0x1f2388: 0x8cc2e958  lw          $v0, -0x16A8($a2)
    ctx->pc = 0x1f2388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E958u));
    // 0x1f238c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f238cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2390: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2390u;
    {
        const bool branch_taken_0x1f2390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2390) {
            ctx->pc = 0x1F2394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2390u;
            // 0x1f2394: 0xacc3e958  sw          $v1, -0x16A8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294961496), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2398u;
            goto label_1f2398;
        }
    }
    ctx->pc = 0x1F2398u;
label_1f2398:
    // 0x1f2398: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1f2398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1f239c: 0x8c832714  lw          $v1, 0x2714($a0)
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10004)));
    // 0x1f23a0: 0x8cc2e95c  lw          $v0, -0x16A4($a2)
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E95Cu));
    // 0x1f23a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f23a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F23A8u;
    {
        const bool branch_taken_0x1f23a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f23a8) {
            ctx->pc = 0x1F23ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F23A8u;
            // 0x1f23ac: 0xacc3e95c  sw          $v1, -0x16A4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294961500), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F23B0u;
            goto label_1f23b0;
        }
    }
    ctx->pc = 0x1F23B0u;
label_1f23b0:
    // 0x1f23b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1f23b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f23b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F23B4u;
    {
        const bool branch_taken_0x1f23b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23B4u;
        // 0x1f23b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23b4) {
            ctx->pc = 0x1F23C8u;
            goto label_1f23c8;
        }
    }
    ctx->pc = 0x1F23BCu;
    // 0x1f23bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F23BCu;
    SET_GPR_U32(ctx, 31, 0x1F23C4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F23BCu, 0x1F23C4u)) {
        return;
    }
    ctx->pc = 0x1F23C4u;
label_1f23c4:
    // 0x1f23c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f23c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f23c8:
    // 0x1f23c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F23C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23C8u;
        // 0x1f23cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F23C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F23D0u;
}
