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

// Function: sub_00280858
// Address: 0x280858 - 0x280ab8
void sub_00280858_0x280858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280858_0x280858");
#endif

    switch (ctx->pc) {
        case 0x280898u: goto label_280898;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808ecu: goto label_2808ec;
        case 0x28094cu: goto label_28094c;
        case 0x280980u: goto label_280980;
        case 0x280988u: goto label_280988;
        case 0x280a08u: goto label_280a08;
        case 0x280a20u: goto label_280a20;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a5cu: goto label_280a5c;
        default: break;
    }

    ctx->pc = 0x280858u;

    // 0x280858: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28085c: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x28085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280860: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x280860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x280864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280868: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x280868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x28086c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28086cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280870: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x280870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x280874: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x280874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280878: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x280878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x28087c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x280880: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x280880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x280884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280888: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x280888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28088c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28088cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280890: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x280894: 0x0  nop
    ctx->pc = 0x280894u;
    // NOP
label_280898:
    // 0x280898: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x280898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28089c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2808a0: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2808A0u;
    {
        const bool branch_taken_0x2808a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2808A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808A0u;
        // 0x2808a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808a0) {
            ctx->pc = 0x2808C0u;
            goto label_2808c0;
        }
    }
    ctx->pc = 0x2808A8u;
    // 0x2808a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2808ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2808acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2808b0: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x2808b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2808b4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2808B4u;
    {
        const bool branch_taken_0x2808b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2808B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808B4u;
        // 0x2808b8: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808b4) {
            ctx->pc = 0x280898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280898;
        }
    }
    ctx->pc = 0x2808BCu;
    // 0x2808bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2808bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2808c0:
    // 0x2808c0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2808c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2808C4u;
    {
        const bool branch_taken_0x2808c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808c4) {
            ctx->pc = 0x2808C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2808C4u;
            // 0x2808c8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2808DCu;
            goto label_2808dc;
        }
    }
    ctx->pc = 0x2808CCu;
    // 0x2808cc: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x2808CCu;
    SET_GPR_U32(ctx, 31, 0x2808D4u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x2808CCu, 0x2808D4u)) {
        return;
    }
    ctx->pc = 0x2808D4u;
label_2808d4:
    // 0x2808d4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2808d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2808d8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2808dc:
    // 0x2808dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2808DCu;
    {
        const bool branch_taken_0x2808dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808dc) {
            ctx->pc = 0x2808F4u;
            goto label_2808f4;
        }
    }
    ctx->pc = 0x2808E4u;
    // 0x2808e4: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x2808E4u;
    SET_GPR_U32(ctx, 31, 0x2808ECu);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x2808E4u, 0x2808ECu)) {
        return;
    }
    ctx->pc = 0x2808ECu;
label_2808ec:
    // 0x2808ec: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2808ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2808f0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2808f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2808f4:
    // 0x2808f4: 0x5220005e  beql        $s1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2808F4u;
    {
        const bool branch_taken_0x2808f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808f4) {
            ctx->pc = 0x2808F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2808F4u;
            // 0x2808f8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A70u;
            goto label_280a70;
        }
    }
    ctx->pc = 0x2808FCu;
    // 0x2808fc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2808fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x280900: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280908: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x280908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x28090c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x28090cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x280910: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x280910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x280914: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x280914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x280918: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x280918u;
    {
        const bool branch_taken_0x280918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280918u;
        // 0x28091c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280918) {
            ctx->pc = 0x280A8Cu;
            goto label_280a8c;
        }
    }
    ctx->pc = 0x280920u;
    // 0x280920: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x280920u;
    {
        const bool branch_taken_0x280920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x280920) {
            ctx->pc = 0x280934u;
            goto label_280934;
        }
    }
    ctx->pc = 0x280928u;
    // 0x280928: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x280928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28092c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x280930: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x280930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_280934:
    // 0x280934: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x280934u;
    {
        const bool branch_taken_0x280934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280934u;
        // 0x280938: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280934) {
            ctx->pc = 0x280A90u;
            goto label_280a90;
        }
    }
    ctx->pc = 0x28093Cu;
    // 0x28093c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280944: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x280944u;
    SET_GPR_U32(ctx, 31, 0x28094Cu);
    ctx->pc = 0x280948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280944u;
    // 0x280948: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x280944u, 0x28094Cu)) {
        return;
    }
    ctx->pc = 0x28094Cu;
label_28094c:
    // 0x28094c: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280954: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x280954u;
    {
        const bool branch_taken_0x280954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x280958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280954u;
        // 0x280958: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280954) {
            ctx->pc = 0x280970u;
            goto label_280970;
        }
    }
    ctx->pc = 0x28095Cu;
    // 0x28095c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x280960: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x280964: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x280964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x280968: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x280968u;
    {
        const bool branch_taken_0x280968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280968u;
        // 0x28096c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280968) {
            ctx->pc = 0x2809D8u;
            goto label_2809d8;
        }
    }
    ctx->pc = 0x280970u;
label_280970:
    // 0x280970: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x280970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x280974: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x280974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x280978: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x280978u;
    {
        const bool branch_taken_0x280978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280978u;
        // 0x28097c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280978) {
            ctx->pc = 0x2809D8u;
            goto label_2809d8;
        }
    }
    ctx->pc = 0x280980u;
label_280980:
    // 0x280980: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x280980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280984: 0x0  nop
    ctx->pc = 0x280984u;
    // NOP
label_280988:
    // 0x280988: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x280988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28098c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x28098cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280990: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280990u;
    {
        const bool branch_taken_0x280990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280990u;
        // 0x280994: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280990) {
            ctx->pc = 0x2809B4u;
            goto label_2809b4;
        }
    }
    ctx->pc = 0x280998u;
    // 0x280998: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x280998u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x28099c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2809a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2809a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2809a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2809a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2809ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2809acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2809b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2809b4:
    // 0x2809b4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2809b8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2809b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2809bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2809BCu;
    {
        const bool branch_taken_0x2809bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809BCu;
        // 0x2809c0: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809bc) {
            ctx->pc = 0x2809D8u;
            goto label_2809d8;
        }
    }
    ctx->pc = 0x2809C4u;
    // 0x2809c4: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2809c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2809c8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2809c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2809cc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2809ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2809d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2809d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2809d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2809d8:
    // 0x2809d8: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x2809d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2809dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2809DCu;
    {
        const bool branch_taken_0x2809dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809DCu;
        // 0x2809e0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809dc) {
            ctx->pc = 0x280A00u;
            goto label_280a00;
        }
    }
    ctx->pc = 0x2809E4u;
    // 0x2809e4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2809e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2809e8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2809E8u;
    {
        const bool branch_taken_0x2809e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2809ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809E8u;
        // 0x2809ec: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809e8) {
            ctx->pc = 0x280980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280980;
        }
    }
    ctx->pc = 0x2809F0u;
    // 0x2809f0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2809f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2809f4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2809f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2809f8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2809F8u;
    {
        const bool branch_taken_0x2809f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2809FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809F8u;
        // 0x2809fc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809f8) {
            ctx->pc = 0x280988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280988;
        }
    }
    ctx->pc = 0x280A00u;
label_280a00:
    // 0x280a00: 0xc08ac1c  jal         func_22B070
    ctx->pc = 0x280A00u;
    SET_GPR_U32(ctx, 31, 0x280A08u);
    ctx->pc = 0x280A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A00u;
    // 0x280a04: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B070u, 0x280A00u, 0x280A08u)) {
        return;
    }
    ctx->pc = 0x280A08u;
label_280a08:
    // 0x280a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a0c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280A0Cu;
    {
        const bool branch_taken_0x280a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A0Cu;
        // 0x280a10: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a0c) {
            ctx->pc = 0x280A24u;
            goto label_280a24;
        }
    }
    ctx->pc = 0x280A14u;
    // 0x280a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a18: 0xc08abf6  jal         func_22AFD8
    ctx->pc = 0x280A18u;
    SET_GPR_U32(ctx, 31, 0x280A20u);
    ctx->pc = 0x280A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A18u;
    // 0x280a1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFD8u, 0x280A18u, 0x280A20u)) {
        return;
    }
    ctx->pc = 0x280A20u;
label_280a20:
    // 0x280a20: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x280a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_280a24:
    // 0x280a24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x280a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x280a28: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x280A28u;
    {
        const bool branch_taken_0x280a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a28) {
            ctx->pc = 0x280A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280A28u;
            // 0x280a2c: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A64u;
            goto label_280a64;
        }
    }
    ctx->pc = 0x280A30u;
    // 0x280a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a34: 0xc0a063c  jal         func_2818F0
    ctx->pc = 0x280A34u;
    SET_GPR_U32(ctx, 31, 0x280A3Cu);
    ctx->pc = 0x280A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A34u;
    // 0x280a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2818F0u, 0x280A34u, 0x280A3Cu)) {
        return;
    }
    ctx->pc = 0x280A3Cu;
label_280a3c:
    // 0x280a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280A3Cu;
    {
        const bool branch_taken_0x280a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A3Cu;
        // 0x280a40: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a3c) {
            ctx->pc = 0x280A4Cu;
            goto label_280a4c;
        }
    }
    ctx->pc = 0x280A44u;
    // 0x280a44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x280A44u;
    {
        const bool branch_taken_0x280a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A44u;
        // 0x280a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a44) {
            ctx->pc = 0x280A90u;
            goto label_280a90;
        }
    }
    ctx->pc = 0x280A4Cu;
label_280a4c:
    // 0x280a4c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280A4Cu;
    {
        const bool branch_taken_0x280a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A4Cu;
        // 0x280a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a4c) {
            ctx->pc = 0x280A6Cu;
            goto label_280a6c;
        }
    }
    ctx->pc = 0x280A54u;
    // 0x280a54: 0xc08abd2  jal         func_22AF48
    ctx->pc = 0x280A54u;
    SET_GPR_U32(ctx, 31, 0x280A5Cu);
    ctx->pc = 0x280A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A54u;
    // 0x280a58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AF48u, 0x280A54u, 0x280A5Cu)) {
        return;
    }
    ctx->pc = 0x280A5Cu;
label_280a5c:
    // 0x280a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x280A5Cu;
    {
        const bool branch_taken_0x280a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A5Cu;
        // 0x280a60: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a5c) {
            ctx->pc = 0x280A70u;
            goto label_280a70;
        }
    }
    ctx->pc = 0x280A64u;
label_280a64:
    // 0x280a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280a68: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x280a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_280a6c:
    // 0x280a6c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_280a70:
    // 0x280a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280a78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x280a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280a7c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x280a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280a80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x280a84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x280a84u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x280a88: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x280a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_280a8c:
    // 0x280a8c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x280a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_280a90:
    // 0x280a90: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x280a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x280a94: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x280a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280a98: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x280a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280a9c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x280a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280aa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x280aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280aa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x280aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x280AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AA8u;
        // 0x280aac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280AB0u;
    // 0x280ab0: 0xaf85c018  sw          $a1, -0x3FE8($gp)
    ctx->pc = 0x280ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950936), GPR_U32(ctx, 5));
    // 0x280ab4: 0x0  nop
    ctx->pc = 0x280ab4u;
    // NOP
    ctx->pc = 0x280ab8u;
}
