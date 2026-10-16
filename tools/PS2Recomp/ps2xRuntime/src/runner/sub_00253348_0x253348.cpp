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

// Function: sub_00253348
// Address: 0x253348 - 0x2533b0
void sub_00253348_0x253348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253348_0x253348");
#endif

    switch (ctx->pc) {
        case 0x253370u: goto label_253370;
        case 0x253388u: goto label_253388;
        default: break;
    }

    ctx->pc = 0x253348u;

    // 0x253348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25334c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x253350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25335c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25335cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253360: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253364: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x253364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x253368: 0xc092782  jal         func_249E08
    ctx->pc = 0x253368u;
    SET_GPR_U32(ctx, 31, 0x253370u);
    ctx->pc = 0x25336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253368u;
    // 0x25336c: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x253368u, 0x253370u)) {
        return;
    }
    ctx->pc = 0x253370u;
label_253370:
    // 0x253370: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253370u;
    {
        const bool branch_taken_0x253370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253370u;
        // 0x253374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253370) {
            ctx->pc = 0x253394u;
            goto label_253394;
        }
    }
    ctx->pc = 0x253378u;
    // 0x253378: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x253378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x25337c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25337cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253380: 0xc092782  jal         func_249E08
    ctx->pc = 0x253380u;
    SET_GPR_U32(ctx, 31, 0x253388u);
    ctx->pc = 0x253384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253380u;
    // 0x253384: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x253380u, 0x253388u)) {
        return;
    }
    ctx->pc = 0x253388u;
label_253388:
    // 0x253388: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253388u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x25338c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25338Cu;
    {
        const bool branch_taken_0x25338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25338Cu;
        // 0x253390: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25338c) {
            ctx->pc = 0x253398u;
            goto label_253398;
        }
    }
    ctx->pc = 0x253394u;
label_253394:
    // 0x253394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253398:
    // 0x253398: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x253398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25339c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25339cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2533a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2533a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2533a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2533A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2533A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533A4u;
        // 0x2533a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2533ACu;
    // 0x2533ac: 0x0  nop
    ctx->pc = 0x2533acu;
    // NOP
    ctx->pc = 0x2533b0u;
}
