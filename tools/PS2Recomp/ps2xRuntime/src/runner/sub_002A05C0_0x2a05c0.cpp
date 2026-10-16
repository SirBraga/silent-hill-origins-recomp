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

// Function: sub_002A05C0
// Address: 0x2a05c0 - 0x2a0730
void sub_002A05C0_0x2a05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A05C0_0x2a05c0");
#endif

    switch (ctx->pc) {
        case 0x2a0608u: goto label_2a0608;
        case 0x2a0648u: goto label_2a0648;
        case 0x2a06acu: goto label_2a06ac;
        case 0x2a06f4u: goto label_2a06f4;
        default: break;
    }

    ctx->pc = 0x2a05c0u;

    // 0x2a05c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a05c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a05c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a05cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a05ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a05d4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2a05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a05d8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2a05d8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2a05dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a05dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a05e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a05e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a05e8: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x2a05e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a05ec: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x2a05ecu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2a05f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a05f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a05f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2a05f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a05f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a05fc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a05fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a0600: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A0600u;
    SET_GPR_U32(ctx, 31, 0x2A0608u);
    ctx->pc = 0x2A0604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0600u;
    // 0x2a0604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A0600u, 0x2A0608u)) {
        return;
    }
    ctx->pc = 0x2A0608u;
label_2a0608:
    // 0x2a0608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a0608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a060c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a0610: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x2a0610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2a0614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a0618: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x2a0618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2a061c: 0x108502  srl         $s0, $s0, 20
    ctx->pc = 0x2a061cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x2a0620: 0x321207ff  andi        $s2, $s0, 0x7FF
    ctx->pc = 0x2a0620u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2047);
    // 0x2a0624: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0624u;
    {
        const bool branch_taken_0x2a0624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0624u;
        // 0x2a0628: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0624) {
            ctx->pc = 0x2A0638u;
            goto label_2a0638;
        }
    }
    ctx->pc = 0x2A062Cu;
    // 0x2a062c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2a062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2a0630: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a0630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a0634: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2a0634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2a0638:
    // 0x2a0638: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A0638u;
    {
        const bool branch_taken_0x2a0638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0638u;
        // 0x2a063c: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0638) {
            ctx->pc = 0x2A06A0u;
            goto label_2a06a0;
        }
    }
    ctx->pc = 0x2A0640u;
    // 0x2a0640: 0xc0a7f36  jal         func_29FCD8
    ctx->pc = 0x2A0640u;
    SET_GPR_U32(ctx, 31, 0x2A0648u);
    ctx->pc = 0x2A0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0640u;
    // 0x2a0644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FCD8u, 0x2A0640u, 0x2A0648u)) {
        return;
    }
    ctx->pc = 0x2A0648u;
label_2a0648:
    // 0x2a0648: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a0648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a064c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A064Cu;
    {
        const bool branch_taken_0x2a064c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A064Cu;
        // 0x2a0650: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a064c) {
            ctx->pc = 0x2A0678u;
            goto label_2a0678;
        }
    }
    ctx->pc = 0x2A0654u;
    // 0x2a0654: 0x52023  negu        $a0, $a1
    ctx->pc = 0x2a0654u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2a0658: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a0658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a065c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2a065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2a0660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a0660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a0664: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2a0664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2a0668: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a066c: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2a0670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0670u;
    {
        const bool branch_taken_0x2a0670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0670u;
        // 0x2a0674: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0670) {
            ctx->pc = 0x2A0680u;
            goto label_2a0680;
        }
    }
    ctx->pc = 0x2A0678u;
label_2a0678:
    // 0x2a0678: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a067c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2a067cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2a0680:
    // 0x2a0680: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0688: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a068c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2a068cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2a0690: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2a0690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2a0694: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2a0694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0698u;
    {
        const bool branch_taken_0x2a0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0698u;
        // 0x2a069c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0698) {
            ctx->pc = 0x2A06C0u;
            goto label_2a06c0;
        }
    }
    ctx->pc = 0x2A06A0u;
label_2a06a0:
    // 0x2a06a0: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2a06a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a06a4: 0xc0a7f36  jal         func_29FCD8
    ctx->pc = 0x2A06A4u;
    SET_GPR_U32(ctx, 31, 0x2A06ACu);
    ctx->pc = 0x2A06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06A4u;
    // 0x2a06a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FCD8u, 0x2A06A4u, 0x2A06ACu)) {
        return;
    }
    ctx->pc = 0x2A06ACu;
label_2a06ac:
    // 0x2a06ac: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a06b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a06b4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2a06b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2a06b8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2a06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a06bc: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2a06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_2a06c0:
    // 0x2a06c0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A06C0u;
    {
        const bool branch_taken_0x2a06c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06C0u;
        // 0x2a06c4: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06c0) {
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A06C8u;
    // 0x2a06c8: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2a06cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a06d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a06d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A06D4u;
    {
        const bool branch_taken_0x2a06d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06D4u;
        // 0x2a06d8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06d4) {
            ctx->pc = 0x2A06FCu;
            goto label_2a06fc;
        }
    }
    ctx->pc = 0x2A06DCu;
label_2a06dc:
    // 0x2a06dc: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x2a06e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a06e4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2a06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2a06e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a06ec: 0xc0a7f14  jal         func_29FC50
    ctx->pc = 0x2A06ECu;
    SET_GPR_U32(ctx, 31, 0x2A06F4u);
    ctx->pc = 0x2A06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06ECu;
    // 0x2a06f0: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FC50u, 0x2A06ECu, 0x2A06F4u)) {
        return;
    }
    ctx->pc = 0x2A06F4u;
label_2a06f4:
    // 0x2a06f4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2a06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2a06f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a06fc:
    // 0x2a06fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2a06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2a0700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0704: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a0704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0708: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a0708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a070c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2a070cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0710: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a0710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0714: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a0714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0718: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a0718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a071c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a071cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0720: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a0720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0724: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0724u;
        // 0x2a0728: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A072Cu;
    // 0x2a072c: 0x0  nop
    ctx->pc = 0x2a072cu;
    // NOP
    ctx->pc = 0x2a0730u;
}
