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

// Function: sub_001FF660
// Address: 0x1ff660 - 0x1ff6a0
void sub_001FF660_0x1ff660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF660_0x1ff660");
#endif

    switch (ctx->pc) {
        case 0x1ff68cu: goto label_1ff68c;
        default: break;
    }

    ctx->pc = 0x1ff660u;

    // 0x1ff660: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ff664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff668: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x1ff668u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1ff66c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff678: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1ff678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1ff67c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ff67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff684: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x1FF684u;
    SET_GPR_U32(ctx, 31, 0x1FF68Cu);
    ctx->pc = 0x1FF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF684u;
    // 0x1ff688: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x1FF684u, 0x1FF68Cu)) {
        return;
    }
    ctx->pc = 0x1FF68Cu;
label_1ff68c:
    // 0x1ff68c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1ff68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1ff690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff694: 0xac620140  sw          $v0, 0x140($v1)
    ctx->pc = 0x1ff694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C0140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C0140u, _value); } while (0);
    // 0x1ff698: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF698u;
        // 0x1ff69c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF6A0u;
}
