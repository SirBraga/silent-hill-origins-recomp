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

// Function: sub_001F8560
// Address: 0x1f8560 - 0x1f85c8
void sub_001F8560_0x1f8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8560_0x1f8560");
#endif

    switch (ctx->pc) {
        case 0x1f859cu: goto label_1f859c;
        default: break;
    }

    ctx->pc = 0x1f8560u;

    // 0x1f8560: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1f8564: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8568: 0x8c621a40  lw          $v0, 0x1A40($v1)
    ctx->pc = 0x1f8568u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A40u));
    // 0x1f856c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8570: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8574: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F8574u;
    {
        const bool branch_taken_0x1f8574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8574u;
        // 0x1f8578: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8574) {
            ctx->pc = 0x1F85ACu;
            goto label_1f85ac;
        }
    }
    ctx->pc = 0x1F857Cu;
    // 0x1f857c: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1f857cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1f8580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8584: 0x26301a30  addiu       $s0, $s1, 0x1A30
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6704));
    // 0x1f8588: 0xac621a40  sw          $v0, 0x1A40($v1)
    ctx->pc = 0x1f8588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6720), GPR_U32(ctx, 2));
    // 0x1f858c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8594: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F8594u;
    SET_GPR_U32(ctx, 31, 0x1F859Cu);
    ctx->pc = 0x1F8598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8594u;
    // 0x1f8598: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F8594u, 0x1F859Cu)) {
        return;
    }
    ctx->pc = 0x1F859Cu;
label_1f859c:
    // 0x1f859c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1f85a0: 0x24631a48  addiu       $v1, $v1, 0x1A48
    ctx->pc = 0x1f85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6728));
    // 0x1f85a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F85A4u;
    {
        const bool branch_taken_0x1f85a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A4u;
        // 0x1f85a8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85a4) {
            ctx->pc = 0x1F85B0u;
            goto label_1f85b0;
        }
    }
    ctx->pc = 0x1F85ACu;
label_1f85ac:
    // 0x1f85ac: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1f85acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_1f85b0:
    // 0x1f85b0: 0x26221a30  addiu       $v0, $s1, 0x1A30
    ctx->pc = 0x1f85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6704));
    // 0x1f85b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f85b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f85b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f85b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f85bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f85bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85C0u;
        // 0x1f85c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85C8u;
}
