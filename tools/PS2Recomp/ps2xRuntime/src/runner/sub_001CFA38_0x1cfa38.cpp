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

// Function: sub_001CFA38
// Address: 0x1cfa38 - 0x1cfa90
void sub_001CFA38_0x1cfa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA38_0x1cfa38");
#endif

    switch (ctx->pc) {
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa80u: goto label_1cfa80;
        default: break;
    }

    ctx->pc = 0x1cfa38u;

    // 0x1cfa38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cfa3c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cfa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cfa40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfa44: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1cfa48: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cfa4c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFA4Cu;
    {
        const bool branch_taken_0x1cfa4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA4Cu;
        // 0x1cfa50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa4c) {
            ctx->pc = 0x1CFA6Cu;
            goto label_1cfa6c;
        }
    }
    ctx->pc = 0x1CFA54u;
    // 0x1cfa54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfa58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFA58u;
    {
        const bool branch_taken_0x1cfa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA58u;
        // 0x1cfa5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa58) {
            ctx->pc = 0x1CFA6Cu;
            goto label_1cfa6c;
        }
    }
    ctx->pc = 0x1CFA60u;
    // 0x1cfa60: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cfa64: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CFA64u;
    SET_GPR_U32(ctx, 31, 0x1CFA6Cu);
    ctx->pc = 0x1CFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA64u;
    // 0x1cfa68: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CFA64u, 0x1CFA6Cu)) {
        return;
    }
    ctx->pc = 0x1CFA6Cu;
label_1cfa6c:
    // 0x1cfa6c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cfa70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa74: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1cfa78: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CFA78u;
    SET_GPR_U32(ctx, 31, 0x1CFA80u);
    ctx->pc = 0x1CFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA78u;
    // 0x1cfa7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CFA78u, 0x1CFA80u)) {
        return;
    }
    ctx->pc = 0x1CFA80u;
label_1cfa80:
    // 0x1cfa80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfa84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa88: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA88u;
        // 0x1cfa8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA90u;
}
