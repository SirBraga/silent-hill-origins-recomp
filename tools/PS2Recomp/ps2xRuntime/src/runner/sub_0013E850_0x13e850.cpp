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

// Function: sub_0013E850
// Address: 0x13e850 - 0x13e930
void sub_0013E850_0x13e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E850_0x13e850");
#endif

    switch (ctx->pc) {
        case 0x13e868u: goto label_13e868;
        case 0x13e8d0u: goto label_13e8d0;
        case 0x13e8f0u: goto label_13e8f0;
        case 0x13e908u: goto label_13e908;
        case 0x13e918u: goto label_13e918;
        default: break;
    }

    ctx->pc = 0x13e850u;

    // 0x13e850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e854: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13e858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e860: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13E860u;
    SET_GPR_U32(ctx, 31, 0x13E868u);
    ctx->pc = 0x13E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E860u;
    // 0x13e864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13E860u, 0x13E868u)) {
        return;
    }
    ctx->pc = 0x13E868u;
label_13e868:
    // 0x13e868: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x13e86c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13e870: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13e874: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13e878: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13e878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13e87c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x13e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x13e880: 0x24a5fea0  addiu       $a1, $a1, -0x160
    ctx->pc = 0x13e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966944));
    // 0x13e884: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x13e888: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    // 0x13e88c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x13e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x13e890: 0x260401cc  addiu       $a0, $s0, 0x1CC
    ctx->pc = 0x13e890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 460));
    // 0x13e894: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x13e894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x13e898: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x13e898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x13e89c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x13e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x13e8a0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x13e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x13e8a4: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x13e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x13e8a8: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x13e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x13e8ac: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x13e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x13e8b0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x13e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x13e8b4: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x13e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x13e8b8: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x13e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x13e8bc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13e8c0: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13e8c4: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13e8c8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E8C8u;
    SET_GPR_U32(ctx, 31, 0x13E8D0u);
    ctx->pc = 0x13E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8C8u;
    // 0x13e8cc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E8C8u, 0x13E8D0u)) {
        return;
    }
    ctx->pc = 0x13E8D0u;
label_13e8d0:
    // 0x13e8d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e8d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13e8d8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x13e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x13e8dc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x13e8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8e8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13E8E8u;
    SET_GPR_U32(ctx, 31, 0x13E8F0u);
    ctx->pc = 0x13E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8E8u;
    // 0x13e8ec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13E8E8u, 0x13E8F0u)) {
        return;
    }
    ctx->pc = 0x13E8F0u;
label_13e8f0:
    // 0x13e8f0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13e8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8fc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x13e8fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13e900: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13E900u;
    SET_GPR_U32(ctx, 31, 0x13E908u);
    ctx->pc = 0x13E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E900u;
    // 0x13e904: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13E900u, 0x13E908u)) {
        return;
    }
    ctx->pc = 0x13E908u;
label_13e908:
    // 0x13e908: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13e90c: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x13e910: 0xc0544d8  jal         func_151360
    ctx->pc = 0x13E910u;
    SET_GPR_U32(ctx, 31, 0x13E918u);
    ctx->pc = 0x13E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E910u;
    // 0x13e914: 0x8c4484fc  lw          $a0, -0x7B04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151360u, 0x13E910u, 0x13E918u)) {
        return;
    }
    ctx->pc = 0x13E918u;
label_13e918:
    // 0x13e918: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e91c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13e920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e928: 0x3e00008  jr          $ra
    ctx->pc = 0x13E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E928u;
        // 0x13e92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E930u;
}
