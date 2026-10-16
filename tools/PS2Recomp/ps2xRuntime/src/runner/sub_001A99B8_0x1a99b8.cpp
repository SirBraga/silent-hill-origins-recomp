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

// Function: sub_001A99B8
// Address: 0x1a99b8 - 0x1a9a18
void sub_001A99B8_0x1a99b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A99B8_0x1a99b8");
#endif

    switch (ctx->pc) {
        case 0x1a9a08u: goto label_1a9a08;
        default: break;
    }

    ctx->pc = 0x1a99b8u;

    // 0x1a99b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a99bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a99bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a99c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a99c4: 0x24e90004  addiu       $t1, $a3, 0x4
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a99c8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1a99c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a99ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99d0: 0x8ce30204  lw          $v1, 0x204($a3)
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 516)));
    // 0x1a99d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a99d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a99dc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a99e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a99e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a99e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1a99e8: 0xace30204  sw          $v1, 0x204($a3)
    ctx->pc = 0x1a99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 516), GPR_U32(ctx, 3));
    // 0x1a99ec: 0x8d250200  lw          $a1, 0x200($t1)
    ctx->pc = 0x1a99ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x1a99f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a99f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a99f4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1a99f8: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1a99f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1a99fc: 0x8d27fffc  lw          $a3, -0x4($t1)
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
    // 0x1a9a00: 0xc06a6e8  jal         func_1A9BA0
    ctx->pc = 0x1A9A00u;
    SET_GPR_U32(ctx, 31, 0x1A9A08u);
    ctx->pc = 0x1A9A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A00u;
    // 0x1a9a04: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9BA0u, 0x1A9A00u, 0x1A9A08u)) {
        return;
    }
    ctx->pc = 0x1A9A08u;
label_1a9a08:
    // 0x1a9a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A0Cu;
        // 0x1a9a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A14u;
    // 0x1a9a14: 0x0  nop
    ctx->pc = 0x1a9a14u;
    // NOP
    ctx->pc = 0x1a9a18u;
}
