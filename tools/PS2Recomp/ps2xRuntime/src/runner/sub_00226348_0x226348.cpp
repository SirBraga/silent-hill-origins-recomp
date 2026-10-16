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

// Function: sub_00226348
// Address: 0x226348 - 0x226398
void sub_00226348_0x226348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226348_0x226348");
#endif

    switch (ctx->pc) {
        case 0x226348u: goto label_226348;
        case 0x22634cu: goto label_22634c;
        case 0x226350u: goto label_226350;
        case 0x226354u: goto label_226354;
        case 0x226358u: goto label_226358;
        case 0x22635cu: goto label_22635c;
        case 0x226360u: goto label_226360;
        case 0x226364u: goto label_226364;
        case 0x226368u: goto label_226368;
        case 0x22636cu: goto label_22636c;
        case 0x226370u: goto label_226370;
        case 0x226374u: goto label_226374;
        case 0x226378u: goto label_226378;
        case 0x22637cu: goto label_22637c;
        case 0x226380u: goto label_226380;
        case 0x226384u: goto label_226384;
        case 0x226388u: goto label_226388;
        case 0x22638cu: goto label_22638c;
        case 0x226390u: goto label_226390;
        case 0x226394u: goto label_226394;
        default: break;
    }

    ctx->pc = 0x226348u;

label_226348:
    // 0x226348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22634c:
    // 0x22634c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_226350:
    // 0x226350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226354:
    // 0x226354: 0xc0898ac  jal         func_2262B0
label_226358:
    if (ctx->pc == 0x226358u) {
        ctx->pc = 0x226358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226354u;
        // 0x226358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22635Cu;
        goto label_22635c;
    }
    ctx->pc = 0x226354u;
    SET_GPR_U32(ctx, 31, 0x22635Cu);
    ctx->pc = 0x226358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226354u;
    // 0x226358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2262B0u, 0x226354u, 0x22635Cu)) {
        return;
    }
    ctx->pc = 0x22635Cu;
label_22635c:
    // 0x22635c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22635cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_226360:
    // 0x226360: 0x8cc63e88  lw          $a2, 0x3E88($a2)
    ctx->pc = 0x226360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16008)));
label_226364:
    // 0x226364: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_226368:
    // 0x226368: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_22636c:
    // 0x22636c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226370:
    // 0x226370: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_226374:
    // 0x226374: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x226374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_226378:
    // 0x226378: 0x40f809  jalr        $v0
label_22637c:
    if (ctx->pc == 0x22637Cu) {
        ctx->pc = 0x22637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226378u;
        // 0x22637c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226380u;
        goto label_226380;
    }
    ctx->pc = 0x226378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226380u);
        ctx->pc = 0x22637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226378u;
        // 0x22637c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226378u, 0x226380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226380u;
label_226380:
    // 0x226380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226384:
    // 0x226384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226388:
    // 0x226388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22638c:
    // 0x22638c: 0x3e00008  jr          $ra
label_226390:
    if (ctx->pc == 0x226390u) {
        ctx->pc = 0x226390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22638Cu;
        // 0x226390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226394u;
        goto label_226394;
    }
    ctx->pc = 0x22638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22638Cu;
        // 0x226390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22638Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226394u;
label_226394:
    // 0x226394: 0x0  nop
    ctx->pc = 0x226394u;
    // NOP
    ctx->pc = 0x226398u;
}
