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

// Function: sub_0013F920
// Address: 0x13f920 - 0x13f968
void sub_0013F920_0x13f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F920_0x13f920");
#endif

    switch (ctx->pc) {
        case 0x13f920u: goto label_13f920;
        case 0x13f924u: goto label_13f924;
        case 0x13f928u: goto label_13f928;
        case 0x13f92cu: goto label_13f92c;
        case 0x13f930u: goto label_13f930;
        case 0x13f934u: goto label_13f934;
        case 0x13f938u: goto label_13f938;
        case 0x13f93cu: goto label_13f93c;
        case 0x13f940u: goto label_13f940;
        case 0x13f944u: goto label_13f944;
        case 0x13f948u: goto label_13f948;
        case 0x13f94cu: goto label_13f94c;
        case 0x13f950u: goto label_13f950;
        case 0x13f954u: goto label_13f954;
        case 0x13f958u: goto label_13f958;
        case 0x13f95cu: goto label_13f95c;
        case 0x13f960u: goto label_13f960;
        case 0x13f964u: goto label_13f964;
        default: break;
    }

    ctx->pc = 0x13f920u;

label_13f920:
    // 0x13f920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f924:
    // 0x13f924: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13f928:
    // 0x13f928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f92c:
    // 0x13f92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f930:
    // 0x13f930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f934:
    // 0x13f934: 0xc04ed0e  jal         func_13B438
label_13f938:
    if (ctx->pc == 0x13F938u) {
        ctx->pc = 0x13F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F934u;
        // 0x13f938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F93Cu;
        goto label_13f93c;
    }
    ctx->pc = 0x13F934u;
    SET_GPR_U32(ctx, 31, 0x13F93Cu);
    ctx->pc = 0x13F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F934u;
    // 0x13f938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x13F934u, 0x13F93Cu)) {
        return;
    }
    ctx->pc = 0x13F93Cu;
label_13f93c:
    // 0x13f93c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13f940:
    // 0x13f940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f944:
    // 0x13f944: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x13f944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_13f948:
    // 0x13f948: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x13f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_13f94c:
    // 0x13f94c: 0x60f809  jalr        $v1
label_13f950:
    if (ctx->pc == 0x13F950u) {
        ctx->pc = 0x13F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F94Cu;
        // 0x13f950: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F954u;
        goto label_13f954;
    }
    ctx->pc = 0x13F94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13F954u);
        ctx->pc = 0x13F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F94Cu;
        // 0x13f950: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F94Cu, 0x13F954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F954u;
label_13f954:
    // 0x13f954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13f954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f958:
    // 0x13f958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f95c:
    // 0x13f95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f960:
    // 0x13f960: 0x3e00008  jr          $ra
label_13f964:
    if (ctx->pc == 0x13F964u) {
        ctx->pc = 0x13F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F960u;
        // 0x13f964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F968u;
        goto label_fallthrough_0x13f960;
    }
    ctx->pc = 0x13F960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F960u;
        // 0x13f964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f960:
    ctx->pc = 0x13F968u;
}
