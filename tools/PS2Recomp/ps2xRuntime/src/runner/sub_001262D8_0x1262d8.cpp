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

// Function: sub_001262D8
// Address: 0x1262d8 - 0x126330
void sub_001262D8_0x1262d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001262D8_0x1262d8");
#endif

    switch (ctx->pc) {
        case 0x1262d8u: goto label_1262d8;
        case 0x1262dcu: goto label_1262dc;
        case 0x1262e0u: goto label_1262e0;
        case 0x1262e4u: goto label_1262e4;
        case 0x1262e8u: goto label_1262e8;
        case 0x1262ecu: goto label_1262ec;
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x1262f8u: goto label_1262f8;
        case 0x1262fcu: goto label_1262fc;
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        default: break;
    }

    ctx->pc = 0x1262d8u;

label_1262d8:
    // 0x1262d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1262dc:
    // 0x1262dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1262dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1262e0:
    // 0x1262e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1262e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1262e4:
    // 0x1262e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1262e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1262e8:
    // 0x1262e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1262e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1262ec:
    // 0x1262ec: 0x24a4ffbc  addiu       $a0, $a1, -0x44
    ctx->pc = 0x1262ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967228));
label_1262f0:
    // 0x1262f0: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1262f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1262f4:
    // 0x1262f4: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x1262f4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_1262f8:
    // 0x1262f8: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x1262f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_1262fc:
    // 0x1262fc: 0x860200e0  lh          $v0, 0xE0($s0)
    ctx->pc = 0x1262fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
label_126300:
    // 0x126300: 0x261000e0  addiu       $s0, $s0, 0xE0
    ctx->pc = 0x126300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_126304:
    // 0x126304: 0xc04f0cc  jal         func_13C330
label_126308:
    if (ctx->pc == 0x126308u) {
        ctx->pc = 0x126308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126304u;
        // 0x126308: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12630Cu;
        goto label_12630c;
    }
    ctx->pc = 0x126304u;
    SET_GPR_U32(ctx, 31, 0x12630Cu);
    ctx->pc = 0x126308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126304u;
    // 0x126308: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x126304u, 0x12630Cu)) {
        return;
    }
    ctx->pc = 0x12630Cu;
label_12630c:
    // 0x12630c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_126310:
    // 0x126310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126314:
    // 0x126314: 0x60f809  jalr        $v1
label_126318:
    if (ctx->pc == 0x126318u) {
        ctx->pc = 0x126318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126314u;
        // 0x126318: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12631Cu;
        goto label_12631c;
    }
    ctx->pc = 0x126314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12631Cu);
        ctx->pc = 0x126318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126314u;
        // 0x126318: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126314u, 0x12631Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12631Cu;
label_12631c:
    // 0x12631c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12631cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126320:
    // 0x126320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126324:
    // 0x126324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126328:
    // 0x126328: 0x3e00008  jr          $ra
label_12632c:
    if (ctx->pc == 0x12632Cu) {
        ctx->pc = 0x12632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126328u;
        // 0x12632c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126330u;
        goto label_fallthrough_0x126328;
    }
    ctx->pc = 0x126328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126328u;
        // 0x12632c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126328:
    ctx->pc = 0x126330u;
}
