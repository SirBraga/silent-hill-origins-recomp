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

// Function: sub_001A47C0
// Address: 0x1a47c0 - 0x1a48a0
void sub_001A47C0_0x1a47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A47C0_0x1a47c0");
#endif

    switch (ctx->pc) {
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4880u: goto label_1a4880;
        default: break;
    }

    ctx->pc = 0x1a47c0u;

    // 0x1a47c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a47c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a47c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a47c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a47cc: 0x2442b128  addiu       $v0, $v0, -0x4ED8
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947112));
    // 0x1a47d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a47d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a47d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a47dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a47e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a47e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a47e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47e8: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x1A47E8u;
    SET_GPR_U32(ctx, 31, 0x1A47F0u);
    ctx->pc = 0x1A47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47E8u;
    // 0x1a47ec: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1A47E8u, 0x1A47F0u)) {
        return;
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0xc06a800  jal         func_1AA000
    ctx->pc = 0x1A47F0u;
    SET_GPR_U32(ctx, 31, 0x1A47F8u);
    ctx->pc = 0x1A47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47F0u;
    // 0x1a47f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA000u, 0x1A47F0u, 0x1A47F8u)) {
        return;
    }
    ctx->pc = 0x1A47F8u;
label_1a47f8:
    // 0x1a47f8: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x1A47F8u;
    SET_GPR_U32(ctx, 31, 0x1A4800u);
    ctx->pc = 0x1A47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47F8u;
    // 0x1a47fc: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1A47F8u, 0x1A4800u)) {
        return;
    }
    ctx->pc = 0x1A4800u;
label_1a4800:
    // 0x1a4800: 0xc06a99c  jal         func_1AA670
    ctx->pc = 0x1A4800u;
    SET_GPR_U32(ctx, 31, 0x1A4808u);
    ctx->pc = 0x1A4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4800u;
    // 0x1a4804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA670u, 0x1A4800u, 0x1A4808u)) {
        return;
    }
    ctx->pc = 0x1A4808u;
label_1a4808:
    // 0x1a4808: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1a480c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a480cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4810: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1A4810u;
    SET_GPR_U32(ctx, 31, 0x1A4818u);
    ctx->pc = 0x1A4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4810u;
    // 0x1a4814: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1A4810u, 0x1A4818u)) {
        return;
    }
    ctx->pc = 0x1A4818u;
label_1a4818:
    // 0x1a4818: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1a4818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1a481c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4820: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1A4820u;
    SET_GPR_U32(ctx, 31, 0x1A4828u);
    ctx->pc = 0x1A4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4820u;
    // 0x1a4824: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1A4820u, 0x1A4828u)) {
        return;
    }
    ctx->pc = 0x1A4828u;
label_1a4828:
    // 0x1a4828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a482c: 0x26104668  addiu       $s0, $s0, 0x4668
    ctx->pc = 0x1a482cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18024));
    // 0x1a4830: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1A4830u;
    SET_GPR_U32(ctx, 31, 0x1A4838u);
    ctx->pc = 0x1A4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4830u;
    // 0x1a4834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1A4830u, 0x1A4838u)) {
        return;
    }
    ctx->pc = 0x1A4838u;
label_1a4838:
    // 0x1a4838: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1a483c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4840: 0x26318180  addiu       $s1, $s1, -0x7E80
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934912));
    // 0x1a4844: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1A4844u;
    SET_GPR_U32(ctx, 31, 0x1A484Cu);
    ctx->pc = 0x1A4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4844u;
    // 0x1a4848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1A4844u, 0x1A484Cu)) {
        return;
    }
    ctx->pc = 0x1A484Cu;
label_1a484c:
    // 0x1a484c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1A484Cu;
    SET_GPR_U32(ctx, 31, 0x1A4854u);
    ctx->pc = 0x1A4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A484Cu;
    // 0x1a4850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1A484Cu, 0x1A4854u)) {
        return;
    }
    ctx->pc = 0x1A4854u;
label_1a4854:
    // 0x1a4854: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1a4854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1a4858: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1A4858u;
    SET_GPR_U32(ctx, 31, 0x1A4860u);
    ctx->pc = 0x1A485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4858u;
    // 0x1a485c: 0x24844608  addiu       $a0, $a0, 0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1A4858u, 0x1A4860u)) {
        return;
    }
    ctx->pc = 0x1A4860u;
label_1a4860:
    // 0x1a4860: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1A4860u;
    SET_GPR_U32(ctx, 31, 0x1A4868u);
    ctx->pc = 0x1A4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4860u;
    // 0x1a4864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1A4860u, 0x1A4868u)) {
        return;
    }
    ctx->pc = 0x1A4868u;
label_1a4868:
    // 0x1a4868: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a4868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a486c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1A486Cu;
    SET_GPR_U32(ctx, 31, 0x1A4874u);
    ctx->pc = 0x1A4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A486Cu;
    // 0x1a4870: 0x24848188  addiu       $a0, $a0, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1A486Cu, 0x1A4874u)) {
        return;
    }
    ctx->pc = 0x1A4874u;
label_1a4874:
    // 0x1a4874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4878: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1A4878u;
    SET_GPR_U32(ctx, 31, 0x1A4880u);
    ctx->pc = 0x1A487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4878u;
    // 0x1a487c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1A4878u, 0x1A4880u)) {
        return;
    }
    ctx->pc = 0x1A4880u;
label_1a4880:
    // 0x1a4880: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4884: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a488c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a488cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4894: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4894u;
        // 0x1a4898: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A489Cu;
    // 0x1a489c: 0x0  nop
    ctx->pc = 0x1a489cu;
    // NOP
    ctx->pc = 0x1a48a0u;
}
