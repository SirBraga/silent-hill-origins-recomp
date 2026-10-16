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

// Function: sub_002F2570
// Address: 0x2f2570 - 0x2f25b8
void sub_002F2570_0x2f2570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2570_0x2f2570");
#endif

    switch (ctx->pc) {
        case 0x2f2584u: goto label_2f2584;
        default: break;
    }

    ctx->pc = 0x2f2570u;

    // 0x2f2570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f257c: 0xc0bc916  jal         func_2F2458
    ctx->pc = 0x2F257Cu;
    SET_GPR_U32(ctx, 31, 0x2F2584u);
    ctx->pc = 0x2F2580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F257Cu;
    // 0x2f2580: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2458u, 0x2F257Cu, 0x2F2584u)) {
        return;
    }
    ctx->pc = 0x2F2584u;
label_2f2584:
    // 0x2f2584: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f2584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2588: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f2588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2f258c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2590: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2590u;
    {
        const bool branch_taken_0x2f2590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2590u;
        // 0x2f2594: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2590) {
            ctx->pc = 0x2F25A4u;
            goto label_2f25a4;
        }
    }
    ctx->pc = 0x2F2598u;
    // 0x2f2598: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f259c: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x2f259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
    // 0x2f25a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f25a4:
    // 0x2f25a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f25a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f25a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f25ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25ACu;
        // 0x2f25b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F25ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F25B4u;
    // 0x2f25b4: 0x0  nop
    ctx->pc = 0x2f25b4u;
    // NOP
    ctx->pc = 0x2f25b8u;
}
