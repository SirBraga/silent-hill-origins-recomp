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

// Function: sub_001719C8
// Address: 0x1719c8 - 0x171a28
void sub_001719C8_0x1719c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001719C8_0x1719c8");
#endif

    switch (ctx->pc) {
        case 0x1719dcu: goto label_1719dc;
        case 0x1719fcu: goto label_1719fc;
        case 0x171a04u: goto label_171a04;
        default: break;
    }

    ctx->pc = 0x1719c8u;

    // 0x1719c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1719c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1719cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1719ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1719d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1719d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1719d4: 0xc05c6b6  jal         func_171AD8
    ctx->pc = 0x1719D4u;
    SET_GPR_U32(ctx, 31, 0x1719DCu);
    ctx->pc = 0x1719D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719D4u;
    // 0x1719d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171AD8u, 0x1719D4u, 0x1719DCu)) {
        return;
    }
    ctx->pc = 0x1719DCu;
label_1719dc:
    // 0x1719dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1719dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1719e0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1719e4: 0x24635650  addiu       $v1, $v1, 0x5650
    ctx->pc = 0x1719e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22096));
    // 0x1719e8: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1719e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
    // 0x1719ec: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1719ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1719f0: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x1719f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1719f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1719F4u;
    SET_GPR_U32(ctx, 31, 0x1719FCu);
    ctx->pc = 0x1719F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719F4u;
    // 0x1719f8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1719F4u, 0x1719FCu)) {
        return;
    }
    ctx->pc = 0x1719FCu;
label_1719fc:
    // 0x1719fc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1719FCu;
    SET_GPR_U32(ctx, 31, 0x171A04u);
    ctx->pc = 0x171A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719FCu;
    // 0x171a00: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1719FCu, 0x171A04u)) {
        return;
    }
    ctx->pc = 0x171A04u;
label_171a04:
    // 0x171a04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a08: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x171a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x171a0c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x171a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x171a10: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x171a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x171a14: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x171a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x171a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a20: 0x3e00008  jr          $ra
    ctx->pc = 0x171A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A20u;
        // 0x171a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A28u;
}
