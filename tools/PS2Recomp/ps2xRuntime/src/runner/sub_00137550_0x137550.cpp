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

// Function: sub_00137550
// Address: 0x137550 - 0x1375a0
void sub_00137550_0x137550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137550_0x137550");
#endif

    switch (ctx->pc) {
        case 0x137560u: goto label_137560;
        case 0x137590u: goto label_137590;
        default: break;
    }

    ctx->pc = 0x137550u;

    // 0x137550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137558: 0xc049946  jal         func_126518
    ctx->pc = 0x137558u;
    SET_GPR_U32(ctx, 31, 0x137560u);
    ctx->pc = 0x126518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126518u, 0x137558u, 0x137560u)) {
        return;
    }
    ctx->pc = 0x137560u;
label_137560:
    // 0x137560: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x137560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137564: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x137564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x137568: 0x8c454620  lw          $a1, 0x4620($v0)
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4620u));
    // 0x13756c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x13756cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x137570: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x137570u;
    {
        const bool branch_taken_0x137570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x137574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137570u;
        // 0x137574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137570) {
            ctx->pc = 0x137594u;
            goto label_137594;
        }
    }
    ctx->pc = 0x137578u;
    // 0x137578: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13757c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13757Cu;
    {
        const bool branch_taken_0x13757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13757Cu;
        // 0x137580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13757c) {
            ctx->pc = 0x137594u;
            goto label_137594;
        }
    }
    ctx->pc = 0x137584u;
    // 0x137584: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x137584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x137588: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x137588u;
    SET_GPR_U32(ctx, 31, 0x137590u);
    ctx->pc = 0x13758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137588u;
    // 0x13758c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x137588u, 0x137590u)) {
        return;
    }
    ctx->pc = 0x137590u;
label_137590:
    // 0x137590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137594:
    // 0x137594: 0x3e00008  jr          $ra
    ctx->pc = 0x137594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137594u;
        // 0x137598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13759Cu;
    // 0x13759c: 0x0  nop
    ctx->pc = 0x13759cu;
    // NOP
    ctx->pc = 0x1375a0u;
}
