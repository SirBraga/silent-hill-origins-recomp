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

// Function: sub_0029B990
// Address: 0x29b990 - 0x29ba00
void sub_0029B990_0x29b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B990_0x29b990");
#endif

    switch (ctx->pc) {
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9d4u: goto label_29b9d4;
        case 0x29b9e8u: goto label_29b9e8;
        default: break;
    }

    ctx->pc = 0x29b990u;

    // 0x29b990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b99c: 0xc0a74f6  jal         func_29D3D8
    ctx->pc = 0x29B99Cu;
    SET_GPR_U32(ctx, 31, 0x29B9A4u);
    ctx->pc = 0x29B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B99Cu;
    // 0x29b9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D3D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D3D8u, 0x29B99Cu, 0x29B9A4u)) {
        return;
    }
    ctx->pc = 0x29B9A4u;
label_29b9a4:
    // 0x29b9a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9B0u;
        // 0x29b9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B9B8u;
label_29b9b8:
    // 0x29b9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b9bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b9c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b9cc: 0xc0a7514  jal         func_29D450
    ctx->pc = 0x29B9CCu;
    SET_GPR_U32(ctx, 31, 0x29B9D4u);
    ctx->pc = 0x29B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9CCu;
    // 0x29b9d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D450u, 0x29B9CCu, 0x29B9D4u)) {
        return;
    }
    ctx->pc = 0x29B9D4u;
label_29b9d4:
    // 0x29b9d4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x29b9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29b9d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B9D8u;
    {
        const bool branch_taken_0x29b9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9D8u;
        // 0x29b9dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9d8) {
            ctx->pc = 0x29B9ECu;
            goto label_29b9ec;
        }
    }
    ctx->pc = 0x29B9E0u;
    // 0x29b9e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29B9E0u;
    SET_GPR_U32(ctx, 31, 0x29B9E8u);
    ctx->pc = 0x29B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9E0u;
    // 0x29b9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29B9E0u, 0x29B9E8u)) {
        return;
    }
    ctx->pc = 0x29B9E8u;
label_29b9e8:
    // 0x29b9e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b9ec:
    // 0x29b9ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x29B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9F4u;
        // 0x29b9f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B9FCu;
    // 0x29b9fc: 0x0  nop
    ctx->pc = 0x29b9fcu;
    // NOP
    ctx->pc = 0x29ba00u;
}
