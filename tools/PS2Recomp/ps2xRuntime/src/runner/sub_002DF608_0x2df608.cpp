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

// Function: sub_002DF608
// Address: 0x2df608 - 0x2df668
void sub_002DF608_0x2df608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF608_0x2df608");
#endif

    switch (ctx->pc) {
        case 0x2df63cu: goto label_2df63c;
        default: break;
    }

    ctx->pc = 0x2df608u;

    // 0x2df608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2df610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df618: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2df618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2df61c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF61Cu;
    {
        const bool branch_taken_0x2df61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF61Cu;
        // 0x2df620: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df61c) {
            ctx->pc = 0x2DF654u;
            goto label_2df654;
        }
    }
    ctx->pc = 0x2DF624u;
    // 0x2df624: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2df624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df628: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2df62c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF62Cu;
    {
        const bool branch_taken_0x2df62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF62Cu;
        // 0x2df630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df62c) {
            ctx->pc = 0x2DF654u;
            goto label_2df654;
        }
    }
    ctx->pc = 0x2DF634u;
    // 0x2df634: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DF634u;
    SET_GPR_U32(ctx, 31, 0x2DF63Cu);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DF634u, 0x2DF63Cu)) {
        return;
    }
    ctx->pc = 0x2DF63Cu;
label_2df63c:
    // 0x2df63c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2df63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df640: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df644: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2df644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2df648: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2df648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df64c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2df64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2df650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df654:
    // 0x2df654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df658: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2df658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF65Cu;
        // 0x2df660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF664u;
    // 0x2df664: 0x0  nop
    ctx->pc = 0x2df664u;
    // NOP
    ctx->pc = 0x2df668u;
}
