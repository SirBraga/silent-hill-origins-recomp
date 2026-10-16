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

// Function: sub_00323B70
// Address: 0x323b70 - 0x323bf0
void sub_00323B70_0x323b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B70_0x323b70");
#endif

    switch (ctx->pc) {
        case 0x323ba8u: goto label_323ba8;
        case 0x323bccu: goto label_323bcc;
        case 0x323bdcu: goto label_323bdc;
        default: break;
    }

    ctx->pc = 0x323b70u;

    // 0x323b70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x323b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x323b74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x323b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x323b78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x323b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x323b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323b84: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x323b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x323b88: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x323b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x323b8c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x323b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x323b90: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x323b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x323b94: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x323b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x323b98: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x323b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x323b9c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x323b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x323ba0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x323BA0u;
    SET_GPR_U32(ctx, 31, 0x323BA8u);
    ctx->pc = 0x323BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BA0u;
    // 0x323ba4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x323BA0u, 0x323BA8u)) {
        return;
    }
    ctx->pc = 0x323BA8u;
label_323ba8:
    // 0x323ba8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x323ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x323bac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x323bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x323bb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bb4: 0x24843a30  addiu       $a0, $a0, 0x3A30
    ctx->pc = 0x323bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14896));
    // 0x323bb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x323bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x323bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bc0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x323bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x323bc4: 0xc0c8b26  jal         func_322C98
    ctx->pc = 0x323BC4u;
    SET_GPR_U32(ctx, 31, 0x323BCCu);
    ctx->pc = 0x323BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BC4u;
    // 0x323bc8: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322C98u, 0x323BC4u, 0x323BCCu)) {
        return;
    }
    ctx->pc = 0x323BCCu;
label_323bcc:
    // 0x323bcc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x323BCCu;
    {
        const bool branch_taken_0x323bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BCCu;
        // 0x323bd0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bcc) {
            ctx->pc = 0x323BE0u;
            goto label_323be0;
        }
    }
    ctx->pc = 0x323BD4u;
    // 0x323bd4: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x323BD4u;
    SET_GPR_U32(ctx, 31, 0x323BDCu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x323BD4u, 0x323BDCu)) {
        return;
    }
    ctx->pc = 0x323BDCu;
label_323bdc:
    // 0x323bdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x323bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_323be0:
    // 0x323be0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x323be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323be4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x323be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323be8: 0x3e00008  jr          $ra
    ctx->pc = 0x323BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BE8u;
        // 0x323bec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BF0u;
}
