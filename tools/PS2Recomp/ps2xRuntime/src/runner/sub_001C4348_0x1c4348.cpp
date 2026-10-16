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

// Function: sub_001C4348
// Address: 0x1c4348 - 0x1c43a0
void sub_001C4348_0x1c4348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4348_0x1c4348");
#endif

    switch (ctx->pc) {
        case 0x1c437cu: goto label_1c437c;
        case 0x1c438cu: goto label_1c438c;
        default: break;
    }

    ctx->pc = 0x1c4348u;

    // 0x1c4348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c434c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4358: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1c435c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C435Cu;
    {
        const bool branch_taken_0x1c435c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C435Cu;
        // 0x1c4360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c435c) {
            ctx->pc = 0x1C4374u;
            goto label_1c4374;
        }
    }
    ctx->pc = 0x1C4364u;
    // 0x1c4364: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4364u;
    {
        const bool branch_taken_0x1c4364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4364) {
            ctx->pc = 0x1C4384u;
            goto label_1c4384;
        }
    }
    ctx->pc = 0x1C436Cu;
    // 0x1c436c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C436Cu;
    {
        const bool branch_taken_0x1c436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C436Cu;
        // 0x1c4370: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c436c) {
            ctx->pc = 0x1C4394u;
            goto label_1c4394;
        }
    }
    ctx->pc = 0x1C4374u;
label_1c4374:
    // 0x1c4374: 0xc05fd66  jal         func_17F598
    ctx->pc = 0x1C4374u;
    SET_GPR_U32(ctx, 31, 0x1C437Cu);
    ctx->pc = 0x17F598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F598u, 0x1C4374u, 0x1C437Cu)) {
        return;
    }
    ctx->pc = 0x1C437Cu;
label_1c437c:
    // 0x1c437c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C437Cu;
    {
        const bool branch_taken_0x1c437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C437Cu;
        // 0x1c4380: 0xe60002d0  swc1        $f0, 0x2D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c437c) {
            ctx->pc = 0x1C4390u;
            goto label_1c4390;
        }
    }
    ctx->pc = 0x1C4384u;
label_1c4384:
    // 0x1c4384: 0xc05fd70  jal         func_17F5C0
    ctx->pc = 0x1C4384u;
    SET_GPR_U32(ctx, 31, 0x1C438Cu);
    ctx->pc = 0x17F5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F5C0u, 0x1C4384u, 0x1C438Cu)) {
        return;
    }
    ctx->pc = 0x1C438Cu;
label_1c438c:
    // 0x1c438c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_1c4390:
    // 0x1c4390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4394:
    // 0x1c4394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4398: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4398u;
        // 0x1c439c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43A0u;
}
