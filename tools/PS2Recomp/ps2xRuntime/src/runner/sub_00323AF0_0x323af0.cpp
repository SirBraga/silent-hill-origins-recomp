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

// Function: sub_00323AF0
// Address: 0x323af0 - 0x323b70
void sub_00323AF0_0x323af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AF0_0x323af0");
#endif

    switch (ctx->pc) {
        case 0x323b28u: goto label_323b28;
        case 0x323b4cu: goto label_323b4c;
        case 0x323b5cu: goto label_323b5c;
        default: break;
    }

    ctx->pc = 0x323af0u;

    // 0x323af0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x323af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x323af4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x323af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x323af8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x323af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x323afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323b04: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x323b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x323b08: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x323b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x323b0c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x323b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x323b10: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x323b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x323b14: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x323b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x323b18: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x323b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x323b1c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x323b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x323b20: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x323B20u;
    SET_GPR_U32(ctx, 31, 0x323B28u);
    ctx->pc = 0x323B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B20u;
    // 0x323b24: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x323B20u, 0x323B28u)) {
        return;
    }
    ctx->pc = 0x323B28u;
label_323b28:
    // 0x323b28: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x323b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x323b2c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x323b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x323b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b34: 0x24843a08  addiu       $a0, $a0, 0x3A08
    ctx->pc = 0x323b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14856));
    // 0x323b38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x323b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x323b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x323b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x323b44: 0xc0c8b26  jal         func_322C98
    ctx->pc = 0x323B44u;
    SET_GPR_U32(ctx, 31, 0x323B4Cu);
    ctx->pc = 0x323B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B44u;
    // 0x323b48: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322C98u, 0x323B44u, 0x323B4Cu)) {
        return;
    }
    ctx->pc = 0x323B4Cu;
label_323b4c:
    // 0x323b4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x323B4Cu;
    {
        const bool branch_taken_0x323b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B4Cu;
        // 0x323b50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b4c) {
            ctx->pc = 0x323B60u;
            goto label_323b60;
        }
    }
    ctx->pc = 0x323B54u;
    // 0x323b54: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x323B54u;
    SET_GPR_U32(ctx, 31, 0x323B5Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x323B54u, 0x323B5Cu)) {
        return;
    }
    ctx->pc = 0x323B5Cu;
label_323b5c:
    // 0x323b5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x323b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_323b60:
    // 0x323b60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x323b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323b64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x323b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b68: 0x3e00008  jr          $ra
    ctx->pc = 0x323B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B68u;
        // 0x323b6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B70u;
}
