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

// Function: sub_0029BCC8
// Address: 0x29bcc8 - 0x29bd18
void sub_0029BCC8_0x29bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BCC8_0x29bcc8");
#endif

    switch (ctx->pc) {
        case 0x29bcecu: goto label_29bcec;
        case 0x29bd04u: goto label_29bd04;
        default: break;
    }

    ctx->pc = 0x29bcc8u;

    // 0x29bcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bccc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x29bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x29bcd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bcd4: 0x8c625ec0  lw          $v0, 0x5EC0($v1)
    ctx->pc = 0x29bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735EC0u));
    // 0x29bcd8: 0x24705ec0  addiu       $s0, $v1, 0x5EC0
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x29bcdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BCDCu;
    {
        const bool branch_taken_0x29bcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCDCu;
        // 0x29bce0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcdc) {
            ctx->pc = 0x29BD04u;
            goto label_29bd04;
        }
    }
    ctx->pc = 0x29BCE4u;
    // 0x29bce4: 0xc0a70ac  jal         func_29C2B0
    ctx->pc = 0x29BCE4u;
    SET_GPR_U32(ctx, 31, 0x29BCECu);
    ctx->pc = 0x29C2B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C2B0u, 0x29BCE4u, 0x29BCECu)) {
        return;
    }
    ctx->pc = 0x29BCECu;
label_29bcec:
    // 0x29bcec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29bcf0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x29bcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x29bcf4: 0x24a5da50  addiu       $a1, $a1, -0x25B0
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957648));
    // 0x29bcf8: 0x24c65ed0  addiu       $a2, $a2, 0x5ED0
    ctx->pc = 0x29bcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24272));
    // 0x29bcfc: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x29BCFCu;
    SET_GPR_U32(ctx, 31, 0x29BD04u);
    ctx->pc = 0x29BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCFCu;
    // 0x29bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x29BCFCu, 0x29BD04u)) {
        return;
    }
    ctx->pc = 0x29BD04u;
label_29bd04:
    // 0x29bd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29bd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29bd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x29BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD10u;
        // 0x29bd14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BD18u;
}
