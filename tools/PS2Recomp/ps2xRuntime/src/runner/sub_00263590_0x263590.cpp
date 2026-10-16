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

// Function: sub_00263590
// Address: 0x263590 - 0x263678
void sub_00263590_0x263590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263590_0x263590");
#endif

    switch (ctx->pc) {
        case 0x2635ccu: goto label_2635cc;
        case 0x2635ecu: goto label_2635ec;
        case 0x26360cu: goto label_26360c;
        case 0x263620u: goto label_263620;
        case 0x263634u: goto label_263634;
        default: break;
    }

    ctx->pc = 0x263590u;

    // 0x263590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263594: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x263594u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x263598: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x263598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26359c: 0x250832b0  addiu       $t0, $t0, 0x32B0
    ctx->pc = 0x26359cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12976));
    // 0x2635a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2635a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2635a4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x2635a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x2635a8: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x2635a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x2635ac: 0x26103260  addiu       $s0, $s0, 0x3260
    ctx->pc = 0x2635acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12896));
    // 0x2635b0: 0x26313270  addiu       $s1, $s1, 0x3270
    ctx->pc = 0x2635b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12912));
    // 0x2635b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2635b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2635b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2635b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2635bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2635c4: 0xc095b24  jal         func_256C90
    ctx->pc = 0x2635C4u;
    SET_GPR_U32(ctx, 31, 0x2635CCu);
    ctx->pc = 0x2635C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635C4u;
    // 0x2635c8: 0x2405050f  addiu       $a1, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x2635C4u, 0x2635CCu)) {
        return;
    }
    ctx->pc = 0x2635CCu;
label_2635cc:
    // 0x2635cc: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x2635ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x2635d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2635d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635d4: 0x25083338  addiu       $t0, $t0, 0x3338
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13112));
    // 0x2635d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2635d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2635dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2635e0: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x2635e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x2635e4: 0xc09579e  jal         func_255E78
    ctx->pc = 0x2635E4u;
    SET_GPR_U32(ctx, 31, 0x2635ECu);
    ctx->pc = 0x2635E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635E4u;
    // 0x2635e8: 0xaf829140  sw          $v0, -0x6EC0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x2635E4u, 0x2635ECu)) {
        return;
    }
    ctx->pc = 0x2635ECu;
label_2635ec:
    // 0x2635ec: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x2635ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x2635f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2635f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2635f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635f8: 0x250833d0  addiu       $t0, $t0, 0x33D0
    ctx->pc = 0x2635f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13264));
    // 0x2635fc: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x2635fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x263600: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x263600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263604: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x263604u;
    SET_GPR_U32(ctx, 31, 0x26360Cu);
    ctx->pc = 0x263608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263604u;
    // 0x263608: 0xaf829148  sw          $v0, -0x6EB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x263604u, 0x26360Cu)) {
        return;
    }
    ctx->pc = 0x26360Cu;
label_26360c:
    // 0x26360c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x26360cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x263610: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x263610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x263614: 0x24a53458  addiu       $a1, $a1, 0x3458
    ctx->pc = 0x263614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13400));
    // 0x263618: 0xc0957d0  jal         func_255F40
    ctx->pc = 0x263618u;
    SET_GPR_U32(ctx, 31, 0x263620u);
    ctx->pc = 0x26361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263618u;
    // 0x26361c: 0xaf829144  sw          $v0, -0x6EBC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F40u, 0x263618u, 0x263620u)) {
        return;
    }
    ctx->pc = 0x263620u;
label_263620:
    // 0x263620: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x263620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x263624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263628: 0x24a53528  addiu       $a1, $a1, 0x3528
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13608));
    // 0x26362c: 0xc096e0a  jal         func_25B828
    ctx->pc = 0x26362Cu;
    SET_GPR_U32(ctx, 31, 0x263634u);
    ctx->pc = 0x263630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26362Cu;
    // 0x263630: 0x2404050f  addiu       $a0, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B828u, 0x26362Cu, 0x263634u)) {
        return;
    }
    ctx->pc = 0x263634u;
label_263634:
    // 0x263634: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x263634u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x263638: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x263638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26363c: 0x8c6341b0  lw          $v1, 0x41B0($v1)
    ctx->pc = 0x26363cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41B0u));
    // 0x263640: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x263640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x263644: 0x8c4241b8  lw          $v0, 0x41B8($v0)
    ctx->pc = 0x263644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B8u));
    // 0x263648: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x263648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26364c: 0x8c8441b4  lw          $a0, 0x41B4($a0)
    ctx->pc = 0x26364cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B41B4u));
    // 0x263650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x263654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263658: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x263658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26365c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263660: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x263660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x263664: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x263664u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x263668: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x263668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26366c: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x26366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x263670: 0x3e00008  jr          $ra
    ctx->pc = 0x263670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263670u;
        // 0x263674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263678u;
}
