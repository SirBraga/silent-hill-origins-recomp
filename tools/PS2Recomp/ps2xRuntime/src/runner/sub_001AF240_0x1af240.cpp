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

// Function: sub_001AF240
// Address: 0x1af240 - 0x1af2b8
void sub_001AF240_0x1af240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF240_0x1af240");
#endif

    switch (ctx->pc) {
        case 0x1af260u: goto label_1af260;
        case 0x1af2a0u: goto label_1af2a0;
        default: break;
    }

    ctx->pc = 0x1af240u;

label_1af240:
    // 0x1af240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af248: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1af24c: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1AF24Cu;
    {
        const bool branch_taken_0x1af24c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF24Cu;
        // 0x1af250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af24c) {
            ctx->pc = 0x1AF28Cu;
            goto label_1af28c;
        }
    }
    ctx->pc = 0x1AF254u;
    // 0x1af254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af258: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1af258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1af25c: 0x0  nop
    ctx->pc = 0x1af25cu;
    // NOP
label_1af260:
    // 0x1af260: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1af260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1af264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF264u;
    {
        const bool branch_taken_0x1af264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF264u;
        // 0x1af268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af264) {
            ctx->pc = 0x1AF278u;
            goto label_1af278;
        }
    }
    ctx->pc = 0x1AF26Cu;
    // 0x1af26c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1af26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1af270: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1af270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af274: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1af274u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_1af278:
    // 0x1af278: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF278u;
        // 0x1af27c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF2A8u;
            goto label_1af2a8;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1af280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1af284: 0x54c0fff6  bnel        $a2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF284u;
    {
        const bool branch_taken_0x1af284 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af284) {
            ctx->pc = 0x1AF288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF284u;
            // 0x1af288: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af260;
        }
    }
    ctx->pc = 0x1AF28Cu;
label_1af28c:
    // 0x1af28c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1af290: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF290u;
    {
        const bool branch_taken_0x1af290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF290u;
        // 0x1af294: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af290) {
            ctx->pc = 0x1AF2A8u;
            goto label_1af2a8;
        }
    }
    ctx->pc = 0x1AF298u;
    // 0x1af298: 0xc06bc90  jal         func_1AF240
    ctx->pc = 0x1AF298u;
    SET_GPR_U32(ctx, 31, 0x1AF2A0u);
    ctx->pc = 0x1AF240u;
    goto label_1af240;
    ctx->pc = 0x1AF2A0u;
label_1af2a0:
    // 0x1af2a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1af2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2a4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1af2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1af2a8:
    // 0x1af2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2ACu;
        // 0x1af2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF2B4u;
    // 0x1af2b4: 0x0  nop
    ctx->pc = 0x1af2b4u;
    // NOP
    ctx->pc = 0x1af2b8u;
}
