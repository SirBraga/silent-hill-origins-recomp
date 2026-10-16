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

// Function: sub_00265038
// Address: 0x265038 - 0x265118
void sub_00265038_0x265038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265038_0x265038");
#endif

    switch (ctx->pc) {
        case 0x26505cu: goto label_26505c;
        case 0x265084u: goto label_265084;
        case 0x2650a0u: goto label_2650a0;
        case 0x2650b8u: goto label_2650b8;
        case 0x2650d0u: goto label_2650d0;
        case 0x2650e0u: goto label_2650e0;
        case 0x2650f0u: goto label_2650f0;
        case 0x265100u: goto label_265100;
        default: break;
    }

    ctx->pc = 0x265038u;

    // 0x265038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26503c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x265040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265048: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x265048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x26504c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265054: 0xc099dd2  jal         func_267748
    ctx->pc = 0x265054u;
    SET_GPR_U32(ctx, 31, 0x26505Cu);
    ctx->pc = 0x265058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265054u;
    // 0x265058: 0x24841424  addiu       $a0, $a0, 0x1424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267748u, 0x265054u, 0x26505Cu)) {
        return;
    }
    ctx->pc = 0x26505Cu;
label_26505c:
    // 0x26505c: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x26505cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x265060: 0x26221418  addiu       $v0, $s1, 0x1418
    ctx->pc = 0x265060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5144));
    // 0x265064: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x265064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x265068: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x265068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x26506c: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x26506cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5C1434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1434u, _value); } while (0);
    // 0x265070: 0x24c64f10  addiu       $a2, $a2, 0x4F10
    ctx->pc = 0x265070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20240));
    // 0x265074: 0x24e74f60  addiu       $a3, $a3, 0x4F60
    ctx->pc = 0x265074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20320));
    // 0x265078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26507c: 0xc0895e6  jal         func_225798
    ctx->pc = 0x26507Cu;
    SET_GPR_U32(ctx, 31, 0x265084u);
    ctx->pc = 0x265080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26507Cu;
    // 0x265080: 0x24050131  addiu       $a1, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x26507Cu, 0x265084u)) {
        return;
    }
    ctx->pc = 0x265084u;
label_265084:
    // 0x265084: 0xae221418  sw          $v0, 0x1418($s1)
    ctx->pc = 0x265084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5144), GPR_U32(ctx, 2));
    // 0x265088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26508c: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x26508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x265090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x265094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265098: 0xc095f80  jal         func_257E00
    ctx->pc = 0x265098u;
    SET_GPR_U32(ctx, 31, 0x2650A0u);
    ctx->pc = 0x26509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265098u;
    // 0x26509c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x265098u, 0x2650A0u)) {
        return;
    }
    ctx->pc = 0x2650A0u;
label_2650a0:
    // 0x2650a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2650a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650a4: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x2650a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x2650a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2650a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2650acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650b0: 0xc09579e  jal         func_255E78
    ctx->pc = 0x2650B0u;
    SET_GPR_U32(ctx, 31, 0x2650B8u);
    ctx->pc = 0x2650B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650B0u;
    // 0x2650b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x2650B0u, 0x2650B8u)) {
        return;
    }
    ctx->pc = 0x2650B8u;
label_2650b8:
    // 0x2650b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2650b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2650bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2650c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650c4: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x2650c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x2650c8: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x2650C8u;
    SET_GPR_U32(ctx, 31, 0x2650D0u);
    ctx->pc = 0x2650CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650C8u;
    // 0x2650cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x2650C8u, 0x2650D0u)) {
        return;
    }
    ctx->pc = 0x2650D0u;
label_2650d0:
    // 0x2650d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x2650d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x2650d4: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x2650d8: 0xc095fa2  jal         func_257E88
    ctx->pc = 0x2650D8u;
    SET_GPR_U32(ctx, 31, 0x2650E0u);
    ctx->pc = 0x2650DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650D8u;
    // 0x2650dc: 0x24a54fa8  addiu       $a1, $a1, 0x4FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E88u, 0x2650D8u, 0x2650E0u)) {
        return;
    }
    ctx->pc = 0x2650E0u;
label_2650e0:
    // 0x2650e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x2650e4: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x2650e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x2650e8: 0xc0957da  jal         func_255F68
    ctx->pc = 0x2650E8u;
    SET_GPR_U32(ctx, 31, 0x2650F0u);
    ctx->pc = 0x2650ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650E8u;
    // 0x2650ec: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F68u, 0x2650E8u, 0x2650F0u)) {
        return;
    }
    ctx->pc = 0x2650F0u;
label_2650f0:
    // 0x2650f0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x2650f4: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x2650f8: 0xc096e14  jal         func_25B850
    ctx->pc = 0x2650F8u;
    SET_GPR_U32(ctx, 31, 0x265100u);
    ctx->pc = 0x2650FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650F8u;
    // 0x2650fc: 0x24a55008  addiu       $a1, $a1, 0x5008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B850u, 0x2650F8u, 0x265100u)) {
        return;
    }
    ctx->pc = 0x265100u;
label_265100:
    // 0x265100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x265100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26510c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265110: 0x3e00008  jr          $ra
    ctx->pc = 0x265110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265110u;
        // 0x265114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265118u;
}
