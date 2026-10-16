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

// Function: sub_002285B8
// Address: 0x2285b8 - 0x228620
void sub_002285B8_0x2285b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285B8_0x2285b8");
#endif

    switch (ctx->pc) {
        case 0x2285b8u: goto label_2285b8;
        case 0x2285bcu: goto label_2285bc;
        case 0x2285c0u: goto label_2285c0;
        case 0x2285c4u: goto label_2285c4;
        case 0x2285c8u: goto label_2285c8;
        case 0x2285ccu: goto label_2285cc;
        case 0x2285d0u: goto label_2285d0;
        case 0x2285d4u: goto label_2285d4;
        case 0x2285d8u: goto label_2285d8;
        case 0x2285dcu: goto label_2285dc;
        case 0x2285e0u: goto label_2285e0;
        case 0x2285e4u: goto label_2285e4;
        case 0x2285e8u: goto label_2285e8;
        case 0x2285ecu: goto label_2285ec;
        case 0x2285f0u: goto label_2285f0;
        case 0x2285f4u: goto label_2285f4;
        case 0x2285f8u: goto label_2285f8;
        case 0x2285fcu: goto label_2285fc;
        case 0x228600u: goto label_228600;
        case 0x228604u: goto label_228604;
        case 0x228608u: goto label_228608;
        case 0x22860cu: goto label_22860c;
        case 0x228610u: goto label_228610;
        case 0x228614u: goto label_228614;
        case 0x228618u: goto label_228618;
        case 0x22861cu: goto label_22861c;
        default: break;
    }

    ctx->pc = 0x2285b8u;

label_2285b8:
    // 0x2285b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2285b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2285bc:
    // 0x2285bc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2285bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2285c0:
    // 0x2285c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2285c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2285c4:
    // 0x2285c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2285c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2285c8:
    // 0x2285c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2285c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2285cc:
    // 0x2285cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2285ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2285d0:
    // 0x2285d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2285d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2285d4:
    // 0x2285d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2285d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2285d8:
    // 0x2285d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2285d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2285dc:
    // 0x2285dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2285dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2285e0:
    // 0x2285e0: 0xc093380  jal         func_24CE00
label_2285e4:
    if (ctx->pc == 0x2285E4u) {
        ctx->pc = 0x2285E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E0u;
        // 0x2285e4: 0x8c521060  lw          $s2, 0x1060($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285E8u;
        goto label_2285e8;
    }
    ctx->pc = 0x2285E0u;
    SET_GPR_U32(ctx, 31, 0x2285E8u);
    ctx->pc = 0x2285E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285E0u;
    // 0x2285e4: 0x8c521060  lw          $s2, 0x1060($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CE00u, 0x2285E0u, 0x2285E8u)) {
        return;
    }
    ctx->pc = 0x2285E8u;
label_2285e8:
    // 0x2285e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2285e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2285ec:
    // 0x2285ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2285ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2285f0:
    // 0x2285f0: 0x240f809  jalr        $s2
label_2285f4:
    if (ctx->pc == 0x2285F4u) {
        ctx->pc = 0x2285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F0u;
        // 0x2285f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285F8u;
        goto label_2285f8;
    }
    ctx->pc = 0x2285F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2285F8u);
        ctx->pc = 0x2285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F0u;
        // 0x2285f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285F0u, 0x2285F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2285F8u;
label_2285f8:
    // 0x2285f8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x2285f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
label_2285fc:
    // 0x2285fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2285fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_228600:
    // 0x228600: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x228600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_228604:
    // 0x228604: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x228604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_228608:
    // 0x228608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22860c:
    // 0x22860c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22860cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228610:
    // 0x228610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228614:
    // 0x228614: 0x3e00008  jr          $ra
label_228618:
    if (ctx->pc == 0x228618u) {
        ctx->pc = 0x228618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228614u;
        // 0x228618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22861Cu;
        goto label_22861c;
    }
    ctx->pc = 0x228614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228614u;
        // 0x228618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22861Cu;
label_22861c:
    // 0x22861c: 0x0  nop
    ctx->pc = 0x22861cu;
    // NOP
    ctx->pc = 0x228620u;
}
