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

// Function: sub_0029D008
// Address: 0x29d008 - 0x29d058
void sub_0029D008_0x29d008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D008_0x29d008");
#endif

    switch (ctx->pc) {
        case 0x29d020u: goto label_29d020;
        case 0x29d040u: goto label_29d040;
        default: break;
    }

    ctx->pc = 0x29d008u;

    // 0x29d008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d018: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x29D018u;
    SET_GPR_U32(ctx, 31, 0x29D020u);
    ctx->pc = 0x29D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D018u;
    // 0x29d01c: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29D018u, 0x29D020u)) {
        return;
    }
    ctx->pc = 0x29D020u;
label_29d020:
    // 0x29d020: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D020u;
    {
        const bool branch_taken_0x29d020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D020u;
        // 0x29d024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d020) {
            ctx->pc = 0x29D030u;
            goto label_29d030;
        }
    }
    ctx->pc = 0x29D028u;
    // 0x29d028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29D028u;
    {
        const bool branch_taken_0x29d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D028u;
        // 0x29d02c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d028) {
            ctx->pc = 0x29D044u;
            goto label_29d044;
        }
    }
    ctx->pc = 0x29D030u;
label_29d030:
    // 0x29d030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d034: 0x24a60400  addiu       $a2, $a1, 0x400
    ctx->pc = 0x29d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x29d038: 0xc0a72e0  jal         func_29CB80
    ctx->pc = 0x29D038u;
    SET_GPR_U32(ctx, 31, 0x29D040u);
    ctx->pc = 0x29D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D038u;
    // 0x29d03c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CB80u, 0x29D038u, 0x29D040u)) {
        return;
    }
    ctx->pc = 0x29D040u;
label_29d040:
    // 0x29d040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d044:
    // 0x29d044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d04c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D04Cu;
        // 0x29d050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D054u;
    // 0x29d054: 0x0  nop
    ctx->pc = 0x29d054u;
    // NOP
    ctx->pc = 0x29d058u;
}
