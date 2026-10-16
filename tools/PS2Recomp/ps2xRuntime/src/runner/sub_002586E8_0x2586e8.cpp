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

// Function: sub_002586E8
// Address: 0x2586e8 - 0x258710
void sub_002586E8_0x2586e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002586E8_0x2586e8");
#endif

    switch (ctx->pc) {
        case 0x2586e8u: goto label_2586e8;
        case 0x2586ecu: goto label_2586ec;
        case 0x2586f0u: goto label_2586f0;
        case 0x2586f4u: goto label_2586f4;
        case 0x2586f8u: goto label_2586f8;
        case 0x2586fcu: goto label_2586fc;
        case 0x258700u: goto label_258700;
        case 0x258704u: goto label_258704;
        case 0x258708u: goto label_258708;
        case 0x25870cu: goto label_25870c;
        default: break;
    }

    ctx->pc = 0x2586e8u;

label_2586e8:
    // 0x2586e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2586e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2586ec:
    // 0x2586ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2586ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2586f0:
    // 0x2586f0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2586f4:
    // 0x2586f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2586f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2586f8:
    // 0x2586f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2586f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2586fc:
    // 0x2586fc: 0x40f809  jalr        $v0
label_258700:
    if (ctx->pc == 0x258700u) {
        ctx->pc = 0x258700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586FCu;
        // 0x258700: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258704u;
        goto label_258704;
    }
    ctx->pc = 0x2586FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258704u);
        ctx->pc = 0x258700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586FCu;
        // 0x258700: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586FCu, 0x258704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258704u;
label_258704:
    // 0x258704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258708:
    // 0x258708: 0x3e00008  jr          $ra
label_25870c:
    if (ctx->pc == 0x25870Cu) {
        ctx->pc = 0x25870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258708u;
        // 0x25870c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258710u;
        goto label_fallthrough_0x258708;
    }
    ctx->pc = 0x258708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258708u;
        // 0x25870c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258708:
    ctx->pc = 0x258710u;
}
