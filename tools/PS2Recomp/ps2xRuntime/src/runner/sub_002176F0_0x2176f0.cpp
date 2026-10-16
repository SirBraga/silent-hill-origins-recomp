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

// Function: sub_002176F0
// Address: 0x2176f0 - 0x217748
void sub_002176F0_0x2176f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176F0_0x2176f0");
#endif

    switch (ctx->pc) {
        case 0x217730u: goto label_217730;
        default: break;
    }

    ctx->pc = 0x2176f0u;

    // 0x2176f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2176f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2176f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2176f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2176fc: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x217700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x217700u;
    {
        const bool branch_taken_0x217700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217700u;
        // 0x217704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217700) {
            ctx->pc = 0x217734u;
            goto label_217734;
        }
    }
    ctx->pc = 0x217708u;
    // 0x217708: 0xace40264  sw          $a0, 0x264($a3)
    ctx->pc = 0x217708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 612), GPR_U32(ctx, 4));
    // 0x21770c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217710: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x217710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x217714: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x217714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217718: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x217718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21771c: 0xace20260  sw          $v0, 0x260($a3)
    ctx->pc = 0x21771cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 608), GPR_U32(ctx, 2));
    // 0x217720: 0xa0e3025c  sb          $v1, 0x25C($a3)
    ctx->pc = 0x217720u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 604), (uint8_t)GPR_U32(ctx, 3));
    // 0x217724: 0xace60268  sw          $a2, 0x268($a3)
    ctx->pc = 0x217724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 616), GPR_U32(ctx, 6));
    // 0x217728: 0xc085b1c  jal         func_216C70
    ctx->pc = 0x217728u;
    SET_GPR_U32(ctx, 31, 0x217730u);
    ctx->pc = 0x21772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217728u;
    // 0x21772c: 0xace0026c  sw          $zero, 0x26C($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 620), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216C70u, 0x217728u, 0x217730u)) {
        return;
    }
    ctx->pc = 0x217730u;
label_217730:
    // 0x217730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217734:
    // 0x217734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217738: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x217738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21773c: 0x3e00008  jr          $ra
    ctx->pc = 0x21773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21773Cu;
        // 0x217740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217744u;
    // 0x217744: 0x0  nop
    ctx->pc = 0x217744u;
    // NOP
    ctx->pc = 0x217748u;
}
