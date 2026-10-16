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

// Function: sub_003254C0
// Address: 0x3254c0 - 0x325508
void sub_003254C0_0x3254c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003254C0_0x3254c0");
#endif

    switch (ctx->pc) {
        case 0x3254c0u: goto label_3254c0;
        case 0x3254c4u: goto label_3254c4;
        case 0x3254c8u: goto label_3254c8;
        case 0x3254ccu: goto label_3254cc;
        case 0x3254d0u: goto label_3254d0;
        case 0x3254d4u: goto label_3254d4;
        case 0x3254d8u: goto label_3254d8;
        case 0x3254dcu: goto label_3254dc;
        case 0x3254e0u: goto label_3254e0;
        case 0x3254e4u: goto label_3254e4;
        case 0x3254e8u: goto label_3254e8;
        case 0x3254ecu: goto label_3254ec;
        case 0x3254f0u: goto label_3254f0;
        case 0x3254f4u: goto label_3254f4;
        case 0x3254f8u: goto label_3254f8;
        case 0x3254fcu: goto label_3254fc;
        case 0x325500u: goto label_325500;
        case 0x325504u: goto label_325504;
        default: break;
    }

    ctx->pc = 0x3254c0u;

label_3254c0:
    // 0x3254c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3254c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3254c4:
    // 0x3254c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3254c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3254c8:
    // 0x3254c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3254c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3254cc:
    // 0x3254cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3254d0:
    if (ctx->pc == 0x3254D0u) {
        ctx->pc = 0x3254D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254CCu;
        // 0x3254d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3254D4u;
        goto label_3254d4;
    }
    ctx->pc = 0x3254CCu;
    {
        const bool branch_taken_0x3254cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254CCu;
        // 0x3254d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254cc) {
            ctx->pc = 0x3254ECu;
            goto label_3254ec;
        }
    }
    ctx->pc = 0x3254D4u;
label_3254d4:
    // 0x3254d4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3254d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3254d8:
    // 0x3254d8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3254d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3254dc:
    // 0x3254dc: 0x8c5cd280  lw          $gp, -0x2D80($v0)
    ctx->pc = 0x3254dcu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955648)));
label_3254e0:
    // 0x3254e0: 0x60f809  jalr        $v1
label_3254e4:
    if (ctx->pc == 0x3254E4u) {
        ctx->pc = 0x3254E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254E0u;
        // 0x3254e4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3254E8u;
        goto label_3254e8;
    }
    ctx->pc = 0x3254E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3254E8u);
        ctx->pc = 0x3254E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254E0u;
        // 0x3254e4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254E0u, 0x3254E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3254E8u;
label_3254e8:
    // 0x3254e8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3254e8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3254ec:
    // 0x3254ec: 0xf  sync
    ctx->pc = 0x3254ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3254f0:
    // 0x3254f0: 0x42000038  ei
    ctx->pc = 0x3254f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3254f4:
    // 0x3254f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3254f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3254f8:
    // 0x3254f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3254f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3254fc:
    // 0x3254fc: 0x3e00008  jr          $ra
label_325500:
    if (ctx->pc == 0x325500u) {
        ctx->pc = 0x325500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254FCu;
        // 0x325500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325504u;
        goto label_325504;
    }
    ctx->pc = 0x3254FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254FCu;
        // 0x325500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325504u;
label_325504:
    // 0x325504: 0x0  nop
    ctx->pc = 0x325504u;
    // NOP
    ctx->pc = 0x325508u;
}
