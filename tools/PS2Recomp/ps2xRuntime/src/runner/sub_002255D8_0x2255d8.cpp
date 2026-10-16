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

// Function: sub_002255D8
// Address: 0x2255d8 - 0x225678
void sub_002255D8_0x2255d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002255D8_0x2255d8");
#endif

    switch (ctx->pc) {
        case 0x225610u: goto label_225610;
        case 0x225628u: goto label_225628;
        case 0x22564cu: goto label_22564c;
        default: break;
    }

    ctx->pc = 0x2255d8u;

    // 0x2255d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2255dc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2255dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2255e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2255e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2255e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2255e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2255e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2255ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2255ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2255f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2255f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2255f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255f8: 0x24520fd8  addiu       $s2, $v0, 0xFD8
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x2255fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2255fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225600: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x225600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225608: 0xc08959e  jal         func_225678
    ctx->pc = 0x225608u;
    SET_GPR_U32(ctx, 31, 0x225610u);
    ctx->pc = 0x22560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225608u;
    // 0x22560c: 0x264700f8  addiu       $a3, $s2, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225608u, 0x225610u)) {
        return;
    }
    ctx->pc = 0x225610u;
label_225610:
    // 0x225610: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x225610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22561c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225620: 0xc08959e  jal         func_225678
    ctx->pc = 0x225620u;
    SET_GPR_U32(ctx, 31, 0x225628u);
    ctx->pc = 0x225624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225620u;
    // 0x225624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225620u, 0x225628u)) {
        return;
    }
    ctx->pc = 0x225628u;
label_225628:
    // 0x225628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225628u;
    {
        const bool branch_taken_0x225628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225628u;
        // 0x22562c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225628) {
            ctx->pc = 0x225638u;
            goto label_225638;
        }
    }
    ctx->pc = 0x225630u;
    // 0x225630: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x225630u;
    {
        const bool branch_taken_0x225630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225630u;
        // 0x225634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225630) {
            ctx->pc = 0x22565Cu;
            goto label_22565c;
        }
    }
    ctx->pc = 0x225638u;
label_225638:
    // 0x225638: 0x26460038  addiu       $a2, $s2, 0x38
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x22563c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x225640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225644: 0xc08959e  jal         func_225678
    ctx->pc = 0x225644u;
    SET_GPR_U32(ctx, 31, 0x22564Cu);
    ctx->pc = 0x225648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225644u;
    // 0x225648: 0x2408001d  addiu       $t0, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225644u, 0x22564Cu)) {
        return;
    }
    ctx->pc = 0x22564Cu;
label_22564c:
    // 0x22564c: 0x8f8383ac  lw          $v1, -0x7C54($gp)
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x225650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225658: 0xaf8383ac  sw          $v1, -0x7C54($gp)
    ctx->pc = 0x225658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 3));
label_22565c:
    // 0x22565c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22565cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225660: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x225660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22566c: 0x3e00008  jr          $ra
    ctx->pc = 0x22566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22566Cu;
        // 0x225670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225674u;
    // 0x225674: 0x0  nop
    ctx->pc = 0x225674u;
    // NOP
    ctx->pc = 0x225678u;
}
