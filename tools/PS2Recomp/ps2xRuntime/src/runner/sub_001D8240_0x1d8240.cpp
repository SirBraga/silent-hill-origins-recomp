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

// Function: sub_001D8240
// Address: 0x1d8240 - 0x1d8290
void sub_001D8240_0x1d8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8240_0x1d8240");
#endif

    switch (ctx->pc) {
        case 0x1d8250u: goto label_1d8250;
        case 0x1d8258u: goto label_1d8258;
        case 0x1d8260u: goto label_1d8260;
        case 0x1d826cu: goto label_1d826c;
        default: break;
    }

    ctx->pc = 0x1d8240u;

    // 0x1d8240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8248: 0xc080850  jal         func_202140
    ctx->pc = 0x1D8248u;
    SET_GPR_U32(ctx, 31, 0x1D8250u);
    ctx->pc = 0x1D824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8248u;
    // 0x1d824c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202140u, 0x1D8248u, 0x1D8250u)) {
        return;
    }
    ctx->pc = 0x1D8250u;
label_1d8250:
    // 0x1d8250: 0xc07f438  jal         func_1FD0E0
    ctx->pc = 0x1D8250u;
    SET_GPR_U32(ctx, 31, 0x1D8258u);
    ctx->pc = 0x1D8254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8250u;
    // 0x1d8254: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD0E0u, 0x1D8250u, 0x1D8258u)) {
        return;
    }
    ctx->pc = 0x1D8258u;
label_1d8258:
    // 0x1d8258: 0xc081042  jal         func_204108
    ctx->pc = 0x1D8258u;
    SET_GPR_U32(ctx, 31, 0x1D8260u);
    ctx->pc = 0x1D825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8258u;
    // 0x1d825c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204108u, 0x1D8258u, 0x1D8260u)) {
        return;
    }
    ctx->pc = 0x1D8260u;
label_1d8260:
    // 0x1d8260: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8264: 0xc07fca6  jal         func_1FF298
    ctx->pc = 0x1D8264u;
    SET_GPR_U32(ctx, 31, 0x1D826Cu);
    ctx->pc = 0x1D8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8264u;
    // 0x1d8268: 0x24841a78  addiu       $a0, $a0, 0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF298u, 0x1D8264u, 0x1D826Cu)) {
        return;
    }
    ctx->pc = 0x1D826Cu;
label_1d826c:
    // 0x1d826c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8270: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8270u;
        // 0x1d8274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8278u;
    // 0x1d8278: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d827c: 0x0  nop
    ctx->pc = 0x1d827cu;
    // NOP
    // 0x1d8280: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d8284: 0x0  nop
    ctx->pc = 0x1d8284u;
    // NOP
    // 0x1d8288: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d828c: 0x0  nop
    ctx->pc = 0x1d828cu;
    // NOP
    ctx->pc = 0x1d8290u;
}
