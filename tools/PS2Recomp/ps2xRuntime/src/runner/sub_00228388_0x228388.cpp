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

// Function: sub_00228388
// Address: 0x228388 - 0x228400
void sub_00228388_0x228388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228388_0x228388");
#endif

    switch (ctx->pc) {
        case 0x228388u: goto label_228388;
        case 0x22838cu: goto label_22838c;
        case 0x228390u: goto label_228390;
        case 0x228394u: goto label_228394;
        case 0x228398u: goto label_228398;
        case 0x22839cu: goto label_22839c;
        case 0x2283a0u: goto label_2283a0;
        case 0x2283a4u: goto label_2283a4;
        case 0x2283a8u: goto label_2283a8;
        case 0x2283acu: goto label_2283ac;
        case 0x2283b0u: goto label_2283b0;
        case 0x2283b4u: goto label_2283b4;
        case 0x2283b8u: goto label_2283b8;
        case 0x2283bcu: goto label_2283bc;
        case 0x2283c0u: goto label_2283c0;
        case 0x2283c4u: goto label_2283c4;
        case 0x2283c8u: goto label_2283c8;
        case 0x2283ccu: goto label_2283cc;
        case 0x2283d0u: goto label_2283d0;
        case 0x2283d4u: goto label_2283d4;
        case 0x2283d8u: goto label_2283d8;
        case 0x2283dcu: goto label_2283dc;
        case 0x2283e0u: goto label_2283e0;
        case 0x2283e4u: goto label_2283e4;
        case 0x2283e8u: goto label_2283e8;
        case 0x2283ecu: goto label_2283ec;
        case 0x2283f0u: goto label_2283f0;
        case 0x2283f4u: goto label_2283f4;
        case 0x2283f8u: goto label_2283f8;
        case 0x2283fcu: goto label_2283fc;
        default: break;
    }

    ctx->pc = 0x228388u;

label_228388:
    // 0x228388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22838c:
    // 0x22838c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_228390:
    // 0x228390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x228390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228394:
    // 0x228394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_228398:
    // 0x228398: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x228398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_22839c:
    // 0x22839c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2283a0:
    // 0x2283a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2283a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2283a4:
    // 0x2283a4: 0xc09397e  jal         func_24E5F8
label_2283a8:
    if (ctx->pc == 0x2283A8u) {
        ctx->pc = 0x2283A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283A4u;
        // 0x2283a8: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283ACu;
        goto label_2283ac;
    }
    ctx->pc = 0x2283A4u;
    SET_GPR_U32(ctx, 31, 0x2283ACu);
    ctx->pc = 0x2283A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283A4u;
    // 0x2283a8: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2283A4u, 0x2283ACu)) {
        return;
    }
    ctx->pc = 0x2283ACu;
label_2283ac:
    // 0x2283ac: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2283acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_2283b0:
    // 0x2283b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2283b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2283b4:
    // 0x2283b4: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x2283b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2283b8:
    // 0x2283b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2283b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2283bc:
    // 0x2283bc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2283c0:
    // 0x2283c0: 0x40f809  jalr        $v0
label_2283c4:
    if (ctx->pc == 0x2283C4u) {
        ctx->pc = 0x2283C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C0u;
        // 0x2283c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283C8u;
        goto label_2283c8;
    }
    ctx->pc = 0x2283C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2283C8u);
        ctx->pc = 0x2283C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C0u;
        // 0x2283c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283C0u, 0x2283C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2283C8u;
label_2283c8:
    // 0x2283c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2283c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2283cc:
    // 0x2283cc: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16024)));
label_2283d0:
    // 0x2283d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2283d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2283d4:
    // 0x2283d4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_2283d8:
    // 0x2283d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2283d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2283dc:
    // 0x2283dc: 0x40f809  jalr        $v0
label_2283e0:
    if (ctx->pc == 0x2283E0u) {
        ctx->pc = 0x2283E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283DCu;
        // 0x2283e0: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283E4u;
        goto label_2283e4;
    }
    ctx->pc = 0x2283DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2283E4u);
        ctx->pc = 0x2283E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283DCu;
        // 0x2283e0: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283DCu, 0x2283E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2283E4u;
label_2283e4:
    // 0x2283e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2283e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2283e8:
    // 0x2283e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2283ec:
    // 0x2283ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2283ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2283f0:
    // 0x2283f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2283f4:
    // 0x2283f4: 0x3e00008  jr          $ra
label_2283f8:
    if (ctx->pc == 0x2283F8u) {
        ctx->pc = 0x2283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283F4u;
        // 0x2283f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283FCu;
        goto label_2283fc;
    }
    ctx->pc = 0x2283F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283F4u;
        // 0x2283f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283FCu;
label_2283fc:
    // 0x2283fc: 0x0  nop
    ctx->pc = 0x2283fcu;
    // NOP
    ctx->pc = 0x228400u;
}
