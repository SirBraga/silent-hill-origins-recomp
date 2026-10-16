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

// Function: sub_001FC470
// Address: 0x1fc470 - 0x1fc5e0
void sub_001FC470_0x1fc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC470_0x1fc470");
#endif

    switch (ctx->pc) {
        case 0x1fc4a0u: goto label_1fc4a0;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4b8u: goto label_1fc4b8;
        case 0x1fc4e8u: goto label_1fc4e8;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc5c0u: goto label_1fc5c0;
        default: break;
    }

    ctx->pc = 0x1fc470u;

    // 0x1fc470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fc478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc47c: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x1fc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x1fc480: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fc484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc488: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fc48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fc48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc490: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fc494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc498: 0xc081330  jal         func_204CC0
    ctx->pc = 0x1FC498u;
    SET_GPR_U32(ctx, 31, 0x1FC4A0u);
    ctx->pc = 0x1FC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC498u;
    // 0x1fc49c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204CC0u, 0x1FC498u, 0x1FC4A0u)) {
        return;
    }
    ctx->pc = 0x1FC4A0u;
label_1fc4a0:
    // 0x1fc4a0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FC4A0u;
    SET_GPR_U32(ctx, 31, 0x1FC4A8u);
    ctx->pc = 0x1FC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4A0u;
    // 0x1fc4a4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC4A0u, 0x1FC4A8u)) {
        return;
    }
    ctx->pc = 0x1FC4A8u;
label_1fc4a8:
    // 0x1fc4a8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fc4ac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC4ACu;
    {
        const bool branch_taken_0x1fc4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4ACu;
        // 0x1fc4b0: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4ac) {
            ctx->pc = 0x1FC4D4u;
            goto label_1fc4d4;
        }
    }
    ctx->pc = 0x1FC4B4u;
    // 0x1fc4b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc4b8:
    // 0x1fc4b8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1fc4bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc4c0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1fc4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1fc4c4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc4c8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FC4C8u;
    {
        const bool branch_taken_0x1fc4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc4c8) {
            ctx->pc = 0x1FC4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC4C8u;
            // 0x1fc4cc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc4b8;
        }
    }
    ctx->pc = 0x1FC4D0u;
    // 0x1fc4d0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1fc4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1fc4d4:
    // 0x1fc4d4: 0x32330001  andi        $s3, $s1, 0x1
    ctx->pc = 0x1fc4d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1fc4d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc4dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC4DCu;
    {
        const bool branch_taken_0x1fc4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4DCu;
        // 0x1fc4e0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4dc) {
            ctx->pc = 0x1FC540u;
            goto label_1fc540;
        }
    }
    ctx->pc = 0x1FC4E4u;
    // 0x1fc4e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fc4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc4e8:
    // 0x1fc4e8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC4E8u;
    {
        const bool branch_taken_0x1fc4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc4e8) {
            ctx->pc = 0x1FC4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC4E8u;
            // 0x1fc4ec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC538u;
            goto label_1fc538;
        }
    }
    ctx->pc = 0x1FC4F0u;
    // 0x1fc4f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fc4f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC4F4u;
    {
        const bool branch_taken_0x1fc4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4F4u;
        // 0x1fc4f8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4f4) {
            ctx->pc = 0x1FC504u;
            goto label_1fc504;
        }
    }
    ctx->pc = 0x1FC4FCu;
    // 0x1fc4fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC4FCu;
    {
        const bool branch_taken_0x1fc4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4FCu;
        // 0x1fc500: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4fc) {
            ctx->pc = 0x1FC508u;
            goto label_1fc508;
        }
    }
    ctx->pc = 0x1FC504u;
label_1fc504:
    // 0x1fc504: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fc504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fc508:
    // 0x1fc508: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc50c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC50Cu;
    {
        const bool branch_taken_0x1fc50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC50Cu;
        // 0x1fc510: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc50c) {
            ctx->pc = 0x1FC51Cu;
            goto label_1fc51c;
        }
    }
    ctx->pc = 0x1FC514u;
    // 0x1fc514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC514u;
    {
        const bool branch_taken_0x1fc514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC514u;
        // 0x1fc518: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc514) {
            ctx->pc = 0x1FC520u;
            goto label_1fc520;
        }
    }
    ctx->pc = 0x1FC51Cu;
label_1fc51c:
    // 0x1fc51c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1fc51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1fc520:
    // 0x1fc520: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FC520u;
    SET_GPR_U32(ctx, 31, 0x1FC528u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC520u, 0x1FC528u)) {
        return;
    }
    ctx->pc = 0x1FC528u;
label_1fc528:
    // 0x1fc528: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc52c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc530: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fc530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fc534: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc538:
    // 0x1fc538: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FC538u;
    {
        const bool branch_taken_0x1fc538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc538) {
            ctx->pc = 0x1FC53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC538u;
            // 0x1fc53c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc4e8;
        }
    }
    ctx->pc = 0x1FC540u;
label_1fc540:
    // 0x1fc540: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1fc544: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fc544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fc548: 0x2442f7a8  addiu       $v0, $v0, -0x858
    ctx->pc = 0x1fc548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965160));
    // 0x1fc54c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC54Cu;
    {
        const bool branch_taken_0x1fc54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC54Cu;
        // 0x1fc550: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc54c) {
            ctx->pc = 0x1FC5B0u;
            goto label_1fc5b0;
        }
    }
    ctx->pc = 0x1FC554u;
    // 0x1fc554: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc558:
    // 0x1fc558: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC558u;
    {
        const bool branch_taken_0x1fc558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc558) {
            ctx->pc = 0x1FC55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC558u;
            // 0x1fc55c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC560u;
    // 0x1fc560: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fc560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fc564: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC564u;
    {
        const bool branch_taken_0x1fc564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC564u;
        // 0x1fc568: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc564) {
            ctx->pc = 0x1FC574u;
            goto label_1fc574;
        }
    }
    ctx->pc = 0x1FC56Cu;
    // 0x1fc56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC56Cu;
    {
        const bool branch_taken_0x1fc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC56Cu;
        // 0x1fc570: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc56c) {
            ctx->pc = 0x1FC578u;
            goto label_1fc578;
        }
    }
    ctx->pc = 0x1FC574u;
label_1fc574:
    // 0x1fc574: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fc574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fc578:
    // 0x1fc578: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc57c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC57Cu;
    {
        const bool branch_taken_0x1fc57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC57Cu;
        // 0x1fc580: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc57c) {
            ctx->pc = 0x1FC58Cu;
            goto label_1fc58c;
        }
    }
    ctx->pc = 0x1FC584u;
    // 0x1fc584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC584u;
    {
        const bool branch_taken_0x1fc584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC584u;
        // 0x1fc588: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc584) {
            ctx->pc = 0x1FC590u;
            goto label_1fc590;
        }
    }
    ctx->pc = 0x1FC58Cu;
label_1fc58c:
    // 0x1fc58c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1fc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1fc590:
    // 0x1fc590: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FC590u;
    SET_GPR_U32(ctx, 31, 0x1FC598u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC590u, 0x1FC598u)) {
        return;
    }
    ctx->pc = 0x1FC598u;
label_1fc598:
    // 0x1fc598: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc5a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fc5a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc5a8:
    // 0x1fc5a8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FC5A8u;
    {
        const bool branch_taken_0x1fc5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5a8) {
            ctx->pc = 0x1FC5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC5A8u;
            // 0x1fc5ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC5B0u;
label_1fc5b0:
    // 0x1fc5b0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC5B0u;
    {
        const bool branch_taken_0x1fc5b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5B0u;
        // 0x1fc5b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5b0) {
            ctx->pc = 0x1FC5C4u;
            goto label_1fc5c4;
        }
    }
    ctx->pc = 0x1FC5B8u;
    // 0x1fc5b8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FC5B8u;
    SET_GPR_U32(ctx, 31, 0x1FC5C0u);
    ctx->pc = 0x1FC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC5B8u;
    // 0x1fc5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC5B8u, 0x1FC5C0u)) {
        return;
    }
    ctx->pc = 0x1FC5C0u;
label_1fc5c0:
    // 0x1fc5c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc5c4:
    // 0x1fc5c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc5c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc5cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fc5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5D4u;
        // 0x1fc5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5DCu;
    // 0x1fc5dc: 0x0  nop
    ctx->pc = 0x1fc5dcu;
    // NOP
    ctx->pc = 0x1fc5e0u;
}
