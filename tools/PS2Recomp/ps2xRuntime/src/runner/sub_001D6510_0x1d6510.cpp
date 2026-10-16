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

// Function: sub_001D6510
// Address: 0x1d6510 - 0x1d6550
void sub_001D6510_0x1d6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6510_0x1d6510");
#endif

    switch (ctx->pc) {
        case 0x1d6510u: goto label_1d6510;
        case 0x1d6514u: goto label_1d6514;
        case 0x1d6518u: goto label_1d6518;
        case 0x1d651cu: goto label_1d651c;
        case 0x1d6520u: goto label_1d6520;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6528u: goto label_1d6528;
        case 0x1d652cu: goto label_1d652c;
        case 0x1d6530u: goto label_1d6530;
        case 0x1d6534u: goto label_1d6534;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6540u: goto label_1d6540;
        case 0x1d6544u: goto label_1d6544;
        case 0x1d6548u: goto label_1d6548;
        case 0x1d654cu: goto label_1d654c;
        default: break;
    }

    ctx->pc = 0x1d6510u;

label_1d6510:
    // 0x1d6510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d6514:
    // 0x1d6514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6518:
    // 0x1d6518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d651c:
    // 0x1d651c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d651cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6520:
    // 0x1d6520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6524:
    // 0x1d6524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6528:
    // 0x1d6528: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x1d6528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d652c:
    // 0x1d652c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d652cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6530:
    // 0x1d6530: 0x85430090  lh          $v1, 0x90($t2)
    ctx->pc = 0x1d6530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 144)));
label_1d6534:
    // 0x1d6534: 0x8d420094  lw          $v0, 0x94($t2)
    ctx->pc = 0x1d6534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 148)));
label_1d6538:
    // 0x1d6538: 0x40f809  jalr        $v0
label_1d653c:
    if (ctx->pc == 0x1D653Cu) {
        ctx->pc = 0x1D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6538u;
        // 0x1d653c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6540u;
        goto label_1d6540;
    }
    ctx->pc = 0x1D6538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6540u);
        ctx->pc = 0x1D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6538u;
        // 0x1d653c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6538u, 0x1D6540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6540u;
label_1d6540:
    // 0x1d6540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6544:
    // 0x1d6544: 0x3e00008  jr          $ra
label_1d6548:
    if (ctx->pc == 0x1D6548u) {
        ctx->pc = 0x1D6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6544u;
        // 0x1d6548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D654Cu;
        goto label_1d654c;
    }
    ctx->pc = 0x1D6544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6544u;
        // 0x1d6548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D654Cu;
label_1d654c:
    // 0x1d654c: 0x0  nop
    ctx->pc = 0x1d654cu;
    // NOP
    ctx->pc = 0x1d6550u;
}
