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

// Function: sub_0019A8E0
// Address: 0x19a8e0 - 0x19ab90
void sub_0019A8E0_0x19a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A8E0_0x19a8e0");
#endif

    switch (ctx->pc) {
        case 0x19a900u: goto label_19a900;
        case 0x19a918u: goto label_19a918;
        case 0x19a988u: goto label_19a988;
        case 0x19a9a4u: goto label_19a9a4;
        case 0x19a9d4u: goto label_19a9d4;
        case 0x19aa00u: goto label_19aa00;
        case 0x19aa1cu: goto label_19aa1c;
        case 0x19ab30u: goto label_19ab30;
        case 0x19ab3cu: goto label_19ab3c;
        case 0x19ab6cu: goto label_19ab6c;
        default: break;
    }

    ctx->pc = 0x19a8e0u;

    // 0x19a8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a8e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19a8e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19a8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8f0: 0x8c468140  lw          $a2, -0x7EC0($v0)
    ctx->pc = 0x19a8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8140u));
    // 0x19a8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a8f8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x19A8F8u;
    SET_GPR_U32(ctx, 31, 0x19A900u);
    ctx->pc = 0x19A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8F8u;
    // 0x19a8fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19A8F8u, 0x19A900u)) {
        return;
    }
    ctx->pc = 0x19A900u;
label_19a900:
    // 0x19a900: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a908: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x19A908u;
    {
        const bool branch_taken_0x19a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a908) {
            ctx->pc = 0x19A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A908u;
            // 0x19a90c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19A910u;
    // 0x19a910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a914: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a918:
    // 0x19a918: 0x2c830015  sltiu       $v1, $a0, 0x15
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x19a91c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x19A91Cu;
    {
        const bool branch_taken_0x19a91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A91Cu;
        // 0x19a920: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a91c) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19A924u;
    // 0x19a924: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19a928: 0x24429f80  addiu       $v0, $v0, -0x6080
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
    // 0x19a92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19a930: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a934: 0x800008  jr          $a0
    ctx->pc = 0x19A934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A93Cu: goto label_19a93c;
            case 0x19A94Cu: goto label_19a94c;
            case 0x19A95Cu: goto label_19a95c;
            case 0x19A990u: goto label_19a990;
            case 0x19A9ACu: goto label_19a9ac;
            case 0x19A9BCu: goto label_19a9bc;
            case 0x19A9DCu: goto label_19a9dc;
            case 0x19A9ECu: goto label_19a9ec;
            case 0x19AA08u: goto label_19aa08;
            case 0x19AA24u: goto label_19aa24;
            case 0x19AA38u: goto label_19aa38;
            case 0x19AA4Cu: goto label_19aa4c;
            case 0x19AA60u: goto label_19aa60;
            case 0x19AA74u: goto label_19aa74;
            case 0x19AA88u: goto label_19aa88;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AAB8u: goto label_19aab8;
            case 0x19AAD4u: goto label_19aad4;
            case 0x19AAE8u: goto label_19aae8;
            case 0x19AB04u: goto label_19ab04;
            case 0x19AB44u: goto label_19ab44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19A93Cu;
label_19a93c:
    // 0x19a93c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19a93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a940: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19a944: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19A944u;
    {
        const bool branch_taken_0x19a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A944u;
        // 0x19a948: 0x2605007c  addiu       $a1, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a944) {
            ctx->pc = 0x19A9C8u;
            goto label_19a9c8;
        }
    }
    ctx->pc = 0x19A94Cu;
label_19a94c:
    // 0x19a94c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a950: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19a954: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19A954u;
    {
        const bool branch_taken_0x19a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A954u;
        // 0x19a958: 0x26050084  addiu       $a1, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a954) {
            ctx->pc = 0x19A9C8u;
            goto label_19a9c8;
        }
    }
    ctx->pc = 0x19A95Cu;
label_19a95c:
    // 0x19a95c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a960: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19a964: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19a968: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x19A968u;
    {
        const bool branch_taken_0x19a968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A968u;
        // 0x19a96c: 0xae050040  sw          $a1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a968) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19A970u;
    // 0x19a970: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x19a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19a974: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x19A974u;
    {
        const bool branch_taken_0x19a974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A974u;
        // 0x19a978: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a974) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19A97Cu;
    // 0x19a97c: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x19a980: 0xc066be8  jal         func_19AFA0
    ctx->pc = 0x19A980u;
    SET_GPR_U32(ctx, 31, 0x19A988u);
    ctx->pc = 0x19A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A980u;
    // 0x19a984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AFA0u, 0x19A980u, 0x19A988u)) {
        return;
    }
    ctx->pc = 0x19A988u;
label_19a988:
    // 0x19a988: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x19A988u;
    {
        const bool branch_taken_0x19a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A988u;
        // 0x19a98c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a988) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19A990u;
label_19a990:
    // 0x19a990: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a998: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19a99c: 0xc066bd0  jal         func_19AF40
    ctx->pc = 0x19A99Cu;
    SET_GPR_U32(ctx, 31, 0x19A9A4u);
    ctx->pc = 0x19A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A99Cu;
    // 0x19a9a0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AF40u, 0x19A99Cu, 0x19A9A4u)) {
        return;
    }
    ctx->pc = 0x19A9A4u;
label_19a9a4:
    // 0x19a9a4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x19A9A4u;
    {
        const bool branch_taken_0x19a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A4u;
        // 0x19a9a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9a4) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a9b0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19a9b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A9B4u;
    {
        const bool branch_taken_0x19a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9B4u;
        // 0x19a9b8: 0x2605009c  addiu       $a1, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9b4) {
            ctx->pc = 0x19A9C8u;
            goto label_19a9c8;
        }
    }
    ctx->pc = 0x19A9BCu;
label_19a9bc:
    // 0x19a9bc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a9c0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19a9c4: 0x26050094  addiu       $a1, $s0, 0x94
    ctx->pc = 0x19a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_19a9c8:
    // 0x19a9c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9cc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19A9CCu;
    SET_GPR_U32(ctx, 31, 0x19A9D4u);
    ctx->pc = 0x19A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9CCu;
    // 0x19a9d0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19A9CCu, 0x19A9D4u)) {
        return;
    }
    ctx->pc = 0x19A9D4u;
label_19a9d4:
    // 0x19a9d4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x19A9D4u;
    {
        const bool branch_taken_0x19a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9D4u;
        // 0x19a9d8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9d4) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19A9DCu;
label_19a9dc:
    // 0x19a9dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a9e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19a9e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x19A9E4u;
    {
        const bool branch_taken_0x19a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9E4u;
        // 0x19a9e8: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9e4) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19A9ECu;
label_19a9ec:
    // 0x19a9ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a9f0: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x19a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x19a9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9f8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x19A9F8u;
    SET_GPR_U32(ctx, 31, 0x19AA00u);
    ctx->pc = 0x19A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9F8u;
    // 0x19a9fc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x19A9F8u, 0x19AA00u)) {
        return;
    }
    ctx->pc = 0x19AA00u;
label_19aa00:
    // 0x19aa00: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19AA00u;
    {
        const bool branch_taken_0x19aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA00u;
        // 0x19aa04: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa00) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19AA08u;
label_19aa08:
    // 0x19aa08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19aa14: 0xc066b9c  jal         func_19AE70
    ctx->pc = 0x19AA14u;
    SET_GPR_U32(ctx, 31, 0x19AA1Cu);
    ctx->pc = 0x19AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA14u;
    // 0x19aa18: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AE70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AE70u, 0x19AA14u, 0x19AA1Cu)) {
        return;
    }
    ctx->pc = 0x19AA1Cu;
label_19aa1c:
    // 0x19aa1c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x19AA1Cu;
    {
        const bool branch_taken_0x19aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA1Cu;
        // 0x19aa20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa1c) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19AA24u;
label_19aa24:
    // 0x19aa24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa28: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa30: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x19AA30u;
    {
        const bool branch_taken_0x19aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA30u;
        // 0x19aa34: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa30) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AA38u;
label_19aa38:
    // 0x19aa38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa3c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa44: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19AA44u;
    {
        const bool branch_taken_0x19aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA44u;
        // 0x19aa48: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa44) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AA4Cu;
label_19aa4c:
    // 0x19aa4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa50: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa58: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x19AA58u;
    {
        const bool branch_taken_0x19aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA58u;
        // 0x19aa5c: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa58) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AA60u;
label_19aa60:
    // 0x19aa60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa64: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa6c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19AA6Cu;
    {
        const bool branch_taken_0x19aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA6Cu;
        // 0x19aa70: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa6c) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AA74u;
label_19aa74:
    // 0x19aa74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa78: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa80: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x19AA80u;
    {
        const bool branch_taken_0x19aa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa80) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AA88u;
label_19aa88:
    // 0x19aa88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa8c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x19aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aa90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19aa94: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AA94u;
    {
        const bool branch_taken_0x19aa94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA94u;
        // 0x19aa98: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa94) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19AA9Cu;
    // 0x19aa9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19AA9Cu;
    {
        const bool branch_taken_0x19aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA9Cu;
        // 0x19aaa0: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa9c) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AAA4u;
label_19aaa4:
    // 0x19aaa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aaa8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aaac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aab0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19AAB0u;
    {
        const bool branch_taken_0x19aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAB0u;
        // 0x19aab4: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aab0) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AAB8u;
label_19aab8:
    // 0x19aab8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aabc: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aac0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19aac4: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19AAC4u;
    {
        const bool branch_taken_0x19aac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAC4u;
        // 0x19aac8: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aac4) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19AACCu;
    // 0x19aacc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19AACCu;
    {
        const bool branch_taken_0x19aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AACCu;
        // 0x19aad0: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aacc) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AAD4u;
label_19aad4:
    // 0x19aad4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aad8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aadc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aae0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19AAE0u;
    {
        const bool branch_taken_0x19aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAE0u;
        // 0x19aae4: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aae0) {
            ctx->pc = 0x19AB14u;
            goto label_19ab14;
        }
    }
    ctx->pc = 0x19AAE8u;
label_19aae8:
    // 0x19aae8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aaec: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19aaf0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19aaf4: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19AAF4u;
    {
        const bool branch_taken_0x19aaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAF4u;
        // 0x19aaf8: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aaf4) {
            ctx->pc = 0x19AB50u;
            goto label_19ab50;
        }
    }
    ctx->pc = 0x19AAFCu;
    // 0x19aafc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19AAFCu;
    {
        const bool branch_taken_0x19aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAFCu;
        // 0x19ab00: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aafc) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AB04u;
label_19ab04:
    // 0x19ab04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab08: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19ab0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab10: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x19ab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_19ab14:
    // 0x19ab14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19AB14u;
    {
        const bool branch_taken_0x19ab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB14u;
        // 0x19ab18: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab14) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19AB1Cu;
    // 0x19ab1c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_19ab20:
    // 0x19ab20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19AB20u;
    {
        const bool branch_taken_0x19ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB20u;
        // 0x19ab24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab20) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19AB28u;
    // 0x19ab28: 0xc076642  jal         func_1D9908
    ctx->pc = 0x19AB28u;
    SET_GPR_U32(ctx, 31, 0x19AB30u);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x19AB28u, 0x19AB30u)) {
        return;
    }
    ctx->pc = 0x19AB30u;
label_19ab30:
    // 0x19ab30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ab30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab34: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x19AB34u;
    SET_GPR_U32(ctx, 31, 0x19AB3Cu);
    ctx->pc = 0x19AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB34u;
    // 0x19ab38: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x19AB34u, 0x19AB3Cu)) {
        return;
    }
    ctx->pc = 0x19AB3Cu;
label_19ab3c:
    // 0x19ab3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19AB3Cu;
    {
        const bool branch_taken_0x19ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB3Cu;
        // 0x19ab40: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab3c) {
            ctx->pc = 0x19AB54u;
            goto label_19ab54;
        }
    }
    ctx->pc = 0x19AB44u;
label_19ab44:
    // 0x19ab44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ab4c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x19ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_19ab50:
    // 0x19ab50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19ab54:
    // 0x19ab54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ab60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ab64: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x19AB64u;
    SET_GPR_U32(ctx, 31, 0x19AB6Cu);
    ctx->pc = 0x19AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB64u;
    // 0x19ab68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19AB64u, 0x19AB6Cu)) {
        return;
    }
    ctx->pc = 0x19AB6Cu;
label_19ab6c:
    // 0x19ab6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ab74: 0x5460ff68  bnel        $v1, $zero, . + 4 + (-0x98 << 2)
    ctx->pc = 0x19AB74u;
    {
        const bool branch_taken_0x19ab74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab74) {
            ctx->pc = 0x19AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AB74u;
            // 0x19ab78: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a918;
        }
    }
    ctx->pc = 0x19AB7Cu;
    // 0x19ab7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ab7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ab80:
    // 0x19ab80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x19AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB84u;
        // 0x19ab88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0x0  nop
    ctx->pc = 0x19ab8cu;
    // NOP
    ctx->pc = 0x19ab90u;
}
