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

// Function: sub_001FB030
// Address: 0x1fb030 - 0x1fb080
void sub_001FB030_0x1fb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB030_0x1fb030");
#endif

    switch (ctx->pc) {
        case 0x1fb054u: goto label_1fb054;
        case 0x1fb06cu: goto label_1fb06c;
        default: break;
    }

    ctx->pc = 0x1fb030u;

    // 0x1fb030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb034: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fb034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fb038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb03c: 0x8c6254c0  lw          $v0, 0x54C0($v1)
    ctx->pc = 0x1fb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354C0u));
    // 0x1fb040: 0x247054c0  addiu       $s0, $v1, 0x54C0
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
    // 0x1fb044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB044u;
    {
        const bool branch_taken_0x1fb044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB044u;
        // 0x1fb048: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb044) {
            ctx->pc = 0x1FB06Cu;
            goto label_1fb06c;
        }
    }
    ctx->pc = 0x1FB04Cu;
    // 0x1fb04c: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FB04Cu;
    SET_GPR_U32(ctx, 31, 0x1FB054u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FB04Cu, 0x1FB054u)) {
        return;
    }
    ctx->pc = 0x1FB054u;
label_1fb054:
    // 0x1fb054: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fb058: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fb058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fb05c: 0x24a52f08  addiu       $a1, $a1, 0x2F08
    ctx->pc = 0x1fb05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12040));
    // 0x1fb060: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fb060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fb064: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FB064u;
    SET_GPR_U32(ctx, 31, 0x1FB06Cu);
    ctx->pc = 0x1FB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB064u;
    // 0x1fb068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FB064u, 0x1FB06Cu)) {
        return;
    }
    ctx->pc = 0x1FB06Cu;
label_1fb06c:
    // 0x1fb06c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb078: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB078u;
        // 0x1fb07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB080u;
}
