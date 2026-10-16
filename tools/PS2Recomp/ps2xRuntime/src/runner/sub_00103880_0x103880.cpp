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

// Function: sub_00103880
// Address: 0x103880 - 0x103918
void sub_00103880_0x103880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103880_0x103880");
#endif

    switch (ctx->pc) {
        case 0x1038a8u: goto label_1038a8;
        default: break;
    }

    ctx->pc = 0x103880u;

    // 0x103880: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x103880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103888: 0x8ce2025c  lw          $v0, 0x25C($a3)
    ctx->pc = 0x103888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 604)));
    // 0x10388c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10388Cu;
    {
        const bool branch_taken_0x10388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10388Cu;
        // 0x103890: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10388c) {
            ctx->pc = 0x1038CCu;
            goto label_1038cc;
        }
    }
    ctx->pc = 0x103894u;
    // 0x103894: 0x8ce2021c  lw          $v0, 0x21C($a3)
    ctx->pc = 0x103894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 540)));
    // 0x103898: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103898u;
    {
        const bool branch_taken_0x103898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x103898) {
            ctx->pc = 0x10389Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103898u;
            // 0x10389c: 0x8ce2025c  lw          $v0, 0x25C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1038A8u;
            goto label_1038a8;
        }
    }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1038A0u;
    {
        const bool branch_taken_0x1038a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A0u;
        // 0x1038a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038a0) {
            ctx->pc = 0x1038CCu;
            goto label_1038cc;
        }
    }
    ctx->pc = 0x1038A8u;
label_1038a8:
    // 0x1038a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1038a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1038ac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1038acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1038b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1038B0u;
    {
        const bool branch_taken_0x1038b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038B0u;
        // 0x1038b4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038b0) {
            ctx->pc = 0x1038CCu;
            goto label_1038cc;
        }
    }
    ctx->pc = 0x1038B8u;
    // 0x1038b8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1038b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1038bc: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x1038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x1038c0: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1038C0u;
    {
        const bool branch_taken_0x1038c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1038c0) {
            ctx->pc = 0x1038C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1038C0u;
            // 0x1038c4: 0x8ce2025c  lw          $v0, 0x25C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1038A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1038a8;
        }
    }
    ctx->pc = 0x1038C8u;
    // 0x1038c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1038c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1038cc:
    // 0x1038cc: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1038CCu;
    {
        const bool branch_taken_0x1038cc = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x1038cc) {
            ctx->pc = 0x103910u;
            goto label_103910;
        }
    }
    ctx->pc = 0x1038D4u;
    // 0x1038d4: 0x8ce2025c  lw          $v0, 0x25C($a3)
    ctx->pc = 0x1038d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 604)));
    // 0x1038d8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1038dc: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1038DCu;
    {
        const bool branch_taken_0x1038dc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1038E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038DCu;
        // 0x1038e0: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038dc) {
            ctx->pc = 0x103904u;
            goto label_103904;
        }
    }
    ctx->pc = 0x1038E4u;
    // 0x1038e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1038E4u;
    {
        const bool branch_taken_0x1038e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038E4u;
        // 0x1038e8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038e4) {
            ctx->pc = 0x103904u;
            goto label_103904;
        }
    }
    ctx->pc = 0x1038ECu;
    // 0x1038ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1038f0: 0x24e3021c  addiu       $v1, $a3, 0x21C
    ctx->pc = 0x1038f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 540));
    // 0x1038f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1038f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1038f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1038f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1038fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1038fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103900: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x103900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_103904:
    // 0x103904: 0x8ce2025c  lw          $v0, 0x25C($a3)
    ctx->pc = 0x103904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 604)));
    // 0x103908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10390c: 0xace2025c  sw          $v0, 0x25C($a3)
    ctx->pc = 0x10390cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 604), GPR_U32(ctx, 2));
label_103910:
    // 0x103910: 0x3e00008  jr          $ra
    ctx->pc = 0x103910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103918u;
}
