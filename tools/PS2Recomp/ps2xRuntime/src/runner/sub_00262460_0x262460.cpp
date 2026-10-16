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

// Function: sub_00262460
// Address: 0x262460 - 0x2624a8
void sub_00262460_0x262460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262460_0x262460");
#endif

    switch (ctx->pc) {
        case 0x262490u: goto label_262490;
        default: break;
    }

    ctx->pc = 0x262460u;

    // 0x262460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x262464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x262468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26246c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26246cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262470: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x262470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x262474: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x262474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x262478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262478u;
    {
        const bool branch_taken_0x262478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262478u;
        // 0x26247c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262478) {
            ctx->pc = 0x262490u;
            goto label_262490;
        }
    }
    ctx->pc = 0x262480u;
    // 0x262480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262488: 0xc0987ce  jal         func_261F38
    ctx->pc = 0x262488u;
    SET_GPR_U32(ctx, 31, 0x262490u);
    ctx->pc = 0x26248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262488u;
    // 0x26248c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x261F38u, 0x262488u, 0x262490u)) {
        return;
    }
    ctx->pc = 0x262490u;
label_262490:
    // 0x262490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x262498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26249c: 0x3e00008  jr          $ra
    ctx->pc = 0x26249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2624A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26249Cu;
        // 0x2624a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2624A4u;
    // 0x2624a4: 0x0  nop
    ctx->pc = 0x2624a4u;
    // NOP
    ctx->pc = 0x2624a8u;
}
