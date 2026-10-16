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

// Function: sub_00299FF0
// Address: 0x299ff0 - 0x29a050
void sub_00299FF0_0x299ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299FF0_0x299ff0");
#endif

    switch (ctx->pc) {
        case 0x29a014u: goto label_29a014;
        case 0x29a01cu: goto label_29a01c;
        case 0x29a038u: goto label_29a038;
        default: break;
    }

    ctx->pc = 0x299ff0u;

    // 0x299ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299ff4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x299ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x299ff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299ffc: 0x8c625ea0  lw          $v0, 0x5EA0($v1)
    ctx->pc = 0x299ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735EA0u));
    // 0x29a000: 0x24705ea0  addiu       $s0, $v1, 0x5EA0
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24224));
    // 0x29a004: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29A004u;
    {
        const bool branch_taken_0x29a004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A004u;
        // 0x29a008: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a004) {
            ctx->pc = 0x29A038u;
            goto label_29a038;
        }
    }
    ctx->pc = 0x29A00Cu;
    // 0x29a00c: 0xc0a6afe  jal         func_29ABF8
    ctx->pc = 0x29A00Cu;
    SET_GPR_U32(ctx, 31, 0x29A014u);
    ctx->pc = 0x29ABF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29ABF8u, 0x29A00Cu, 0x29A014u)) {
        return;
    }
    ctx->pc = 0x29A014u;
label_29a014:
    // 0x29a014: 0xc0a69d6  jal         func_29A758
    ctx->pc = 0x29A014u;
    SET_GPR_U32(ctx, 31, 0x29A01Cu);
    ctx->pc = 0x29A758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29A758u, 0x29A014u, 0x29A01Cu)) {
        return;
    }
    ctx->pc = 0x29A01Cu;
label_29a01c:
    // 0x29a01c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29a020: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x29a020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x29a024: 0x24a5d8d8  addiu       $a1, $a1, -0x2728
    ctx->pc = 0x29a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957272));
    // 0x29a028: 0x24c6d8e8  addiu       $a2, $a2, -0x2718
    ctx->pc = 0x29a028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957288));
    // 0x29a02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a030: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x29A030u;
    SET_GPR_U32(ctx, 31, 0x29A038u);
    ctx->pc = 0x29A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A030u;
    // 0x29a034: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x29A030u, 0x29A038u)) {
        return;
    }
    ctx->pc = 0x29A038u;
label_29a038:
    // 0x29a038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a044: 0x3e00008  jr          $ra
    ctx->pc = 0x29A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A044u;
        // 0x29a048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A04Cu;
    // 0x29a04c: 0x0  nop
    ctx->pc = 0x29a04cu;
    // NOP
    ctx->pc = 0x29a050u;
}
