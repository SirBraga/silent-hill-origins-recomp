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

// Function: sub_001FF580
// Address: 0x1ff580 - 0x1ff5c0
void sub_001FF580_0x1ff580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF580_0x1ff580");
#endif

    switch (ctx->pc) {
        case 0x1ff5acu: goto label_1ff5ac;
        default: break;
    }

    ctx->pc = 0x1ff580u;

    // 0x1ff580: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ff580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ff584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff588: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x1ff588u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1ff58c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff598: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1ff598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ff59c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5a4: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x1FF5A4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ACu);
    ctx->pc = 0x1FF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5A4u;
    // 0x1ff5a8: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x1FF5A4u, 0x1FF5ACu)) {
        return;
    }
    ctx->pc = 0x1FF5ACu;
label_1ff5ac:
    // 0x1ff5ac: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1ff5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1ff5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff5b4: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x1ff5b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C0134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C0134u, _value); } while (0);
    // 0x1ff5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5B8u;
        // 0x1ff5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF5C0u;
}
