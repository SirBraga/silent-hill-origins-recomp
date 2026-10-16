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

// Function: sub_001B75B8
// Address: 0x1b75b8 - 0x1b76f8
void sub_001B75B8_0x1b75b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B75B8_0x1b75b8");
#endif

    switch (ctx->pc) {
        case 0x1b75b8u: goto label_1b75b8;
        case 0x1b75bcu: goto label_1b75bc;
        case 0x1b75c0u: goto label_1b75c0;
        case 0x1b75c4u: goto label_1b75c4;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75d0u: goto label_1b75d0;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75d8u: goto label_1b75d8;
        case 0x1b75dcu: goto label_1b75dc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b75e4u: goto label_1b75e4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b75ecu: goto label_1b75ec;
        case 0x1b75f0u: goto label_1b75f0;
        case 0x1b75f4u: goto label_1b75f4;
        case 0x1b75f8u: goto label_1b75f8;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7604u: goto label_1b7604;
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        default: break;
    }

    ctx->pc = 0x1b75b8u;

label_1b75b8:
    // 0x1b75b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b75bc:
    // 0x1b75bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b75c0:
    // 0x1b75c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b75c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b75c4:
    // 0x1b75c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b75c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b75c8:
    // 0x1b75c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b75cc:
    // 0x1b75cc: 0xae0502ac  sw          $a1, 0x2AC($s0)
    ctx->pc = 0x1b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 5));
label_1b75d0:
    // 0x1b75d0: 0xc0640b8  jal         func_1902E0
label_1b75d4:
    if (ctx->pc == 0x1B75D4u) {
        ctx->pc = 0x1B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D0u;
        // 0x1b75d4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75D8u;
        goto label_1b75d8;
    }
    ctx->pc = 0x1B75D0u;
    SET_GPR_U32(ctx, 31, 0x1B75D8u);
    ctx->pc = 0x1B75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75D0u;
    // 0x1b75d4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1B75D0u, 0x1B75D8u)) {
        return;
    }
    ctx->pc = 0x1B75D8u;
label_1b75d8:
    // 0x1b75d8: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1b75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1b75dc:
    // 0x1b75dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1b75e0:
    if (ctx->pc == 0x1B75E0u) {
        ctx->pc = 0x1B75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75DCu;
        // 0x1b75e0: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75E4u;
        goto label_1b75e4;
    }
    ctx->pc = 0x1B75DCu;
    {
        const bool branch_taken_0x1b75dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75DCu;
        // 0x1b75e0: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75dc) {
            ctx->pc = 0x1B7648u;
            goto label_1b7648;
        }
    }
    ctx->pc = 0x1B75E4u;
label_1b75e4:
    // 0x1b75e4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b75e8:
    // 0x1b75e8: 0xc06c97c  jal         func_1B25F0
label_1b75ec:
    if (ctx->pc == 0x1B75ECu) {
        ctx->pc = 0x1B75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E8u;
        // 0x1b75ec: 0x8e05028c  lw          $a1, 0x28C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75F0u;
        goto label_1b75f0;
    }
    ctx->pc = 0x1B75E8u;
    SET_GPR_U32(ctx, 31, 0x1B75F0u);
    ctx->pc = 0x1B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75E8u;
    // 0x1b75ec: 0x8e05028c  lw          $a1, 0x28C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B75E8u, 0x1B75F0u)) {
        return;
    }
    ctx->pc = 0x1B75F0u;
label_1b75f0:
    // 0x1b75f0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b75f4:
    // 0x1b75f4: 0x8e050290  lw          $a1, 0x290($s0)
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1b75f8:
    // 0x1b75f8: 0xc06c97c  jal         func_1B25F0
label_1b75fc:
    if (ctx->pc == 0x1B75FCu) {
        ctx->pc = 0x1B75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75F8u;
        // 0x1b75fc: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7600u;
        goto label_1b7600;
    }
    ctx->pc = 0x1B75F8u;
    SET_GPR_U32(ctx, 31, 0x1B7600u);
    ctx->pc = 0x1B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F8u;
    // 0x1b75fc: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B75F8u, 0x1B7600u)) {
        return;
    }
    ctx->pc = 0x1B7600u;
label_1b7600:
    // 0x1b7600: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x1b7600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_1b7604:
    // 0x1b7604: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x1b7604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1b7608:
    // 0x1b7608: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1b7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1b760c:
    // 0x1b760c: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1b7610:
    // 0x1b7610: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1b7610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1b7614:
    // 0x1b7614: 0x8c6600bc  lw          $a2, 0xBC($v1)
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1b7618:
    // 0x1b7618: 0xc0f809  jalr        $a2
label_1b761c:
    if (ctx->pc == 0x1B761Cu) {
        ctx->pc = 0x1B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7618u;
        // 0x1b761c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7620u;
        goto label_1b7620;
    }
    ctx->pc = 0x1B7618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B7620u);
        ctx->pc = 0x1B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7618u;
        // 0x1b761c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7618u, 0x1B7620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7620u;
label_1b7620:
    // 0x1b7620: 0x8e07029c  lw          $a3, 0x29C($s0)
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1b7624:
    // 0x1b7624: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x1b7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1b7628:
    // 0x1b7628: 0x8ce30258  lw          $v1, 0x258($a3)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_1b762c:
    // 0x1b762c: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1b7630:
    // 0x1b7630: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1b7634:
    // 0x1b7634: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1b7638:
    // 0x1b7638: 0x40f809  jalr        $v0
label_1b763c:
    if (ctx->pc == 0x1B763Cu) {
        ctx->pc = 0x1B763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7638u;
        // 0x1b763c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7640u;
        goto label_1b7640;
    }
    ctx->pc = 0x1B7638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7640u);
        ctx->pc = 0x1B763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7638u;
        // 0x1b763c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7638u, 0x1B7640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7640u;
label_1b7640:
    // 0x1b7640: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1b7644:
    if (ctx->pc == 0x1B7644u) {
        ctx->pc = 0x1B7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7640u;
        // 0x1b7644: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7648u;
        goto label_1b7648;
    }
    ctx->pc = 0x1B7640u;
    {
        const bool branch_taken_0x1b7640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7640u;
        // 0x1b7644: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7640) {
            ctx->pc = 0x1B76ECu;
            goto label_1b76ec;
        }
    }
    ctx->pc = 0x1B7648u;
label_1b7648:
    // 0x1b7648: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b764c:
    // 0x1b764c: 0xc06c97c  jal         func_1B25F0
label_1b7650:
    if (ctx->pc == 0x1B7650u) {
        ctx->pc = 0x1B7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B764Cu;
        // 0x1b7650: 0x8e050294  lw          $a1, 0x294($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7654u;
        goto label_1b7654;
    }
    ctx->pc = 0x1B764Cu;
    SET_GPR_U32(ctx, 31, 0x1B7654u);
    ctx->pc = 0x1B7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B764Cu;
    // 0x1b7650: 0x8e050294  lw          $a1, 0x294($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B764Cu, 0x1B7654u)) {
        return;
    }
    ctx->pc = 0x1B7654u;
label_1b7654:
    // 0x1b7654: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b7654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b7658:
    // 0x1b7658: 0x8e050298  lw          $a1, 0x298($s0)
    ctx->pc = 0x1b7658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1b765c:
    // 0x1b765c: 0xc06c97c  jal         func_1B25F0
label_1b7660:
    if (ctx->pc == 0x1B7660u) {
        ctx->pc = 0x1B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B765Cu;
        // 0x1b7660: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7664u;
        goto label_1b7664;
    }
    ctx->pc = 0x1B765Cu;
    SET_GPR_U32(ctx, 31, 0x1B7664u);
    ctx->pc = 0x1B7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B765Cu;
    // 0x1b7660: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B765Cu, 0x1B7664u)) {
        return;
    }
    ctx->pc = 0x1B7664u;
label_1b7664:
    // 0x1b7664: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b7664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_1b7668:
    // 0x1b7668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b766c:
    // 0x1b766c: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x1b766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_1b7670:
    // 0x1b7670: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7674:
    // 0x1b7674: 0x8e0302b0  lw          $v1, 0x2B0($s0)
    ctx->pc = 0x1b7674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1b7678:
    // 0x1b7678: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1b7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_1b767c:
    // 0x1b767c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7680:
    // 0x1b7680: 0xe60102d8  swc1        $f1, 0x2D8($s0)
    ctx->pc = 0x1b7680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_1b7684:
    // 0x1b7684: 0xc07cd92  jal         func_1F3648
label_1b7688:
    if (ctx->pc == 0x1B7688u) {
        ctx->pc = 0x1B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7684u;
        // 0x1b7688: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B768Cu;
        goto label_1b768c;
    }
    ctx->pc = 0x1B7684u;
    SET_GPR_U32(ctx, 31, 0x1B768Cu);
    ctx->pc = 0x1B7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7684u;
    // 0x1b7688: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B7684u, 0x1B768Cu)) {
        return;
    }
    ctx->pc = 0x1B768Cu;
label_1b768c:
    // 0x1b768c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b768cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_1b7690:
    // 0x1b7690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7694:
    // 0x1b7694: 0xc085ba8  jal         func_216EA0
label_1b7698:
    if (ctx->pc == 0x1B7698u) {
        ctx->pc = 0x1B7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7694u;
        // 0x1b7698: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B769Cu;
        goto label_1b769c;
    }
    ctx->pc = 0x1B7694u;
    SET_GPR_U32(ctx, 31, 0x1B769Cu);
    ctx->pc = 0x1B7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7694u;
    // 0x1b7698: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B7694u, 0x1B769Cu)) {
        return;
    }
    ctx->pc = 0x1B769Cu;
label_1b769c:
    // 0x1b769c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b76a0:
    // 0x1b76a0: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b76a4:
    // 0x1b76a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b76a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b76a8:
    // 0x1b76a8: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x1b76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
label_1b76ac:
    // 0x1b76ac: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1b76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_1b76b0:
    // 0x1b76b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b76b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b76b4:
    // 0x1b76b4: 0x246986a0  addiu       $t1, $v1, -0x7960
    ctx->pc = 0x1b76b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936224));
label_1b76b8:
    // 0x1b76b8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1b76b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b76bc:
    // 0x1b76bc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1b76bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b76c0:
    // 0x1b76c0: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1b76c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b76c4:
    // 0x1b76c4: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1b76c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b76c8:
    // 0x1b76c8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1b76c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b76cc:
    // 0x1b76cc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1b76ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b76d0:
    // 0x1b76d0: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x1b76d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b76d4:
    // 0x1b76d4: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x1b76d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b76d8:
    // 0x1b76d8: 0xc085d44  jal         func_217510
label_1b76dc:
    if (ctx->pc == 0x1B76DCu) {
        ctx->pc = 0x1B76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D8u;
        // 0x1b76dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76E0u;
        goto label_1b76e0;
    }
    ctx->pc = 0x1B76D8u;
    SET_GPR_U32(ctx, 31, 0x1B76E0u);
    ctx->pc = 0x1B76DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76D8u;
    // 0x1b76dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x1B76D8u, 0x1B76E0u)) {
        return;
    }
    ctx->pc = 0x1B76E0u;
label_1b76e0:
    // 0x1b76e0: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1b76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_1b76e4:
    // 0x1b76e4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1b76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_1b76e8:
    // 0x1b76e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b76e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b76ec:
    // 0x1b76ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b76f0:
    // 0x1b76f0: 0x3e00008  jr          $ra
label_1b76f4:
    if (ctx->pc == 0x1B76F4u) {
        ctx->pc = 0x1B76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76F0u;
        // 0x1b76f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76F8u;
        goto label_fallthrough_0x1b76f0;
    }
    ctx->pc = 0x1B76F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76F0u;
        // 0x1b76f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b76f0:
    ctx->pc = 0x1B76F8u;
}
