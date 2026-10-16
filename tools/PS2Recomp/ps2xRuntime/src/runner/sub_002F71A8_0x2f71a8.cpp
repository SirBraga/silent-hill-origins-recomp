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

// Function: sub_002F71A8
// Address: 0x2f71a8 - 0x2f7220
void sub_002F71A8_0x2f71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F71A8_0x2f71a8");
#endif

    switch (ctx->pc) {
        case 0x2f71ccu: goto label_2f71cc;
        case 0x2f71e0u: goto label_2f71e0;
        case 0x2f71f0u: goto label_2f71f0;
        default: break;
    }

    ctx->pc = 0x2f71a8u;

    // 0x2f71a8: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f71ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f71acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f71b0: 0x8c4414c0  lw          $a0, 0x14C0($v0)
    ctx->pc = 0x2f71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7214C0u));
    // 0x2f71b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f71b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f71b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f71b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f71bc: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F71BCu;
    {
        const bool branch_taken_0x2f71bc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71BCu;
        // 0x2f71c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71bc) {
            ctx->pc = 0x2F71CCu;
            goto label_2f71cc;
        }
    }
    ctx->pc = 0x2F71C4u;
    // 0x2f71c4: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2F71C4u;
    SET_GPR_U32(ctx, 31, 0x2F71CCu);
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2F71C4u, 0x2F71CCu)) {
        return;
    }
    ctx->pc = 0x2F71CCu;
label_2f71cc:
    // 0x2f71cc: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f71d0: 0x245014c8  addiu       $s0, $v0, 0x14C8
    ctx->pc = 0x2f71d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f71d4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x2f71d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2f71d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7214C8u));
    // 0x2f71dc: 0x0  nop
    ctx->pc = 0x2f71dcu;
    // NOP
label_2f71e0:
    // 0x2f71e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F71E0u;
    {
        const bool branch_taken_0x2f71e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71e0) {
            ctx->pc = 0x2F71E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F71E0u;
            // 0x2f71e4: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F71F8u;
            goto label_2f71f8;
        }
    }
    ctx->pc = 0x2F71E8u;
    // 0x2f71e8: 0xc0be122  jal         func_2F8488
    ctx->pc = 0x2F71E8u;
    SET_GPR_U32(ctx, 31, 0x2F71F0u);
    ctx->pc = 0x2F71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71E8u;
    // 0x2f71ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8488u, 0x2F71E8u, 0x2F71F0u)) {
        return;
    }
    ctx->pc = 0x2F71F0u;
label_2f71f0:
    // 0x2f71f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f71f4: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x2f71f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2f71f8:
    // 0x2f71f8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f71f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f71fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F71FCu;
    {
        const bool branch_taken_0x2f71fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f71fc) {
            ctx->pc = 0x2F7200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F71FCu;
            // 0x2f7200: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F71E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f71e0;
        }
    }
    ctx->pc = 0x2F7204u;
    // 0x2f7204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f720c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f720cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7214: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7214u;
        // 0x2f7218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F721Cu;
    // 0x2f721c: 0x0  nop
    ctx->pc = 0x2f721cu;
    // NOP
    ctx->pc = 0x2f7220u;
}
