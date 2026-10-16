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

// Function: sub_002121D0
// Address: 0x2121d0 - 0x212248
void sub_002121D0_0x2121d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002121D0_0x2121d0");
#endif

    switch (ctx->pc) {
        case 0x212208u: goto label_212208;
        case 0x212220u: goto label_212220;
        default: break;
    }

    ctx->pc = 0x2121d0u;

    // 0x2121d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2121d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2121d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2121d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2121dc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2121dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2121e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2121e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2121e4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2121e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2121e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2121ec: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x2121ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2121f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2121f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2121f4: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x2121f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2121f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2121f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2121fc: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2121FCu;
    {
        const bool branch_taken_0x2121fc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x212200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121FCu;
        // 0x212200: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121fc) {
            ctx->pc = 0x212228u;
            goto label_212228;
        }
    }
    ctx->pc = 0x212204u;
    // 0x212204: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x212204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_212208:
    // 0x212208: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x212208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21220c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212210: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x212210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x212214: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x212214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x212218: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x212218u;
    SET_GPR_U32(ctx, 31, 0x212220u);
    ctx->pc = 0x21221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212218u;
    // 0x21221c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x212218u, 0x212220u)) {
        return;
    }
    ctx->pc = 0x212220u;
label_212220:
    // 0x212220: 0x5e00fff9  bgtzl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212220u;
    {
        const bool branch_taken_0x212220 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x212220) {
            ctx->pc = 0x212224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212220u;
            // 0x212224: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212208;
        }
    }
    ctx->pc = 0x212228u;
label_212228:
    // 0x212228: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x212228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21222c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21222cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212234: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x212234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21223c: 0x3e00008  jr          $ra
    ctx->pc = 0x21223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21223Cu;
        // 0x212240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212244u;
    // 0x212244: 0x0  nop
    ctx->pc = 0x212244u;
    // NOP
    ctx->pc = 0x212248u;
}
