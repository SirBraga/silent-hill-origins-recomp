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

// Function: sub_001D04D8
// Address: 0x1d04d8 - 0x1d0528
void sub_001D04D8_0x1d04d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D04D8_0x1d04d8");
#endif

    switch (ctx->pc) {
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        default: break;
    }

    ctx->pc = 0x1d04d8u;

label_1d04d8:
    // 0x1d04d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d04d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d04dc:
    // 0x1d04dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d04e0:
    // 0x1d04e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d04e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d04e4:
    // 0x1d04e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1d04e8:
    if (ctx->pc == 0x1D04E8u) {
        ctx->pc = 0x1D04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04E4u;
        // 0x1d04e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04ECu;
        goto label_1d04ec;
    }
    ctx->pc = 0x1D04E4u;
    {
        const bool branch_taken_0x1d04e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04E4u;
        // 0x1d04e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04e4) {
            ctx->pc = 0x1D0518u;
            goto label_1d0518;
        }
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d04f0:
    // 0x1d04f0: 0xc06c994  jal         func_1B2650
label_1d04f4:
    if (ctx->pc == 0x1D04F4u) {
        ctx->pc = 0x1D04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04F0u;
        // 0x1d04f4: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04F8u;
        goto label_1d04f8;
    }
    ctx->pc = 0x1D04F0u;
    SET_GPR_U32(ctx, 31, 0x1D04F8u);
    ctx->pc = 0x1D04F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04F0u;
    // 0x1d04f4: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D04F0u, 0x1D04F8u)) {
        return;
    }
    ctx->pc = 0x1D04F8u;
label_1d04f8:
    // 0x1d04f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d04f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d04fc:
    // 0x1d04fc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1d0500:
    if (ctx->pc == 0x1D0500u) {
        ctx->pc = 0x1D0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04FCu;
        // 0x1d0500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0504u;
        goto label_1d0504;
    }
    ctx->pc = 0x1D04FCu;
    {
        const bool branch_taken_0x1d04fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04FCu;
        // 0x1d0500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04fc) {
            ctx->pc = 0x1D0518u;
            goto label_1d0518;
        }
    }
    ctx->pc = 0x1D0504u;
label_1d0504:
    // 0x1d0504: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1d0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1d0508:
    // 0x1d0508: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1d0508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1d050c:
    // 0x1d050c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1d050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1d0510:
    // 0x1d0510: 0x60f809  jalr        $v1
label_1d0514:
    if (ctx->pc == 0x1D0514u) {
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0518u;
        goto label_1d0518;
    }
    ctx->pc = 0x1D0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0518u);
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0510u, 0x1D0518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0518u;
label_1d0518:
    // 0x1d0518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d051c:
    // 0x1d051c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0520:
    // 0x1d0520: 0x3e00008  jr          $ra
label_1d0524:
    if (ctx->pc == 0x1D0524u) {
        ctx->pc = 0x1D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0520u;
        // 0x1d0524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0528u;
        goto label_fallthrough_0x1d0520;
    }
    ctx->pc = 0x1D0520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0520u;
        // 0x1d0524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0520:
    ctx->pc = 0x1D0528u;
}
