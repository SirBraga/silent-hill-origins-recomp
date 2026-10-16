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

// Function: sub_00206608
// Address: 0x206608 - 0x206628
void sub_00206608_0x206608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206608_0x206608");
#endif

    switch (ctx->pc) {
        case 0x20661cu: goto label_20661c;
        default: break;
    }

    ctx->pc = 0x206608u;

    // 0x206608: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x206608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20660c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20660cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206614: 0xc08095c  jal         func_202570
    ctx->pc = 0x206614u;
    SET_GPR_U32(ctx, 31, 0x20661Cu);
    ctx->pc = 0x206618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206614u;
    // 0x206618: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202570u, 0x206614u, 0x20661Cu)) {
        return;
    }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20661cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206620: 0x3e00008  jr          $ra
    ctx->pc = 0x206620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206620u;
        // 0x206624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206628u;
}
