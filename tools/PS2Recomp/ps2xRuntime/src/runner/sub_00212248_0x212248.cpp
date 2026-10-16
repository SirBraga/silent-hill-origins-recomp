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

// Function: sub_00212248
// Address: 0x212248 - 0x212270
void sub_00212248_0x212248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212248_0x212248");
#endif

    switch (ctx->pc) {
        case 0x212264u: goto label_212264;
        default: break;
    }

    ctx->pc = 0x212248u;

    // 0x212248: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x212248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21224c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21224cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212250: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x212250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212258: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x212258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x21225c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x21225Cu;
    SET_GPR_U32(ctx, 31, 0x212264u);
    ctx->pc = 0x212260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21225Cu;
    // 0x212260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x21225Cu, 0x212264u)) {
        return;
    }
    ctx->pc = 0x212264u;
label_212264:
    // 0x212264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212268: 0x3e00008  jr          $ra
    ctx->pc = 0x212268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212268u;
        // 0x21226c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212270u;
}
