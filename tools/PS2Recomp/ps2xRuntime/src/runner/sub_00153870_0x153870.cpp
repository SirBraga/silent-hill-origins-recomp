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

// Function: sub_00153870
// Address: 0x153870 - 0x153998
void sub_00153870_0x153870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153870_0x153870");
#endif

    switch (ctx->pc) {
        case 0x1538c4u: goto label_1538c4;
        case 0x1538d4u: goto label_1538d4;
        case 0x1538dcu: goto label_1538dc;
        case 0x1538e4u: goto label_1538e4;
        case 0x1538ecu: goto label_1538ec;
        case 0x153910u: goto label_153910;
        case 0x153928u: goto label_153928;
        case 0x153934u: goto label_153934;
        case 0x153940u: goto label_153940;
        case 0x15394cu: goto label_15394c;
        case 0x153958u: goto label_153958;
        case 0x153964u: goto label_153964;
        case 0x153970u: goto label_153970;
        default: break;
    }

    ctx->pc = 0x153870u;

    // 0x153870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x153874: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x153878: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x153878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15387c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x153880: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x153880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x153884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153888: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x153888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x15388c: 0x244226b8  addiu       $v0, $v0, 0x26B8
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9912));
    // 0x153890: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x153890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x153894: 0x246326d8  addiu       $v1, $v1, 0x26D8
    ctx->pc = 0x153894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9944));
    // 0x153898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15389c: 0x26110058  addiu       $s1, $s0, 0x58
    ctx->pc = 0x15389cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1538a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1538a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1538a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1538a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1538a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1538ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1538acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538b0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1538b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1538b4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1538b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1538b8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1538b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1538bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1538BCu;
    SET_GPR_U32(ctx, 31, 0x1538C4u);
    ctx->pc = 0x1538C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538BCu;
    // 0x1538c0: 0x26140060  addiu       $s4, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1538BCu, 0x1538C4u)) {
        return;
    }
    ctx->pc = 0x1538C4u;
label_1538c4:
    // 0x1538c4: 0x2613008c  addiu       $s3, $s0, 0x8C
    ctx->pc = 0x1538c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1538c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1538c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1538CCu;
    SET_GPR_U32(ctx, 31, 0x1538D4u);
    ctx->pc = 0x1538D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538CCu;
    // 0x1538d0: 0x26120094  addiu       $s2, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1538CCu, 0x1538D4u)) {
        return;
    }
    ctx->pc = 0x1538D4u;
label_1538d4:
    // 0x1538d4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1538D4u;
    SET_GPR_U32(ctx, 31, 0x1538DCu);
    ctx->pc = 0x1538D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538D4u;
    // 0x1538d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1538D4u, 0x1538DCu)) {
        return;
    }
    ctx->pc = 0x1538DCu;
label_1538dc:
    // 0x1538dc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1538DCu;
    SET_GPR_U32(ctx, 31, 0x1538E4u);
    ctx->pc = 0x1538E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538DCu;
    // 0x1538e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1538DCu, 0x1538E4u)) {
        return;
    }
    ctx->pc = 0x1538E4u;
label_1538e4:
    // 0x1538e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1538E4u;
    SET_GPR_U32(ctx, 31, 0x1538ECu);
    ctx->pc = 0x1538E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538E4u;
    // 0x1538e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1538E4u, 0x1538ECu)) {
        return;
    }
    ctx->pc = 0x1538ECu;
label_1538ec:
    // 0x1538ec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1538f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1538F0u;
    {
        const bool branch_taken_0x1538f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1538F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538F0u;
        // 0x1538f4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538f0) {
            ctx->pc = 0x1538FCu;
            goto label_1538fc;
        }
    }
    ctx->pc = 0x1538F8u;
    // 0x1538f8: 0xac4085f4  sw          $zero, -0x7A0C($v0)
    ctx->pc = 0x1538f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936052), GPR_U32(ctx, 0));
label_1538fc:
    // 0x1538fc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x153900: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x153900u;
    {
        const bool branch_taken_0x153900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153900) {
            ctx->pc = 0x153904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153900u;
            // 0x153904: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153918u;
            goto label_153918;
        }
    }
    ctx->pc = 0x153908u;
    // 0x153908: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x153908u;
    SET_GPR_U32(ctx, 31, 0x153910u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x153908u, 0x153910u)) {
        return;
    }
    ctx->pc = 0x153910u;
label_153910:
    // 0x153910: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x153910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x153914: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_153918:
    // 0x153918: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153918u;
    {
        const bool branch_taken_0x153918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153918) {
            ctx->pc = 0x15392Cu;
            goto label_15392c;
        }
    }
    ctx->pc = 0x153920u;
    // 0x153920: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x153920u;
    SET_GPR_U32(ctx, 31, 0x153928u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x153920u, 0x153928u)) {
        return;
    }
    ctx->pc = 0x153928u;
label_153928:
    // 0x153928: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x153928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_15392c:
    // 0x15392c: 0xc054e80  jal         func_153A00
    ctx->pc = 0x15392Cu;
    SET_GPR_U32(ctx, 31, 0x153934u);
    ctx->pc = 0x153930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15392Cu;
    // 0x153930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153A00u, 0x15392Cu, 0x153934u)) {
        return;
    }
    ctx->pc = 0x153934u;
label_153934:
    // 0x153934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153938: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x153938u;
    SET_GPR_U32(ctx, 31, 0x153940u);
    ctx->pc = 0x15393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153938u;
    // 0x15393c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x153938u, 0x153940u)) {
        return;
    }
    ctx->pc = 0x153940u;
label_153940:
    // 0x153940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153944: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x153944u;
    SET_GPR_U32(ctx, 31, 0x15394Cu);
    ctx->pc = 0x153948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153944u;
    // 0x153948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x153944u, 0x15394Cu)) {
        return;
    }
    ctx->pc = 0x15394Cu;
label_15394c:
    // 0x15394c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153950: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x153950u;
    SET_GPR_U32(ctx, 31, 0x153958u);
    ctx->pc = 0x153954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153950u;
    // 0x153954: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x153950u, 0x153958u)) {
        return;
    }
    ctx->pc = 0x153958u;
label_153958:
    // 0x153958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15395c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15395Cu;
    SET_GPR_U32(ctx, 31, 0x153964u);
    ctx->pc = 0x153960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15395Cu;
    // 0x153960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15395Cu, 0x153964u)) {
        return;
    }
    ctx->pc = 0x153964u;
label_153964:
    // 0x153964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153968: 0xc04f084  jal         func_13C210
    ctx->pc = 0x153968u;
    SET_GPR_U32(ctx, 31, 0x153970u);
    ctx->pc = 0x15396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153968u;
    // 0x15396c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x153968u, 0x153970u)) {
        return;
    }
    ctx->pc = 0x153970u;
label_153970:
    // 0x153970: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x153970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153974: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x153974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153978: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x153978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15397c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15397cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153980: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x153980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153984: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x153984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15398c: 0x3e00008  jr          $ra
    ctx->pc = 0x15398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15398Cu;
        // 0x153990: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15398Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153994u;
    // 0x153994: 0x0  nop
    ctx->pc = 0x153994u;
    // NOP
    ctx->pc = 0x153998u;
}
